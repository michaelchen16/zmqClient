// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ts_fim_event.proto

#ifndef PROTOBUF_ts_5ffim_5fevent_2eproto__INCLUDED
#define PROTOBUF_ts_5ffim_5fevent_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace ts_fim_events {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ts_5ffim_5fevent_2eproto();
void protobuf_AssignDesc_ts_5ffim_5fevent_2eproto();
void protobuf_ShutdownFile_ts_5ffim_5fevent_2eproto();

class ts_fim_event;

// ===================================================================

class ts_fim_event : public ::google::protobuf::Message {
 public:
  ts_fim_event();
  virtual ~ts_fim_event();

  ts_fim_event(const ts_fim_event& from);

  inline ts_fim_event& operator=(const ts_fim_event& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ts_fim_event& default_instance();

  void Swap(ts_fim_event* other);

  // implements Message ----------------------------------------------

  inline ts_fim_event* New() const { return New(NULL); }

  ts_fim_event* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ts_fim_event& from);
  void MergeFrom(const ts_fim_event& from);
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
  void InternalSwap(ts_fim_event* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required int32 pid = 2;
  bool has_pid() const;
  void clear_pid();
  static const int kPidFieldNumber = 2;
  ::google::protobuf::int32 pid() const;
  void set_pid(::google::protobuf::int32 value);

  // required uint64 datetime = 3;
  bool has_datetime() const;
  void clear_datetime();
  static const int kDatetimeFieldNumber = 3;
  ::google::protobuf::uint64 datetime() const;
  void set_datetime(::google::protobuf::uint64 value);

  // required int32 irp_major = 4;
  bool has_irp_major() const;
  void clear_irp_major();
  static const int kIrpMajorFieldNumber = 4;
  ::google::protobuf::int32 irp_major() const;
  void set_irp_major(::google::protobuf::int32 value);

  // required int32 irp_minor = 5;
  bool has_irp_minor() const;
  void clear_irp_minor();
  static const int kIrpMinorFieldNumber = 5;
  ::google::protobuf::int32 irp_minor() const;
  void set_irp_minor(::google::protobuf::int32 value);

  // required uint64 device_object = 6;
  bool has_device_object() const;
  void clear_device_object();
  static const int kDeviceObjectFieldNumber = 6;
  ::google::protobuf::uint64 device_object() const;
  void set_device_object(::google::protobuf::uint64 value);

  // required uint64 file_object = 7;
  bool has_file_object() const;
  void clear_file_object();
  static const int kFileObjectFieldNumber = 7;
  ::google::protobuf::uint64 file_object() const;
  void set_file_object(::google::protobuf::uint64 value);

  // optional string user = 8;
  bool has_user() const;
  void clear_user();
  static const int kUserFieldNumber = 8;
  const ::std::string& user() const;
  void set_user(const ::std::string& value);
  void set_user(const char* value);
  void set_user(const char* value, size_t size);
  ::std::string* mutable_user();
  ::std::string* release_user();
  void set_allocated_user(::std::string* user);

  // optional string arg1 = 9;
  bool has_arg1() const;
  void clear_arg1();
  static const int kArg1FieldNumber = 9;
  const ::std::string& arg1() const;
  void set_arg1(const ::std::string& value);
  void set_arg1(const char* value);
  void set_arg1(const char* value, size_t size);
  ::std::string* mutable_arg1();
  ::std::string* release_arg1();
  void set_allocated_arg1(::std::string* arg1);

  // optional string arg2 = 10;
  bool has_arg2() const;
  void clear_arg2();
  static const int kArg2FieldNumber = 10;
  const ::std::string& arg2() const;
  void set_arg2(const ::std::string& value);
  void set_arg2(const char* value);
  void set_arg2(const char* value, size_t size);
  ::std::string* mutable_arg2();
  ::std::string* release_arg2();
  void set_allocated_arg2(::std::string* arg2);

  // optional string arg3 = 11;
  bool has_arg3() const;
  void clear_arg3();
  static const int kArg3FieldNumber = 11;
  const ::std::string& arg3() const;
  void set_arg3(const ::std::string& value);
  void set_arg3(const char* value);
  void set_arg3(const char* value, size_t size);
  ::std::string* mutable_arg3();
  ::std::string* release_arg3();
  void set_allocated_arg3(::std::string* arg3);

  // optional string arg4 = 12;
  bool has_arg4() const;
  void clear_arg4();
  static const int kArg4FieldNumber = 12;
  const ::std::string& arg4() const;
  void set_arg4(const ::std::string& value);
  void set_arg4(const char* value);
  void set_arg4(const char* value, size_t size);
  ::std::string* mutable_arg4();
  ::std::string* release_arg4();
  void set_allocated_arg4(::std::string* arg4);

  // optional string arg5 = 13;
  bool has_arg5() const;
  void clear_arg5();
  static const int kArg5FieldNumber = 13;
  const ::std::string& arg5() const;
  void set_arg5(const ::std::string& value);
  void set_arg5(const char* value);
  void set_arg5(const char* value, size_t size);
  ::std::string* mutable_arg5();
  ::std::string* release_arg5();
  void set_allocated_arg5(::std::string* arg5);

  // optional string arg6 = 14;
  bool has_arg6() const;
  void clear_arg6();
  static const int kArg6FieldNumber = 14;
  const ::std::string& arg6() const;
  void set_arg6(const ::std::string& value);
  void set_arg6(const char* value);
  void set_arg6(const char* value, size_t size);
  ::std::string* mutable_arg6();
  ::std::string* release_arg6();
  void set_allocated_arg6(::std::string* arg6);

  // @@protoc_insertion_point(class_scope:ts_fim_events.ts_fim_event)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_pid();
  inline void clear_has_pid();
  inline void set_has_datetime();
  inline void clear_has_datetime();
  inline void set_has_irp_major();
  inline void clear_has_irp_major();
  inline void set_has_irp_minor();
  inline void clear_has_irp_minor();
  inline void set_has_device_object();
  inline void clear_has_device_object();
  inline void set_has_file_object();
  inline void clear_has_file_object();
  inline void set_has_user();
  inline void clear_has_user();
  inline void set_has_arg1();
  inline void clear_has_arg1();
  inline void set_has_arg2();
  inline void clear_has_arg2();
  inline void set_has_arg3();
  inline void clear_has_arg3();
  inline void set_has_arg4();
  inline void clear_has_arg4();
  inline void set_has_arg5();
  inline void clear_has_arg5();
  inline void set_has_arg6();
  inline void clear_has_arg6();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint64 datetime_;
  ::google::protobuf::int32 pid_;
  ::google::protobuf::int32 irp_major_;
  ::google::protobuf::uint64 device_object_;
  ::google::protobuf::uint64 file_object_;
  ::google::protobuf::internal::ArenaStringPtr user_;
  ::google::protobuf::internal::ArenaStringPtr arg1_;
  ::google::protobuf::internal::ArenaStringPtr arg2_;
  ::google::protobuf::internal::ArenaStringPtr arg3_;
  ::google::protobuf::internal::ArenaStringPtr arg4_;
  ::google::protobuf::internal::ArenaStringPtr arg5_;
  ::google::protobuf::internal::ArenaStringPtr arg6_;
  ::google::protobuf::int32 irp_minor_;
  friend void  protobuf_AddDesc_ts_5ffim_5fevent_2eproto();
  friend void protobuf_AssignDesc_ts_5ffim_5fevent_2eproto();
  friend void protobuf_ShutdownFile_ts_5ffim_5fevent_2eproto();

  void InitAsDefaultInstance();
  static ts_fim_event* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ts_fim_event

// required string name = 1;
inline bool ts_fim_event::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ts_fim_event::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ts_fim_event::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ts_fim_event::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& ts_fim_event::name() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.name)
}
inline void ts_fim_event::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.name)
}
inline void ts_fim_event::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.name)
}
inline ::std::string* ts_fim_event::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.name)
}

// required int32 pid = 2;
inline bool ts_fim_event::has_pid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ts_fim_event::set_has_pid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ts_fim_event::clear_has_pid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ts_fim_event::clear_pid() {
  pid_ = 0;
  clear_has_pid();
}
inline ::google::protobuf::int32 ts_fim_event::pid() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.pid)
  return pid_;
}
inline void ts_fim_event::set_pid(::google::protobuf::int32 value) {
  set_has_pid();
  pid_ = value;
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.pid)
}

// required uint64 datetime = 3;
inline bool ts_fim_event::has_datetime() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ts_fim_event::set_has_datetime() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ts_fim_event::clear_has_datetime() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ts_fim_event::clear_datetime() {
  datetime_ = GOOGLE_ULONGLONG(0);
  clear_has_datetime();
}
inline ::google::protobuf::uint64 ts_fim_event::datetime() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.datetime)
  return datetime_;
}
inline void ts_fim_event::set_datetime(::google::protobuf::uint64 value) {
  set_has_datetime();
  datetime_ = value;
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.datetime)
}

// required int32 irp_major = 4;
inline bool ts_fim_event::has_irp_major() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ts_fim_event::set_has_irp_major() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ts_fim_event::clear_has_irp_major() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ts_fim_event::clear_irp_major() {
  irp_major_ = 0;
  clear_has_irp_major();
}
inline ::google::protobuf::int32 ts_fim_event::irp_major() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.irp_major)
  return irp_major_;
}
inline void ts_fim_event::set_irp_major(::google::protobuf::int32 value) {
  set_has_irp_major();
  irp_major_ = value;
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.irp_major)
}

// required int32 irp_minor = 5;
inline bool ts_fim_event::has_irp_minor() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ts_fim_event::set_has_irp_minor() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ts_fim_event::clear_has_irp_minor() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ts_fim_event::clear_irp_minor() {
  irp_minor_ = 0;
  clear_has_irp_minor();
}
inline ::google::protobuf::int32 ts_fim_event::irp_minor() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.irp_minor)
  return irp_minor_;
}
inline void ts_fim_event::set_irp_minor(::google::protobuf::int32 value) {
  set_has_irp_minor();
  irp_minor_ = value;
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.irp_minor)
}

// required uint64 device_object = 6;
inline bool ts_fim_event::has_device_object() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ts_fim_event::set_has_device_object() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ts_fim_event::clear_has_device_object() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ts_fim_event::clear_device_object() {
  device_object_ = GOOGLE_ULONGLONG(0);
  clear_has_device_object();
}
inline ::google::protobuf::uint64 ts_fim_event::device_object() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.device_object)
  return device_object_;
}
inline void ts_fim_event::set_device_object(::google::protobuf::uint64 value) {
  set_has_device_object();
  device_object_ = value;
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.device_object)
}

// required uint64 file_object = 7;
inline bool ts_fim_event::has_file_object() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ts_fim_event::set_has_file_object() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ts_fim_event::clear_has_file_object() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ts_fim_event::clear_file_object() {
  file_object_ = GOOGLE_ULONGLONG(0);
  clear_has_file_object();
}
inline ::google::protobuf::uint64 ts_fim_event::file_object() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.file_object)
  return file_object_;
}
inline void ts_fim_event::set_file_object(::google::protobuf::uint64 value) {
  set_has_file_object();
  file_object_ = value;
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.file_object)
}

// optional string user = 8;
inline bool ts_fim_event::has_user() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void ts_fim_event::set_has_user() {
  _has_bits_[0] |= 0x00000080u;
}
inline void ts_fim_event::clear_has_user() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void ts_fim_event::clear_user() {
  user_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user();
}
inline const ::std::string& ts_fim_event::user() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.user)
  return user_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_user(const ::std::string& value) {
  set_has_user();
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.user)
}
inline void ts_fim_event::set_user(const char* value) {
  set_has_user();
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.user)
}
inline void ts_fim_event::set_user(const char* value, size_t size) {
  set_has_user();
  user_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.user)
}
inline ::std::string* ts_fim_event::mutable_user() {
  set_has_user();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.user)
  return user_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_user() {
  clear_has_user();
  return user_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_user(::std::string* user) {
  if (user != NULL) {
    set_has_user();
  } else {
    clear_has_user();
  }
  user_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.user)
}

// optional string arg1 = 9;
inline bool ts_fim_event::has_arg1() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void ts_fim_event::set_has_arg1() {
  _has_bits_[0] |= 0x00000100u;
}
inline void ts_fim_event::clear_has_arg1() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void ts_fim_event::clear_arg1() {
  arg1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_arg1();
}
inline const ::std::string& ts_fim_event::arg1() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.arg1)
  return arg1_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_arg1(const ::std::string& value) {
  set_has_arg1();
  arg1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.arg1)
}
inline void ts_fim_event::set_arg1(const char* value) {
  set_has_arg1();
  arg1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.arg1)
}
inline void ts_fim_event::set_arg1(const char* value, size_t size) {
  set_has_arg1();
  arg1_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.arg1)
}
inline ::std::string* ts_fim_event::mutable_arg1() {
  set_has_arg1();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.arg1)
  return arg1_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_arg1() {
  clear_has_arg1();
  return arg1_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_arg1(::std::string* arg1) {
  if (arg1 != NULL) {
    set_has_arg1();
  } else {
    clear_has_arg1();
  }
  arg1_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arg1);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.arg1)
}

// optional string arg2 = 10;
inline bool ts_fim_event::has_arg2() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void ts_fim_event::set_has_arg2() {
  _has_bits_[0] |= 0x00000200u;
}
inline void ts_fim_event::clear_has_arg2() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void ts_fim_event::clear_arg2() {
  arg2_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_arg2();
}
inline const ::std::string& ts_fim_event::arg2() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.arg2)
  return arg2_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_arg2(const ::std::string& value) {
  set_has_arg2();
  arg2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.arg2)
}
inline void ts_fim_event::set_arg2(const char* value) {
  set_has_arg2();
  arg2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.arg2)
}
inline void ts_fim_event::set_arg2(const char* value, size_t size) {
  set_has_arg2();
  arg2_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.arg2)
}
inline ::std::string* ts_fim_event::mutable_arg2() {
  set_has_arg2();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.arg2)
  return arg2_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_arg2() {
  clear_has_arg2();
  return arg2_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_arg2(::std::string* arg2) {
  if (arg2 != NULL) {
    set_has_arg2();
  } else {
    clear_has_arg2();
  }
  arg2_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arg2);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.arg2)
}

// optional string arg3 = 11;
inline bool ts_fim_event::has_arg3() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void ts_fim_event::set_has_arg3() {
  _has_bits_[0] |= 0x00000400u;
}
inline void ts_fim_event::clear_has_arg3() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void ts_fim_event::clear_arg3() {
  arg3_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_arg3();
}
inline const ::std::string& ts_fim_event::arg3() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.arg3)
  return arg3_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_arg3(const ::std::string& value) {
  set_has_arg3();
  arg3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.arg3)
}
inline void ts_fim_event::set_arg3(const char* value) {
  set_has_arg3();
  arg3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.arg3)
}
inline void ts_fim_event::set_arg3(const char* value, size_t size) {
  set_has_arg3();
  arg3_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.arg3)
}
inline ::std::string* ts_fim_event::mutable_arg3() {
  set_has_arg3();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.arg3)
  return arg3_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_arg3() {
  clear_has_arg3();
  return arg3_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_arg3(::std::string* arg3) {
  if (arg3 != NULL) {
    set_has_arg3();
  } else {
    clear_has_arg3();
  }
  arg3_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arg3);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.arg3)
}

// optional string arg4 = 12;
inline bool ts_fim_event::has_arg4() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void ts_fim_event::set_has_arg4() {
  _has_bits_[0] |= 0x00000800u;
}
inline void ts_fim_event::clear_has_arg4() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void ts_fim_event::clear_arg4() {
  arg4_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_arg4();
}
inline const ::std::string& ts_fim_event::arg4() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.arg4)
  return arg4_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_arg4(const ::std::string& value) {
  set_has_arg4();
  arg4_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.arg4)
}
inline void ts_fim_event::set_arg4(const char* value) {
  set_has_arg4();
  arg4_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.arg4)
}
inline void ts_fim_event::set_arg4(const char* value, size_t size) {
  set_has_arg4();
  arg4_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.arg4)
}
inline ::std::string* ts_fim_event::mutable_arg4() {
  set_has_arg4();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.arg4)
  return arg4_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_arg4() {
  clear_has_arg4();
  return arg4_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_arg4(::std::string* arg4) {
  if (arg4 != NULL) {
    set_has_arg4();
  } else {
    clear_has_arg4();
  }
  arg4_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arg4);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.arg4)
}

// optional string arg5 = 13;
inline bool ts_fim_event::has_arg5() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void ts_fim_event::set_has_arg5() {
  _has_bits_[0] |= 0x00001000u;
}
inline void ts_fim_event::clear_has_arg5() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void ts_fim_event::clear_arg5() {
  arg5_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_arg5();
}
inline const ::std::string& ts_fim_event::arg5() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.arg5)
  return arg5_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_arg5(const ::std::string& value) {
  set_has_arg5();
  arg5_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.arg5)
}
inline void ts_fim_event::set_arg5(const char* value) {
  set_has_arg5();
  arg5_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.arg5)
}
inline void ts_fim_event::set_arg5(const char* value, size_t size) {
  set_has_arg5();
  arg5_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.arg5)
}
inline ::std::string* ts_fim_event::mutable_arg5() {
  set_has_arg5();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.arg5)
  return arg5_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_arg5() {
  clear_has_arg5();
  return arg5_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_arg5(::std::string* arg5) {
  if (arg5 != NULL) {
    set_has_arg5();
  } else {
    clear_has_arg5();
  }
  arg5_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arg5);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.arg5)
}

// optional string arg6 = 14;
inline bool ts_fim_event::has_arg6() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void ts_fim_event::set_has_arg6() {
  _has_bits_[0] |= 0x00002000u;
}
inline void ts_fim_event::clear_has_arg6() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void ts_fim_event::clear_arg6() {
  arg6_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_arg6();
}
inline const ::std::string& ts_fim_event::arg6() const {
  // @@protoc_insertion_point(field_get:ts_fim_events.ts_fim_event.arg6)
  return arg6_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_arg6(const ::std::string& value) {
  set_has_arg6();
  arg6_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ts_fim_events.ts_fim_event.arg6)
}
inline void ts_fim_event::set_arg6(const char* value) {
  set_has_arg6();
  arg6_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ts_fim_events.ts_fim_event.arg6)
}
inline void ts_fim_event::set_arg6(const char* value, size_t size) {
  set_has_arg6();
  arg6_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ts_fim_events.ts_fim_event.arg6)
}
inline ::std::string* ts_fim_event::mutable_arg6() {
  set_has_arg6();
  // @@protoc_insertion_point(field_mutable:ts_fim_events.ts_fim_event.arg6)
  return arg6_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ts_fim_event::release_arg6() {
  clear_has_arg6();
  return arg6_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ts_fim_event::set_allocated_arg6(::std::string* arg6) {
  if (arg6 != NULL) {
    set_has_arg6();
  } else {
    clear_has_arg6();
  }
  arg6_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arg6);
  // @@protoc_insertion_point(field_set_allocated:ts_fim_events.ts_fim_event.arg6)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ts_fim_events

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ts_5ffim_5fevent_2eproto__INCLUDED
