// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_footpaths.proto

#ifndef PROTOBUF_INCLUDED_proto_5ffootpaths_2eproto
#define PROTOBUF_INCLUDED_proto_5ffootpaths_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "proto_footpath.pb.h"
#include "proto_footpath_range.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_5ffootpaths_2eproto 

namespace protobuf_proto_5ffootpaths_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_proto_5ffootpaths_2eproto
class ProtoFootpaths;
class ProtoFootpathsDefaultTypeInternal;
extern ProtoFootpathsDefaultTypeInternal _ProtoFootpaths_default_instance_;
namespace google {
namespace protobuf {
template<> ::ProtoFootpaths* Arena::CreateMaybeMessage<::ProtoFootpaths>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ProtoFootpaths : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoFootpaths) */ {
 public:
  ProtoFootpaths();
  virtual ~ProtoFootpaths();

  ProtoFootpaths(const ProtoFootpaths& from);

  inline ProtoFootpaths& operator=(const ProtoFootpaths& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProtoFootpaths(ProtoFootpaths&& from) noexcept
    : ProtoFootpaths() {
    *this = ::std::move(from);
  }

  inline ProtoFootpaths& operator=(ProtoFootpaths&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoFootpaths& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoFootpaths* internal_default_instance() {
    return reinterpret_cast<const ProtoFootpaths*>(
               &_ProtoFootpaths_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ProtoFootpaths* other);
  friend void swap(ProtoFootpaths& a, ProtoFootpaths& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoFootpaths* New() const final {
    return CreateMaybeMessage<ProtoFootpaths>(NULL);
  }

  ProtoFootpaths* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProtoFootpaths>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProtoFootpaths& from);
  void MergeFrom(const ProtoFootpaths& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProtoFootpaths* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ProtoFootpath footpaths = 1;
  int footpaths_size() const;
  void clear_footpaths();
  static const int kFootpathsFieldNumber = 1;
  ::ProtoFootpath* mutable_footpaths(int index);
  ::google::protobuf::RepeatedPtrField< ::ProtoFootpath >*
      mutable_footpaths();
  const ::ProtoFootpath& footpaths(int index) const;
  ::ProtoFootpath* add_footpaths();
  const ::google::protobuf::RepeatedPtrField< ::ProtoFootpath >&
      footpaths() const;

  // repeated .ProtoFootpathRange footpath_ranges = 2;
  int footpath_ranges_size() const;
  void clear_footpath_ranges();
  static const int kFootpathRangesFieldNumber = 2;
  ::ProtoFootpathRange* mutable_footpath_ranges(int index);
  ::google::protobuf::RepeatedPtrField< ::ProtoFootpathRange >*
      mutable_footpath_ranges();
  const ::ProtoFootpathRange& footpath_ranges(int index) const;
  ::ProtoFootpathRange* add_footpath_ranges();
  const ::google::protobuf::RepeatedPtrField< ::ProtoFootpathRange >&
      footpath_ranges() const;

  // @@protoc_insertion_point(class_scope:ProtoFootpaths)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ProtoFootpath > footpaths_;
  ::google::protobuf::RepeatedPtrField< ::ProtoFootpathRange > footpath_ranges_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_5ffootpaths_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProtoFootpaths

// repeated .ProtoFootpath footpaths = 1;
inline int ProtoFootpaths::footpaths_size() const {
  return footpaths_.size();
}
inline ::ProtoFootpath* ProtoFootpaths::mutable_footpaths(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoFootpaths.footpaths)
  return footpaths_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ProtoFootpath >*
ProtoFootpaths::mutable_footpaths() {
  // @@protoc_insertion_point(field_mutable_list:ProtoFootpaths.footpaths)
  return &footpaths_;
}
inline const ::ProtoFootpath& ProtoFootpaths::footpaths(int index) const {
  // @@protoc_insertion_point(field_get:ProtoFootpaths.footpaths)
  return footpaths_.Get(index);
}
inline ::ProtoFootpath* ProtoFootpaths::add_footpaths() {
  // @@protoc_insertion_point(field_add:ProtoFootpaths.footpaths)
  return footpaths_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ProtoFootpath >&
ProtoFootpaths::footpaths() const {
  // @@protoc_insertion_point(field_list:ProtoFootpaths.footpaths)
  return footpaths_;
}

// repeated .ProtoFootpathRange footpath_ranges = 2;
inline int ProtoFootpaths::footpath_ranges_size() const {
  return footpath_ranges_.size();
}
inline ::ProtoFootpathRange* ProtoFootpaths::mutable_footpath_ranges(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoFootpaths.footpath_ranges)
  return footpath_ranges_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ProtoFootpathRange >*
ProtoFootpaths::mutable_footpath_ranges() {
  // @@protoc_insertion_point(field_mutable_list:ProtoFootpaths.footpath_ranges)
  return &footpath_ranges_;
}
inline const ::ProtoFootpathRange& ProtoFootpaths::footpath_ranges(int index) const {
  // @@protoc_insertion_point(field_get:ProtoFootpaths.footpath_ranges)
  return footpath_ranges_.Get(index);
}
inline ::ProtoFootpathRange* ProtoFootpaths::add_footpath_ranges() {
  // @@protoc_insertion_point(field_add:ProtoFootpaths.footpath_ranges)
  return footpath_ranges_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ProtoFootpathRange >&
ProtoFootpaths::footpath_ranges() const {
  // @@protoc_insertion_point(field_list:ProtoFootpaths.footpath_ranges)
  return footpath_ranges_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_5ffootpaths_2eproto