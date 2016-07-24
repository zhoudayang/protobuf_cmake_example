cmake_minimum_required(VERSION 3.5)
SET(INPUT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
#将所有proto文件名称存到变量PROTO_INPUT 中
FILE(GLOB PROTO_INPUT ${CMAKE_CURRENT_SOURCE_DIR}/*.proto)
SET(PROTOC "/usr/local/bin/protoc")
SET(PROTOC_C_OUT_FLAG --cpp_out)
SET(PROTO_GEN_DIR ${CMAKE_CURRENT_BINARY_DIR})
MESSAGE(STATUS "PROTOC = ${PROTOC}")
# 利用一个for循环处理proto文件，生成我们需要的C++代码 
FOREACH(PROTO_FILE ${PROTO_INPUT})
  GET_FILENAME_COMPONENT(PROTO_NAME ${PROTO_FILE} NAME_WE)
  SET(CUR_PROTO_GEN
     ${PROTO_GEN_DIR}/${PROTO_NAME}.pb.h
     ${PROTO_GEN_DIR}/${PROTO_NAME}.pb.cc
  )
  SET(PROTO_GEN
     ${PROTO_GEN}
     ${CUR_PROTO_GEN}
  )
  MESSAGE(STATUS "CUR_PROTO_GEN = ${CUR_PROTO_GEN}")
 
  ADD_CUSTOM_COMMAND(
    OUTPUT ${CUR_PROTO_GEN}
    COMMAND ${PROTOC} ${PROTO_FILE} ${PROTOC_C_OUT_FLAG} ${PROTO_GEN_DIR}
            -I${INPUT_DIR}
    DEPENDS ${PROTOC} ${PROTO_FILE}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
  )
endforeach(PROTO_FILE ${PROTO_INPUT})
 
include_directories("/usr/local/Cellar/protobuf/2.6.1/include/google/protobuf")
link_directories("/usr/local/Cellar/protobuf/2.6.1/lib")
 
ADD_LIBRARY(proto STATIC ${PROTO_GEN})
TARGET_LINK_LIBRARIES(proto protobuf)
