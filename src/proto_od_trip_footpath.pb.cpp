// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_od_trip_footpath.proto

#include "../include/proto/proto_od_trip_footpath.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

class ProtoOdTripFootpathDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProtoOdTripFootpath>
      _instance;
} _ProtoOdTripFootpath_default_instance_;
namespace protobuf_proto_5fod_5ftrip_5ffootpath_2eproto {
static void InitDefaultsProtoOdTripFootpath() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ProtoOdTripFootpath_default_instance_;
    new (ptr) ::ProtoOdTripFootpath();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ProtoOdTripFootpath::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProtoOdTripFootpath =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProtoOdTripFootpath}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ProtoOdTripFootpath.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTripFootpath, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTripFootpath, stop_idx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTripFootpath, travel_time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::ProtoOdTripFootpath)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_ProtoOdTripFootpath_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto_od_trip_footpath.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\034proto_od_trip_footpath.proto\"<\n\023ProtoO"
      "dTripFootpath\022\020\n\010stop_idx\030\001 \001(\003\022\023\n\013trave"
      "l_time\030\002 \001(\003b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 100);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto_od_trip_footpath.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_proto_5fod_5ftrip_5ffootpath_2eproto

// ===================================================================

void ProtoOdTripFootpath::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoOdTripFootpath::kStopIdxFieldNumber;
const int ProtoOdTripFootpath::kTravelTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoOdTripFootpath::ProtoOdTripFootpath()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_5fod_5ftrip_5ffootpath_2eproto::scc_info_ProtoOdTripFootpath.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoOdTripFootpath)
}
ProtoOdTripFootpath::ProtoOdTripFootpath(const ProtoOdTripFootpath& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&stop_idx_, &from.stop_idx_,
    static_cast<size_t>(reinterpret_cast<char*>(&travel_time_) -
    reinterpret_cast<char*>(&stop_idx_)) + sizeof(travel_time_));
  // @@protoc_insertion_point(copy_constructor:ProtoOdTripFootpath)
}

void ProtoOdTripFootpath::SharedCtor() {
  ::memset(&stop_idx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&travel_time_) -
      reinterpret_cast<char*>(&stop_idx_)) + sizeof(travel_time_));
}

ProtoOdTripFootpath::~ProtoOdTripFootpath() {
  // @@protoc_insertion_point(destructor:ProtoOdTripFootpath)
  SharedDtor();
}

void ProtoOdTripFootpath::SharedDtor() {
}

void ProtoOdTripFootpath::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProtoOdTripFootpath::descriptor() {
  ::protobuf_proto_5fod_5ftrip_5ffootpath_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fod_5ftrip_5ffootpath_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoOdTripFootpath& ProtoOdTripFootpath::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_5fod_5ftrip_5ffootpath_2eproto::scc_info_ProtoOdTripFootpath.base);
  return *internal_default_instance();
}


void ProtoOdTripFootpath::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoOdTripFootpath)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&stop_idx_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&travel_time_) -
      reinterpret_cast<char*>(&stop_idx_)) + sizeof(travel_time_));
  _internal_metadata_.Clear();
}

bool ProtoOdTripFootpath::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoOdTripFootpath)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 stop_idx = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &stop_idx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 travel_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &travel_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtoOdTripFootpath)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoOdTripFootpath)
  return false;
#undef DO_
}

void ProtoOdTripFootpath::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoOdTripFootpath)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 stop_idx = 1;
  if (this->stop_idx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->stop_idx(), output);
  }

  // int64 travel_time = 2;
  if (this->travel_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->travel_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoOdTripFootpath)
}

::google::protobuf::uint8* ProtoOdTripFootpath::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoOdTripFootpath)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 stop_idx = 1;
  if (this->stop_idx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->stop_idx(), target);
  }

  // int64 travel_time = 2;
  if (this->travel_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->travel_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoOdTripFootpath)
  return target;
}

size_t ProtoOdTripFootpath::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoOdTripFootpath)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int64 stop_idx = 1;
  if (this->stop_idx() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->stop_idx());
  }

  // int64 travel_time = 2;
  if (this->travel_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->travel_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoOdTripFootpath::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoOdTripFootpath)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoOdTripFootpath* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoOdTripFootpath>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoOdTripFootpath)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoOdTripFootpath)
    MergeFrom(*source);
  }
}

void ProtoOdTripFootpath::MergeFrom(const ProtoOdTripFootpath& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoOdTripFootpath)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.stop_idx() != 0) {
    set_stop_idx(from.stop_idx());
  }
  if (from.travel_time() != 0) {
    set_travel_time(from.travel_time());
  }
}

void ProtoOdTripFootpath::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoOdTripFootpath)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoOdTripFootpath::CopyFrom(const ProtoOdTripFootpath& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoOdTripFootpath)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoOdTripFootpath::IsInitialized() const {
  return true;
}

void ProtoOdTripFootpath::Swap(ProtoOdTripFootpath* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoOdTripFootpath::InternalSwap(ProtoOdTripFootpath* other) {
  using std::swap;
  swap(stop_idx_, other->stop_idx_);
  swap(travel_time_, other->travel_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProtoOdTripFootpath::GetMetadata() const {
  protobuf_proto_5fod_5ftrip_5ffootpath_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fod_5ftrip_5ffootpath_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ProtoOdTripFootpath* Arena::CreateMaybeMessage< ::ProtoOdTripFootpath >(Arena* arena) {
  return Arena::CreateInternal< ::ProtoOdTripFootpath >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)