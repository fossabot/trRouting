// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_od_trips.proto

#include "../include/proto/proto_od_trips.pb.h"

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

namespace protobuf_proto_5fod_5ftrip_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_5fod_5ftrip_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_ProtoOdTrip;
}  // namespace protobuf_proto_5fod_5ftrip_2eproto
namespace protobuf_proto_5fod_5ftrips_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_proto_5fod_5ftrips_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ProtoOdTrips_IndexesByIdEntry_DoNotUse;
}  // namespace protobuf_proto_5fod_5ftrips_2eproto
class ProtoOdTrips_IndexesByIdEntry_DoNotUseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProtoOdTrips_IndexesByIdEntry_DoNotUse>
      _instance;
} _ProtoOdTrips_IndexesByIdEntry_DoNotUse_default_instance_;
class ProtoOdTripsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ProtoOdTrips>
      _instance;
} _ProtoOdTrips_default_instance_;
namespace protobuf_proto_5fod_5ftrips_2eproto {
static void InitDefaultsProtoOdTrips_IndexesByIdEntry_DoNotUse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ProtoOdTrips_IndexesByIdEntry_DoNotUse_default_instance_;
    new (ptr) ::ProtoOdTrips_IndexesByIdEntry_DoNotUse();
  }
  ::ProtoOdTrips_IndexesByIdEntry_DoNotUse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ProtoOdTrips_IndexesByIdEntry_DoNotUse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsProtoOdTrips_IndexesByIdEntry_DoNotUse}, {}};

static void InitDefaultsProtoOdTrips() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ProtoOdTrips_default_instance_;
    new (ptr) ::ProtoOdTrips();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ProtoOdTrips::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_ProtoOdTrips =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsProtoOdTrips}, {
      &protobuf_proto_5fod_5ftrip_2eproto::scc_info_ProtoOdTrip.base,
      &protobuf_proto_5fod_5ftrips_2eproto::scc_info_ProtoOdTrips_IndexesByIdEntry_DoNotUse.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ProtoOdTrips_IndexesByIdEntry_DoNotUse.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ProtoOdTrips.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips_IndexesByIdEntry_DoNotUse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips_IndexesByIdEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips_IndexesByIdEntry_DoNotUse, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips_IndexesByIdEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips, od_trips_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ProtoOdTrips, indexes_by_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::ProtoOdTrips_IndexesByIdEntry_DoNotUse)},
  { 9, -1, sizeof(::ProtoOdTrips)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_ProtoOdTrips_IndexesByIdEntry_DoNotUse_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::_ProtoOdTrips_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "proto_od_trips.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\024proto_od_trips.proto\032\023proto_od_trip.pr"
      "oto\"\231\001\n\014ProtoOdTrips\022\036\n\010od_trips\030\001 \003(\0132\014"
      ".ProtoOdTrip\0225\n\rindexes_by_id\030\002 \003(\0132\036.Pr"
      "otoOdTrips.IndexesByIdEntry\0322\n\020IndexesBy"
      "IdEntry\022\013\n\003key\030\001 \001(\003\022\r\n\005value\030\002 \001(\003:\0028\001b"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 207);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto_od_trips.proto", &protobuf_RegisterTypes);
  ::protobuf_proto_5fod_5ftrip_2eproto::AddDescriptors();
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
}  // namespace protobuf_proto_5fod_5ftrips_2eproto

// ===================================================================

ProtoOdTrips_IndexesByIdEntry_DoNotUse::ProtoOdTrips_IndexesByIdEntry_DoNotUse() {}
ProtoOdTrips_IndexesByIdEntry_DoNotUse::ProtoOdTrips_IndexesByIdEntry_DoNotUse(::google::protobuf::Arena* arena) : SuperType(arena) {}
void ProtoOdTrips_IndexesByIdEntry_DoNotUse::MergeFrom(const ProtoOdTrips_IndexesByIdEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::google::protobuf::Metadata ProtoOdTrips_IndexesByIdEntry_DoNotUse::GetMetadata() const {
  ::protobuf_proto_5fod_5ftrips_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fod_5ftrips_2eproto::file_level_metadata[0];
}
void ProtoOdTrips_IndexesByIdEntry_DoNotUse::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}


// ===================================================================

void ProtoOdTrips::InitAsDefaultInstance() {
}
void ProtoOdTrips::clear_od_trips() {
  od_trips_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoOdTrips::kOdTripsFieldNumber;
const int ProtoOdTrips::kIndexesByIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoOdTrips::ProtoOdTrips()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proto_5fod_5ftrips_2eproto::scc_info_ProtoOdTrips.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoOdTrips)
}
ProtoOdTrips::ProtoOdTrips(const ProtoOdTrips& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      od_trips_(from.od_trips_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  indexes_by_id_.MergeFrom(from.indexes_by_id_);
  // @@protoc_insertion_point(copy_constructor:ProtoOdTrips)
}

void ProtoOdTrips::SharedCtor() {
}

ProtoOdTrips::~ProtoOdTrips() {
  // @@protoc_insertion_point(destructor:ProtoOdTrips)
  SharedDtor();
}

void ProtoOdTrips::SharedDtor() {
}

void ProtoOdTrips::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ProtoOdTrips::descriptor() {
  ::protobuf_proto_5fod_5ftrips_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fod_5ftrips_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoOdTrips& ProtoOdTrips::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_proto_5fod_5ftrips_2eproto::scc_info_ProtoOdTrips.base);
  return *internal_default_instance();
}


void ProtoOdTrips::Clear() {
// @@protoc_insertion_point(message_clear_start:ProtoOdTrips)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  od_trips_.Clear();
  indexes_by_id_.Clear();
  _internal_metadata_.Clear();
}

bool ProtoOdTrips::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoOdTrips)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ProtoOdTrip od_trips = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_od_trips()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<int64, int64> indexes_by_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          ProtoOdTrips_IndexesByIdEntry_DoNotUse::Parser< ::google::protobuf::internal::MapField<
              ProtoOdTrips_IndexesByIdEntry_DoNotUse,
              ::google::protobuf::int64, ::google::protobuf::int64,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT64,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 > > parser(&indexes_by_id_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
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
  // @@protoc_insertion_point(parse_success:ProtoOdTrips)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoOdTrips)
  return false;
#undef DO_
}

void ProtoOdTrips::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoOdTrips)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ProtoOdTrip od_trips = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->od_trips_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1,
      this->od_trips(static_cast<int>(i)),
      output);
  }

  // map<int64, int64> indexes_by_id = 2;
  if (!this->indexes_by_id().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (output->IsSerializationDeterministic() &&
        this->indexes_by_id().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->indexes_by_id().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_iterator
          it = this->indexes_by_id().begin();
          it != this->indexes_by_id().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<ProtoOdTrips_IndexesByIdEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(indexes_by_id_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
      }
    } else {
      ::std::unique_ptr<ProtoOdTrips_IndexesByIdEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_iterator
          it = this->indexes_by_id().begin();
          it != this->indexes_by_id().end(); ++it) {
        entry.reset(indexes_by_id_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoOdTrips)
}

::google::protobuf::uint8* ProtoOdTrips::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ProtoOdTrips)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ProtoOdTrip od_trips = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->od_trips_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->od_trips(static_cast<int>(i)), deterministic, target);
  }

  // map<int64, int64> indexes_by_id = 2;
  if (!this->indexes_by_id().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int64, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;

    if (deterministic &&
        this->indexes_by_id().size() > 1) {
      ::std::unique_ptr<SortItem[]> items(
          new SortItem[this->indexes_by_id().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_iterator
          it = this->indexes_by_id().begin();
          it != this->indexes_by_id().end(); ++it, ++n) {
        items[static_cast<ptrdiff_t>(n)] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[static_cast<ptrdiff_t>(n)], Less());
      ::std::unique_ptr<ProtoOdTrips_IndexesByIdEntry_DoNotUse> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(indexes_by_id_.NewEntryWrapper(
            items[static_cast<ptrdiff_t>(i)].second->first, items[static_cast<ptrdiff_t>(i)].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
      }
    } else {
      ::std::unique_ptr<ProtoOdTrips_IndexesByIdEntry_DoNotUse> entry;
      for (::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_iterator
          it = this->indexes_by_id().begin();
          it != this->indexes_by_id().end(); ++it) {
        entry.reset(indexes_by_id_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
      }
    }
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoOdTrips)
  return target;
}

size_t ProtoOdTrips::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ProtoOdTrips)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .ProtoOdTrip od_trips = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->od_trips_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->od_trips(static_cast<int>(i)));
    }
  }

  // map<int64, int64> indexes_by_id = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->indexes_by_id_size());
  {
    ::std::unique_ptr<ProtoOdTrips_IndexesByIdEntry_DoNotUse> entry;
    for (::google::protobuf::Map< ::google::protobuf::int64, ::google::protobuf::int64 >::const_iterator
        it = this->indexes_by_id().begin();
        it != this->indexes_by_id().end(); ++it) {
      entry.reset(indexes_by_id_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoOdTrips::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ProtoOdTrips)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoOdTrips* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoOdTrips>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ProtoOdTrips)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ProtoOdTrips)
    MergeFrom(*source);
  }
}

void ProtoOdTrips::MergeFrom(const ProtoOdTrips& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ProtoOdTrips)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  od_trips_.MergeFrom(from.od_trips_);
  indexes_by_id_.MergeFrom(from.indexes_by_id_);
}

void ProtoOdTrips::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ProtoOdTrips)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoOdTrips::CopyFrom(const ProtoOdTrips& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ProtoOdTrips)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoOdTrips::IsInitialized() const {
  return true;
}

void ProtoOdTrips::Swap(ProtoOdTrips* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoOdTrips::InternalSwap(ProtoOdTrips* other) {
  using std::swap;
  CastToBase(&od_trips_)->InternalSwap(CastToBase(&other->od_trips_));
  indexes_by_id_.Swap(&other->indexes_by_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ProtoOdTrips::GetMetadata() const {
  protobuf_proto_5fod_5ftrips_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_proto_5fod_5ftrips_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ProtoOdTrips_IndexesByIdEntry_DoNotUse* Arena::CreateMaybeMessage< ::ProtoOdTrips_IndexesByIdEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateInternal< ::ProtoOdTrips_IndexesByIdEntry_DoNotUse >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ProtoOdTrips* Arena::CreateMaybeMessage< ::ProtoOdTrips >(Arena* arena) {
  return Arena::CreateInternal< ::ProtoOdTrips >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)