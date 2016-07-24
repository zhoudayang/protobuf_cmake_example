// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: head.proto

#ifndef PROTOBUF_head_2eproto__INCLUDED
#define PROTOBUF_head_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_head_2eproto();
void protobuf_AssignDesc_head_2eproto();
void protobuf_ShutdownFile_head_2eproto();

class head;

// ===================================================================

class head : public ::google::protobuf::Message {
 public:
  head();
  virtual ~head();

  head(const head& from);

  inline head& operator=(const head& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const head& default_instance();

  void Swap(head* other);

  // implements Message ----------------------------------------------

  head* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const head& from);
  void MergeFrom(const head& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // required bytes st = 2;
  inline bool has_st() const;
  inline void clear_st();
  static const int kStFieldNumber = 2;
  inline const ::std::string& st() const;
  inline void set_st(const ::std::string& value);
  inline void set_st(const char* value);
  inline void set_st(const void* value, size_t size);
  inline ::std::string* mutable_st();
  inline ::std::string* release_st();
  inline void set_allocated_st(::std::string* st);

  // @@protoc_insertion_point(class_scope:head)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_st();
  inline void clear_has_st();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* st_;
  ::google::protobuf::int32 type_;
  friend void  protobuf_AddDesc_head_2eproto();
  friend void protobuf_AssignDesc_head_2eproto();
  friend void protobuf_ShutdownFile_head_2eproto();

  void InitAsDefaultInstance();
  static head* default_instance_;
};
// ===================================================================


// ===================================================================

// head

// required int32 type = 1;
inline bool head::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void head::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void head::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void head::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 head::type() const {
  // @@protoc_insertion_point(field_get:head.type)
  return type_;
}
inline void head::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:head.type)
}

// required bytes st = 2;
inline bool head::has_st() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void head::set_has_st() {
  _has_bits_[0] |= 0x00000002u;
}
inline void head::clear_has_st() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void head::clear_st() {
  if (st_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    st_->clear();
  }
  clear_has_st();
}
inline const ::std::string& head::st() const {
  // @@protoc_insertion_point(field_get:head.st)
  return *st_;
}
inline void head::set_st(const ::std::string& value) {
  set_has_st();
  if (st_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    st_ = new ::std::string;
  }
  st_->assign(value);
  // @@protoc_insertion_point(field_set:head.st)
}
inline void head::set_st(const char* value) {
  set_has_st();
  if (st_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    st_ = new ::std::string;
  }
  st_->assign(value);
  // @@protoc_insertion_point(field_set_char:head.st)
}
inline void head::set_st(const void* value, size_t size) {
  set_has_st();
  if (st_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    st_ = new ::std::string;
  }
  st_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:head.st)
}
inline ::std::string* head::mutable_st() {
  set_has_st();
  if (st_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    st_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:head.st)
  return st_;
}
inline ::std::string* head::release_st() {
  clear_has_st();
  if (st_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = st_;
    st_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void head::set_allocated_st(::std::string* st) {
  if (st_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete st_;
  }
  if (st) {
    set_has_st();
    st_ = st;
  } else {
    clear_has_st();
    st_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:head.st)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_head_2eproto__INCLUDED
