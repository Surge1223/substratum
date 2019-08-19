// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: frameworks/base/tools/aapt2/ResourcesInternal.proto

#ifndef PROTOBUF_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto__INCLUDED
#define PROTOBUF_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "frameworks/base/tools/aapt2/Resources.pb.h"
// @@protoc_insertion_point(includes)

namespace aapt {
namespace pb {
namespace internal {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();
void protobuf_AssignDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();
void protobuf_ShutdownFile_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();

class CompiledFile;
class CompiledFile_Symbol;

// ===================================================================

class CompiledFile_Symbol : public ::google::protobuf::MessageLite {
 public:
  CompiledFile_Symbol();
  virtual ~CompiledFile_Symbol();

  CompiledFile_Symbol(const CompiledFile_Symbol& from);

  inline CompiledFile_Symbol& operator=(const CompiledFile_Symbol& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const CompiledFile_Symbol& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CompiledFile_Symbol* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CompiledFile_Symbol* other);

  // implements Message ----------------------------------------------

  inline CompiledFile_Symbol* New() const { return New(NULL); }

  CompiledFile_Symbol* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CompiledFile_Symbol& from);
  void MergeFrom(const CompiledFile_Symbol& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CompiledFile_Symbol* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string resource_name = 1;
  bool has_resource_name() const;
  void clear_resource_name();
  static const int kResourceNameFieldNumber = 1;
  const ::std::string& resource_name() const;
  void set_resource_name(const ::std::string& value);
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  ::std::string* mutable_resource_name();
  ::std::string* release_resource_name();
  void set_allocated_resource_name(::std::string* resource_name);

  // optional .aapt.pb.SourcePosition source = 2;
  bool has_source() const;
  void clear_source();
  static const int kSourceFieldNumber = 2;
  const ::aapt::pb::SourcePosition& source() const;
  ::aapt::pb::SourcePosition* mutable_source();
  ::aapt::pb::SourcePosition* release_source();
  void set_allocated_source(::aapt::pb::SourcePosition* source);

  // @@protoc_insertion_point(class_scope:aapt.pb.internal.CompiledFile.Symbol)
 private:
  inline void set_has_resource_name();
  inline void clear_has_resource_name();
  inline void set_has_source();
  inline void clear_has_source();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr resource_name_;
  ::aapt::pb::SourcePosition* source_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();
  #endif
  friend void protobuf_AssignDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();
  friend void protobuf_ShutdownFile_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();

  void InitAsDefaultInstance();
  static CompiledFile_Symbol* default_instance_;
};
// -------------------------------------------------------------------

class CompiledFile : public ::google::protobuf::MessageLite {
 public:
  CompiledFile();
  virtual ~CompiledFile();

  CompiledFile(const CompiledFile& from);

  inline CompiledFile& operator=(const CompiledFile& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const CompiledFile& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const CompiledFile* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(CompiledFile* other);

  // implements Message ----------------------------------------------

  inline CompiledFile* New() const { return New(NULL); }

  CompiledFile* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const CompiledFile& from);
  void MergeFrom(const CompiledFile& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CompiledFile* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef CompiledFile_Symbol Symbol;

  // accessors -------------------------------------------------------

  // optional string resource_name = 1;
  bool has_resource_name() const;
  void clear_resource_name();
  static const int kResourceNameFieldNumber = 1;
  const ::std::string& resource_name() const;
  void set_resource_name(const ::std::string& value);
  void set_resource_name(const char* value);
  void set_resource_name(const char* value, size_t size);
  ::std::string* mutable_resource_name();
  ::std::string* release_resource_name();
  void set_allocated_resource_name(::std::string* resource_name);

  // optional .aapt.pb.ConfigDescription config = 2;
  bool has_config() const;
  void clear_config();
  static const int kConfigFieldNumber = 2;
  const ::aapt::pb::ConfigDescription& config() const;
  ::aapt::pb::ConfigDescription* mutable_config();
  ::aapt::pb::ConfigDescription* release_config();
  void set_allocated_config(::aapt::pb::ConfigDescription* config);

  // optional string source_path = 3;
  bool has_source_path() const;
  void clear_source_path();
  static const int kSourcePathFieldNumber = 3;
  const ::std::string& source_path() const;
  void set_source_path(const ::std::string& value);
  void set_source_path(const char* value);
  void set_source_path(const char* value, size_t size);
  ::std::string* mutable_source_path();
  ::std::string* release_source_path();
  void set_allocated_source_path(::std::string* source_path);

  // repeated .aapt.pb.internal.CompiledFile.Symbol exported_symbol = 4;
  int exported_symbol_size() const;
  void clear_exported_symbol();
  static const int kExportedSymbolFieldNumber = 4;
  const ::aapt::pb::internal::CompiledFile_Symbol& exported_symbol(int index) const;
  ::aapt::pb::internal::CompiledFile_Symbol* mutable_exported_symbol(int index);
  ::aapt::pb::internal::CompiledFile_Symbol* add_exported_symbol();
  ::google::protobuf::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >*
      mutable_exported_symbol();
  const ::google::protobuf::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >&
      exported_symbol() const;

  // optional .aapt.pb.XmlNode xml_root = 5;
  bool has_xml_root() const;
  void clear_xml_root();
  static const int kXmlRootFieldNumber = 5;
  const ::aapt::pb::XmlNode& xml_root() const;
  ::aapt::pb::XmlNode* mutable_xml_root();
  ::aapt::pb::XmlNode* release_xml_root();
  void set_allocated_xml_root(::aapt::pb::XmlNode* xml_root);

  // @@protoc_insertion_point(class_scope:aapt.pb.internal.CompiledFile)
 private:
  inline void set_has_resource_name();
  inline void clear_has_resource_name();
  inline void set_has_config();
  inline void clear_has_config();
  inline void set_has_source_path();
  inline void clear_has_source_path();
  inline void set_has_xml_root();
  inline void clear_has_xml_root();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr resource_name_;
  ::aapt::pb::ConfigDescription* config_;
  ::google::protobuf::internal::ArenaStringPtr source_path_;
  ::google::protobuf::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol > exported_symbol_;
  ::aapt::pb::XmlNode* xml_root_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();
  #endif
  friend void protobuf_AssignDesc_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();
  friend void protobuf_ShutdownFile_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto();

  void InitAsDefaultInstance();
  static CompiledFile* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CompiledFile_Symbol

// optional string resource_name = 1;
inline bool CompiledFile_Symbol::has_resource_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CompiledFile_Symbol::set_has_resource_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CompiledFile_Symbol::clear_has_resource_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CompiledFile_Symbol::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_resource_name();
}
inline const ::std::string& CompiledFile_Symbol::resource_name() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.Symbol.resource_name)
  return resource_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile_Symbol::set_resource_name(const ::std::string& value) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline void CompiledFile_Symbol::set_resource_name(const char* value) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline void CompiledFile_Symbol::set_resource_name(const char* value, size_t size) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}
inline ::std::string* CompiledFile_Symbol::mutable_resource_name() {
  set_has_resource_name();
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.Symbol.resource_name)
  return resource_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CompiledFile_Symbol::release_resource_name() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.Symbol.resource_name)
  clear_has_resource_name();
  return resource_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile_Symbol::set_allocated_resource_name(::std::string* resource_name) {
  if (resource_name != NULL) {
    set_has_resource_name();
  } else {
    clear_has_resource_name();
  }
  resource_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.Symbol.resource_name)
}

// optional .aapt.pb.SourcePosition source = 2;
inline bool CompiledFile_Symbol::has_source() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CompiledFile_Symbol::set_has_source() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CompiledFile_Symbol::clear_has_source() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CompiledFile_Symbol::clear_source() {
  if (source_ != NULL) source_->::aapt::pb::SourcePosition::Clear();
  clear_has_source();
}
inline const ::aapt::pb::SourcePosition& CompiledFile_Symbol::source() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.Symbol.source)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return source_ != NULL ? *source_ : *default_instance().source_;
#else
  return source_ != NULL ? *source_ : *default_instance_->source_;
#endif
}
inline ::aapt::pb::SourcePosition* CompiledFile_Symbol::mutable_source() {
  set_has_source();
  if (source_ == NULL) {
    source_ = new ::aapt::pb::SourcePosition;
  }
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.Symbol.source)
  return source_;
}
inline ::aapt::pb::SourcePosition* CompiledFile_Symbol::release_source() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.Symbol.source)
  clear_has_source();
  ::aapt::pb::SourcePosition* temp = source_;
  source_ = NULL;
  return temp;
}
inline void CompiledFile_Symbol::set_allocated_source(::aapt::pb::SourcePosition* source) {
  delete source_;
  source_ = source;
  if (source) {
    set_has_source();
  } else {
    clear_has_source();
  }
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.Symbol.source)
}

// -------------------------------------------------------------------

// CompiledFile

// optional string resource_name = 1;
inline bool CompiledFile::has_resource_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CompiledFile::set_has_resource_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CompiledFile::clear_has_resource_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CompiledFile::clear_resource_name() {
  resource_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_resource_name();
}
inline const ::std::string& CompiledFile::resource_name() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.resource_name)
  return resource_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile::set_resource_name(const ::std::string& value) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.resource_name)
}
inline void CompiledFile::set_resource_name(const char* value) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aapt.pb.internal.CompiledFile.resource_name)
}
inline void CompiledFile::set_resource_name(const char* value, size_t size) {
  set_has_resource_name();
  resource_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aapt.pb.internal.CompiledFile.resource_name)
}
inline ::std::string* CompiledFile::mutable_resource_name() {
  set_has_resource_name();
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.resource_name)
  return resource_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CompiledFile::release_resource_name() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.resource_name)
  clear_has_resource_name();
  return resource_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile::set_allocated_resource_name(::std::string* resource_name) {
  if (resource_name != NULL) {
    set_has_resource_name();
  } else {
    clear_has_resource_name();
  }
  resource_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resource_name);
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.resource_name)
}

// optional .aapt.pb.ConfigDescription config = 2;
inline bool CompiledFile::has_config() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CompiledFile::set_has_config() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CompiledFile::clear_has_config() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CompiledFile::clear_config() {
  if (config_ != NULL) config_->::aapt::pb::ConfigDescription::Clear();
  clear_has_config();
}
inline const ::aapt::pb::ConfigDescription& CompiledFile::config() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.config)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return config_ != NULL ? *config_ : *default_instance().config_;
#else
  return config_ != NULL ? *config_ : *default_instance_->config_;
#endif
}
inline ::aapt::pb::ConfigDescription* CompiledFile::mutable_config() {
  set_has_config();
  if (config_ == NULL) {
    config_ = new ::aapt::pb::ConfigDescription;
  }
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.config)
  return config_;
}
inline ::aapt::pb::ConfigDescription* CompiledFile::release_config() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.config)
  clear_has_config();
  ::aapt::pb::ConfigDescription* temp = config_;
  config_ = NULL;
  return temp;
}
inline void CompiledFile::set_allocated_config(::aapt::pb::ConfigDescription* config) {
  delete config_;
  config_ = config;
  if (config) {
    set_has_config();
  } else {
    clear_has_config();
  }
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.config)
}

// optional string source_path = 3;
inline bool CompiledFile::has_source_path() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CompiledFile::set_has_source_path() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CompiledFile::clear_has_source_path() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CompiledFile::clear_source_path() {
  source_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_source_path();
}
inline const ::std::string& CompiledFile::source_path() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.source_path)
  return source_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile::set_source_path(const ::std::string& value) {
  set_has_source_path();
  source_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aapt.pb.internal.CompiledFile.source_path)
}
inline void CompiledFile::set_source_path(const char* value) {
  set_has_source_path();
  source_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aapt.pb.internal.CompiledFile.source_path)
}
inline void CompiledFile::set_source_path(const char* value, size_t size) {
  set_has_source_path();
  source_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aapt.pb.internal.CompiledFile.source_path)
}
inline ::std::string* CompiledFile::mutable_source_path() {
  set_has_source_path();
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.source_path)
  return source_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CompiledFile::release_source_path() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.source_path)
  clear_has_source_path();
  return source_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CompiledFile::set_allocated_source_path(::std::string* source_path) {
  if (source_path != NULL) {
    set_has_source_path();
  } else {
    clear_has_source_path();
  }
  source_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), source_path);
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.source_path)
}

// repeated .aapt.pb.internal.CompiledFile.Symbol exported_symbol = 4;
inline int CompiledFile::exported_symbol_size() const {
  return exported_symbol_.size();
}
inline void CompiledFile::clear_exported_symbol() {
  exported_symbol_.Clear();
}
inline const ::aapt::pb::internal::CompiledFile_Symbol& CompiledFile::exported_symbol(int index) const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_.Get(index);
}
inline ::aapt::pb::internal::CompiledFile_Symbol* CompiledFile::mutable_exported_symbol(int index) {
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_.Mutable(index);
}
inline ::aapt::pb::internal::CompiledFile_Symbol* CompiledFile::add_exported_symbol() {
  // @@protoc_insertion_point(field_add:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >*
CompiledFile::mutable_exported_symbol() {
  // @@protoc_insertion_point(field_mutable_list:aapt.pb.internal.CompiledFile.exported_symbol)
  return &exported_symbol_;
}
inline const ::google::protobuf::RepeatedPtrField< ::aapt::pb::internal::CompiledFile_Symbol >&
CompiledFile::exported_symbol() const {
  // @@protoc_insertion_point(field_list:aapt.pb.internal.CompiledFile.exported_symbol)
  return exported_symbol_;
}

// optional .aapt.pb.XmlNode xml_root = 5;
inline bool CompiledFile::has_xml_root() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CompiledFile::set_has_xml_root() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CompiledFile::clear_has_xml_root() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CompiledFile::clear_xml_root() {
  if (xml_root_ != NULL) xml_root_->::aapt::pb::XmlNode::Clear();
  clear_has_xml_root();
}
inline const ::aapt::pb::XmlNode& CompiledFile::xml_root() const {
  // @@protoc_insertion_point(field_get:aapt.pb.internal.CompiledFile.xml_root)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return xml_root_ != NULL ? *xml_root_ : *default_instance().xml_root_;
#else
  return xml_root_ != NULL ? *xml_root_ : *default_instance_->xml_root_;
#endif
}
inline ::aapt::pb::XmlNode* CompiledFile::mutable_xml_root() {
  set_has_xml_root();
  if (xml_root_ == NULL) {
    xml_root_ = new ::aapt::pb::XmlNode;
  }
  // @@protoc_insertion_point(field_mutable:aapt.pb.internal.CompiledFile.xml_root)
  return xml_root_;
}
inline ::aapt::pb::XmlNode* CompiledFile::release_xml_root() {
  // @@protoc_insertion_point(field_release:aapt.pb.internal.CompiledFile.xml_root)
  clear_has_xml_root();
  ::aapt::pb::XmlNode* temp = xml_root_;
  xml_root_ = NULL;
  return temp;
}
inline void CompiledFile::set_allocated_xml_root(::aapt::pb::XmlNode* xml_root) {
  delete xml_root_;
  xml_root_ = xml_root;
  if (xml_root) {
    set_has_xml_root();
  } else {
    clear_has_xml_root();
  }
  // @@protoc_insertion_point(field_set_allocated:aapt.pb.internal.CompiledFile.xml_root)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace internal
}  // namespace pb
}  // namespace aapt

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_frameworks_2fbase_2ftools_2faapt2_2fResourcesInternal_2eproto__INCLUDED