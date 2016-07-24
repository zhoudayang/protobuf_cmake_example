# 将proto中的文件加入include 路径
include_directories(${PROJECT_BINARY_DIR}/proto)
# 引入protobuf
include_directories("/usr/local/Cellar/protobuf/2.6.1/include/google/protobuf")
link_directories("/usr/local/Cellar/protobuf/2.6.1/lib")
# 最终生成的可执行文件名称
set(TARGET test_protobuf)
set(SRCFILES main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
add_executable(${TARGET} ${SRCFILES})
# 将proto 和protobuf 加入链接库
target_link_libraries(${TARGET} proto protobuf)
