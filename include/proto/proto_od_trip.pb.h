// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_od_trip.proto

#ifndef PROTOBUF_INCLUDED_proto_5fod_5ftrip_2eproto
#define PROTOBUF_INCLUDED_proto_5fod_5ftrip_2eproto

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
#include "proto_od_trip_footpath.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_proto_5fod_5ftrip_2eproto 

namespace protobuf_proto_5fod_5ftrip_2eproto {
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
}  // namespace protobuf_proto_5fod_5ftrip_2eproto
class ProtoOdTrip;
class ProtoOdTripDefaultTypeInternal;
extern ProtoOdTripDefaultTypeInternal _ProtoOdTrip_default_instance_;
namespace google {
namespace protobuf {
template<> ::ProtoOdTrip* Arena::CreateMaybeMessage<::ProtoOdTrip>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class ProtoOdTrip : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ProtoOdTrip) */ {
 public:
  ProtoOdTrip();
  virtual ~ProtoOdTrip();

  ProtoOdTrip(const ProtoOdTrip& from);

  inline ProtoOdTrip& operator=(const ProtoOdTrip& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProtoOdTrip(ProtoOdTrip&& from) noexcept
    : ProtoOdTrip() {
    *this = ::std::move(from);
  }

  inline ProtoOdTrip& operator=(ProtoOdTrip&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProtoOdTrip& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProtoOdTrip* internal_default_instance() {
    return reinterpret_cast<const ProtoOdTrip*>(
               &_ProtoOdTrip_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ProtoOdTrip* other);
  friend void swap(ProtoOdTrip& a, ProtoOdTrip& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProtoOdTrip* New() const final {
    return CreateMaybeMessage<ProtoOdTrip>(NULL);
  }

  ProtoOdTrip* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProtoOdTrip>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ProtoOdTrip& from);
  void MergeFrom(const ProtoOdTrip& from);
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
  void InternalSwap(ProtoOdTrip* other);
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

  // repeated .ProtoOdTripFootpath access_footpaths = 17;
  int access_footpaths_size() const;
  void clear_access_footpaths();
  static const int kAccessFootpathsFieldNumber = 17;
  ::ProtoOdTripFootpath* mutable_access_footpaths(int index);
  ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >*
      mutable_access_footpaths();
  const ::ProtoOdTripFootpath& access_footpaths(int index) const;
  ::ProtoOdTripFootpath* add_access_footpaths();
  const ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >&
      access_footpaths() const;

  // repeated .ProtoOdTripFootpath egress_footpaths = 18;
  int egress_footpaths_size() const;
  void clear_egress_footpaths();
  static const int kEgressFootpathsFieldNumber = 18;
  ::ProtoOdTripFootpath* mutable_egress_footpaths(int index);
  ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >*
      mutable_egress_footpaths();
  const ::ProtoOdTripFootpath& egress_footpaths(int index) const;
  ::ProtoOdTripFootpath* add_egress_footpaths();
  const ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >&
      egress_footpaths() const;

  // string age_group = 11;
  void clear_age_group();
  static const int kAgeGroupFieldNumber = 11;
  const ::std::string& age_group() const;
  void set_age_group(const ::std::string& value);
  #if LANG_CXX11
  void set_age_group(::std::string&& value);
  #endif
  void set_age_group(const char* value);
  void set_age_group(const char* value, size_t size);
  ::std::string* mutable_age_group();
  ::std::string* release_age_group();
  void set_allocated_age_group(::std::string* age_group);

  // string gender = 12;
  void clear_gender();
  static const int kGenderFieldNumber = 12;
  const ::std::string& gender() const;
  void set_gender(const ::std::string& value);
  #if LANG_CXX11
  void set_gender(::std::string&& value);
  #endif
  void set_gender(const char* value);
  void set_gender(const char* value, size_t size);
  ::std::string* mutable_gender();
  ::std::string* release_gender();
  void set_allocated_gender(::std::string* gender);

  // string mode = 13;
  void clear_mode();
  static const int kModeFieldNumber = 13;
  const ::std::string& mode() const;
  void set_mode(const ::std::string& value);
  #if LANG_CXX11
  void set_mode(::std::string&& value);
  #endif
  void set_mode(const char* value);
  void set_mode(const char* value, size_t size);
  ::std::string* mutable_mode();
  ::std::string* release_mode();
  void set_allocated_mode(::std::string* mode);

  // string occupation = 14;
  void clear_occupation();
  static const int kOccupationFieldNumber = 14;
  const ::std::string& occupation() const;
  void set_occupation(const ::std::string& value);
  #if LANG_CXX11
  void set_occupation(::std::string&& value);
  #endif
  void set_occupation(const char* value);
  void set_occupation(const char* value, size_t size);
  ::std::string* mutable_occupation();
  ::std::string* release_occupation();
  void set_allocated_occupation(::std::string* occupation);

  // string activity_origin = 15;
  void clear_activity_origin();
  static const int kActivityOriginFieldNumber = 15;
  const ::std::string& activity_origin() const;
  void set_activity_origin(const ::std::string& value);
  #if LANG_CXX11
  void set_activity_origin(::std::string&& value);
  #endif
  void set_activity_origin(const char* value);
  void set_activity_origin(const char* value, size_t size);
  ::std::string* mutable_activity_origin();
  ::std::string* release_activity_origin();
  void set_allocated_activity_origin(::std::string* activity_origin);

  // string activity_destination = 16;
  void clear_activity_destination();
  static const int kActivityDestinationFieldNumber = 16;
  const ::std::string& activity_destination() const;
  void set_activity_destination(const ::std::string& value);
  #if LANG_CXX11
  void set_activity_destination(::std::string&& value);
  #endif
  void set_activity_destination(const char* value);
  void set_activity_destination(const char* value, size_t size);
  ::std::string* mutable_activity_destination();
  ::std::string* release_activity_destination();
  void set_allocated_activity_destination(::std::string* activity_destination);

  // int64 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int64 id() const;
  void set_id(::google::protobuf::int64 value);

  // int64 person_id = 2;
  void clear_person_id();
  static const int kPersonIdFieldNumber = 2;
  ::google::protobuf::int64 person_id() const;
  void set_person_id(::google::protobuf::int64 value);

  // int64 household_id = 3;
  void clear_household_id();
  static const int kHouseholdIdFieldNumber = 3;
  ::google::protobuf::int64 household_id() const;
  void set_household_id(::google::protobuf::int64 value);

  // int64 age = 4;
  void clear_age();
  static const int kAgeFieldNumber = 4;
  ::google::protobuf::int64 age() const;
  void set_age(::google::protobuf::int64 value);

  // int64 departure_time_seconds = 5;
  void clear_departure_time_seconds();
  static const int kDepartureTimeSecondsFieldNumber = 5;
  ::google::protobuf::int64 departure_time_seconds() const;
  void set_departure_time_seconds(::google::protobuf::int64 value);

  // int64 arrival_time_seconds = 6;
  void clear_arrival_time_seconds();
  static const int kArrivalTimeSecondsFieldNumber = 6;
  ::google::protobuf::int64 arrival_time_seconds() const;
  void set_arrival_time_seconds(::google::protobuf::int64 value);

  // int64 walking_travel_time_seconds = 7;
  void clear_walking_travel_time_seconds();
  static const int kWalkingTravelTimeSecondsFieldNumber = 7;
  ::google::protobuf::int64 walking_travel_time_seconds() const;
  void set_walking_travel_time_seconds(::google::protobuf::int64 value);

  // int64 cycling_travel_time_seconds = 8;
  void clear_cycling_travel_time_seconds();
  static const int kCyclingTravelTimeSecondsFieldNumber = 8;
  ::google::protobuf::int64 cycling_travel_time_seconds() const;
  void set_cycling_travel_time_seconds(::google::protobuf::int64 value);

  // int64 driving_travel_time_seconds = 9;
  void clear_driving_travel_time_seconds();
  static const int kDrivingTravelTimeSecondsFieldNumber = 9;
  ::google::protobuf::int64 driving_travel_time_seconds() const;
  void set_driving_travel_time_seconds(::google::protobuf::int64 value);

  // double expansion_factor = 10;
  void clear_expansion_factor();
  static const int kExpansionFactorFieldNumber = 10;
  double expansion_factor() const;
  void set_expansion_factor(double value);

  // double origin_latitude = 19;
  void clear_origin_latitude();
  static const int kOriginLatitudeFieldNumber = 19;
  double origin_latitude() const;
  void set_origin_latitude(double value);

  // double origin_longitude = 20;
  void clear_origin_longitude();
  static const int kOriginLongitudeFieldNumber = 20;
  double origin_longitude() const;
  void set_origin_longitude(double value);

  // double destination_latitude = 21;
  void clear_destination_latitude();
  static const int kDestinationLatitudeFieldNumber = 21;
  double destination_latitude() const;
  void set_destination_latitude(double value);

  // double destination_longitude = 22;
  void clear_destination_longitude();
  static const int kDestinationLongitudeFieldNumber = 22;
  double destination_longitude() const;
  void set_destination_longitude(double value);

  // double home_latitude = 23;
  void clear_home_latitude();
  static const int kHomeLatitudeFieldNumber = 23;
  double home_latitude() const;
  void set_home_latitude(double value);

  // double home_longitude = 24;
  void clear_home_longitude();
  static const int kHomeLongitudeFieldNumber = 24;
  double home_longitude() const;
  void set_home_longitude(double value);

  // @@protoc_insertion_point(class_scope:ProtoOdTrip)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath > access_footpaths_;
  ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath > egress_footpaths_;
  ::google::protobuf::internal::ArenaStringPtr age_group_;
  ::google::protobuf::internal::ArenaStringPtr gender_;
  ::google::protobuf::internal::ArenaStringPtr mode_;
  ::google::protobuf::internal::ArenaStringPtr occupation_;
  ::google::protobuf::internal::ArenaStringPtr activity_origin_;
  ::google::protobuf::internal::ArenaStringPtr activity_destination_;
  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 person_id_;
  ::google::protobuf::int64 household_id_;
  ::google::protobuf::int64 age_;
  ::google::protobuf::int64 departure_time_seconds_;
  ::google::protobuf::int64 arrival_time_seconds_;
  ::google::protobuf::int64 walking_travel_time_seconds_;
  ::google::protobuf::int64 cycling_travel_time_seconds_;
  ::google::protobuf::int64 driving_travel_time_seconds_;
  double expansion_factor_;
  double origin_latitude_;
  double origin_longitude_;
  double destination_latitude_;
  double destination_longitude_;
  double home_latitude_;
  double home_longitude_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_proto_5fod_5ftrip_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProtoOdTrip

// int64 id = 1;
inline void ProtoOdTrip::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::id() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.id)
  return id_;
}
inline void ProtoOdTrip::set_id(::google::protobuf::int64 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.id)
}

// int64 person_id = 2;
inline void ProtoOdTrip::clear_person_id() {
  person_id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::person_id() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.person_id)
  return person_id_;
}
inline void ProtoOdTrip::set_person_id(::google::protobuf::int64 value) {
  
  person_id_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.person_id)
}

// int64 household_id = 3;
inline void ProtoOdTrip::clear_household_id() {
  household_id_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::household_id() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.household_id)
  return household_id_;
}
inline void ProtoOdTrip::set_household_id(::google::protobuf::int64 value) {
  
  household_id_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.household_id)
}

// int64 age = 4;
inline void ProtoOdTrip::clear_age() {
  age_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::age() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.age)
  return age_;
}
inline void ProtoOdTrip::set_age(::google::protobuf::int64 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.age)
}

// int64 departure_time_seconds = 5;
inline void ProtoOdTrip::clear_departure_time_seconds() {
  departure_time_seconds_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::departure_time_seconds() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.departure_time_seconds)
  return departure_time_seconds_;
}
inline void ProtoOdTrip::set_departure_time_seconds(::google::protobuf::int64 value) {
  
  departure_time_seconds_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.departure_time_seconds)
}

// int64 arrival_time_seconds = 6;
inline void ProtoOdTrip::clear_arrival_time_seconds() {
  arrival_time_seconds_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::arrival_time_seconds() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.arrival_time_seconds)
  return arrival_time_seconds_;
}
inline void ProtoOdTrip::set_arrival_time_seconds(::google::protobuf::int64 value) {
  
  arrival_time_seconds_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.arrival_time_seconds)
}

// int64 walking_travel_time_seconds = 7;
inline void ProtoOdTrip::clear_walking_travel_time_seconds() {
  walking_travel_time_seconds_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::walking_travel_time_seconds() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.walking_travel_time_seconds)
  return walking_travel_time_seconds_;
}
inline void ProtoOdTrip::set_walking_travel_time_seconds(::google::protobuf::int64 value) {
  
  walking_travel_time_seconds_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.walking_travel_time_seconds)
}

// int64 cycling_travel_time_seconds = 8;
inline void ProtoOdTrip::clear_cycling_travel_time_seconds() {
  cycling_travel_time_seconds_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::cycling_travel_time_seconds() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.cycling_travel_time_seconds)
  return cycling_travel_time_seconds_;
}
inline void ProtoOdTrip::set_cycling_travel_time_seconds(::google::protobuf::int64 value) {
  
  cycling_travel_time_seconds_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.cycling_travel_time_seconds)
}

// int64 driving_travel_time_seconds = 9;
inline void ProtoOdTrip::clear_driving_travel_time_seconds() {
  driving_travel_time_seconds_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ProtoOdTrip::driving_travel_time_seconds() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.driving_travel_time_seconds)
  return driving_travel_time_seconds_;
}
inline void ProtoOdTrip::set_driving_travel_time_seconds(::google::protobuf::int64 value) {
  
  driving_travel_time_seconds_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.driving_travel_time_seconds)
}

// double expansion_factor = 10;
inline void ProtoOdTrip::clear_expansion_factor() {
  expansion_factor_ = 0;
}
inline double ProtoOdTrip::expansion_factor() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.expansion_factor)
  return expansion_factor_;
}
inline void ProtoOdTrip::set_expansion_factor(double value) {
  
  expansion_factor_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.expansion_factor)
}

// string age_group = 11;
inline void ProtoOdTrip::clear_age_group() {
  age_group_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoOdTrip::age_group() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.age_group)
  return age_group_.GetNoArena();
}
inline void ProtoOdTrip::set_age_group(const ::std::string& value) {
  
  age_group_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoOdTrip.age_group)
}
#if LANG_CXX11
inline void ProtoOdTrip::set_age_group(::std::string&& value) {
  
  age_group_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoOdTrip.age_group)
}
#endif
inline void ProtoOdTrip::set_age_group(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  age_group_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoOdTrip.age_group)
}
inline void ProtoOdTrip::set_age_group(const char* value, size_t size) {
  
  age_group_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoOdTrip.age_group)
}
inline ::std::string* ProtoOdTrip::mutable_age_group() {
  
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.age_group)
  return age_group_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoOdTrip::release_age_group() {
  // @@protoc_insertion_point(field_release:ProtoOdTrip.age_group)
  
  return age_group_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoOdTrip::set_allocated_age_group(::std::string* age_group) {
  if (age_group != NULL) {
    
  } else {
    
  }
  age_group_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), age_group);
  // @@protoc_insertion_point(field_set_allocated:ProtoOdTrip.age_group)
}

// string gender = 12;
inline void ProtoOdTrip::clear_gender() {
  gender_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoOdTrip::gender() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.gender)
  return gender_.GetNoArena();
}
inline void ProtoOdTrip::set_gender(const ::std::string& value) {
  
  gender_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoOdTrip.gender)
}
#if LANG_CXX11
inline void ProtoOdTrip::set_gender(::std::string&& value) {
  
  gender_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoOdTrip.gender)
}
#endif
inline void ProtoOdTrip::set_gender(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  gender_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoOdTrip.gender)
}
inline void ProtoOdTrip::set_gender(const char* value, size_t size) {
  
  gender_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoOdTrip.gender)
}
inline ::std::string* ProtoOdTrip::mutable_gender() {
  
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.gender)
  return gender_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoOdTrip::release_gender() {
  // @@protoc_insertion_point(field_release:ProtoOdTrip.gender)
  
  return gender_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoOdTrip::set_allocated_gender(::std::string* gender) {
  if (gender != NULL) {
    
  } else {
    
  }
  gender_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), gender);
  // @@protoc_insertion_point(field_set_allocated:ProtoOdTrip.gender)
}

// string mode = 13;
inline void ProtoOdTrip::clear_mode() {
  mode_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoOdTrip::mode() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.mode)
  return mode_.GetNoArena();
}
inline void ProtoOdTrip::set_mode(const ::std::string& value) {
  
  mode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoOdTrip.mode)
}
#if LANG_CXX11
inline void ProtoOdTrip::set_mode(::std::string&& value) {
  
  mode_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoOdTrip.mode)
}
#endif
inline void ProtoOdTrip::set_mode(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  mode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoOdTrip.mode)
}
inline void ProtoOdTrip::set_mode(const char* value, size_t size) {
  
  mode_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoOdTrip.mode)
}
inline ::std::string* ProtoOdTrip::mutable_mode() {
  
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.mode)
  return mode_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoOdTrip::release_mode() {
  // @@protoc_insertion_point(field_release:ProtoOdTrip.mode)
  
  return mode_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoOdTrip::set_allocated_mode(::std::string* mode) {
  if (mode != NULL) {
    
  } else {
    
  }
  mode_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mode);
  // @@protoc_insertion_point(field_set_allocated:ProtoOdTrip.mode)
}

// string occupation = 14;
inline void ProtoOdTrip::clear_occupation() {
  occupation_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoOdTrip::occupation() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.occupation)
  return occupation_.GetNoArena();
}
inline void ProtoOdTrip::set_occupation(const ::std::string& value) {
  
  occupation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoOdTrip.occupation)
}
#if LANG_CXX11
inline void ProtoOdTrip::set_occupation(::std::string&& value) {
  
  occupation_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoOdTrip.occupation)
}
#endif
inline void ProtoOdTrip::set_occupation(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  occupation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoOdTrip.occupation)
}
inline void ProtoOdTrip::set_occupation(const char* value, size_t size) {
  
  occupation_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoOdTrip.occupation)
}
inline ::std::string* ProtoOdTrip::mutable_occupation() {
  
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.occupation)
  return occupation_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoOdTrip::release_occupation() {
  // @@protoc_insertion_point(field_release:ProtoOdTrip.occupation)
  
  return occupation_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoOdTrip::set_allocated_occupation(::std::string* occupation) {
  if (occupation != NULL) {
    
  } else {
    
  }
  occupation_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), occupation);
  // @@protoc_insertion_point(field_set_allocated:ProtoOdTrip.occupation)
}

// string activity_origin = 15;
inline void ProtoOdTrip::clear_activity_origin() {
  activity_origin_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoOdTrip::activity_origin() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.activity_origin)
  return activity_origin_.GetNoArena();
}
inline void ProtoOdTrip::set_activity_origin(const ::std::string& value) {
  
  activity_origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoOdTrip.activity_origin)
}
#if LANG_CXX11
inline void ProtoOdTrip::set_activity_origin(::std::string&& value) {
  
  activity_origin_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoOdTrip.activity_origin)
}
#endif
inline void ProtoOdTrip::set_activity_origin(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  activity_origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoOdTrip.activity_origin)
}
inline void ProtoOdTrip::set_activity_origin(const char* value, size_t size) {
  
  activity_origin_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoOdTrip.activity_origin)
}
inline ::std::string* ProtoOdTrip::mutable_activity_origin() {
  
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.activity_origin)
  return activity_origin_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoOdTrip::release_activity_origin() {
  // @@protoc_insertion_point(field_release:ProtoOdTrip.activity_origin)
  
  return activity_origin_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoOdTrip::set_allocated_activity_origin(::std::string* activity_origin) {
  if (activity_origin != NULL) {
    
  } else {
    
  }
  activity_origin_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), activity_origin);
  // @@protoc_insertion_point(field_set_allocated:ProtoOdTrip.activity_origin)
}

// string activity_destination = 16;
inline void ProtoOdTrip::clear_activity_destination() {
  activity_destination_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProtoOdTrip::activity_destination() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.activity_destination)
  return activity_destination_.GetNoArena();
}
inline void ProtoOdTrip::set_activity_destination(const ::std::string& value) {
  
  activity_destination_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ProtoOdTrip.activity_destination)
}
#if LANG_CXX11
inline void ProtoOdTrip::set_activity_destination(::std::string&& value) {
  
  activity_destination_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ProtoOdTrip.activity_destination)
}
#endif
inline void ProtoOdTrip::set_activity_destination(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  activity_destination_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ProtoOdTrip.activity_destination)
}
inline void ProtoOdTrip::set_activity_destination(const char* value, size_t size) {
  
  activity_destination_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ProtoOdTrip.activity_destination)
}
inline ::std::string* ProtoOdTrip::mutable_activity_destination() {
  
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.activity_destination)
  return activity_destination_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProtoOdTrip::release_activity_destination() {
  // @@protoc_insertion_point(field_release:ProtoOdTrip.activity_destination)
  
  return activity_destination_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProtoOdTrip::set_allocated_activity_destination(::std::string* activity_destination) {
  if (activity_destination != NULL) {
    
  } else {
    
  }
  activity_destination_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), activity_destination);
  // @@protoc_insertion_point(field_set_allocated:ProtoOdTrip.activity_destination)
}

// repeated .ProtoOdTripFootpath access_footpaths = 17;
inline int ProtoOdTrip::access_footpaths_size() const {
  return access_footpaths_.size();
}
inline ::ProtoOdTripFootpath* ProtoOdTrip::mutable_access_footpaths(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.access_footpaths)
  return access_footpaths_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >*
ProtoOdTrip::mutable_access_footpaths() {
  // @@protoc_insertion_point(field_mutable_list:ProtoOdTrip.access_footpaths)
  return &access_footpaths_;
}
inline const ::ProtoOdTripFootpath& ProtoOdTrip::access_footpaths(int index) const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.access_footpaths)
  return access_footpaths_.Get(index);
}
inline ::ProtoOdTripFootpath* ProtoOdTrip::add_access_footpaths() {
  // @@protoc_insertion_point(field_add:ProtoOdTrip.access_footpaths)
  return access_footpaths_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >&
ProtoOdTrip::access_footpaths() const {
  // @@protoc_insertion_point(field_list:ProtoOdTrip.access_footpaths)
  return access_footpaths_;
}

// repeated .ProtoOdTripFootpath egress_footpaths = 18;
inline int ProtoOdTrip::egress_footpaths_size() const {
  return egress_footpaths_.size();
}
inline ::ProtoOdTripFootpath* ProtoOdTrip::mutable_egress_footpaths(int index) {
  // @@protoc_insertion_point(field_mutable:ProtoOdTrip.egress_footpaths)
  return egress_footpaths_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >*
ProtoOdTrip::mutable_egress_footpaths() {
  // @@protoc_insertion_point(field_mutable_list:ProtoOdTrip.egress_footpaths)
  return &egress_footpaths_;
}
inline const ::ProtoOdTripFootpath& ProtoOdTrip::egress_footpaths(int index) const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.egress_footpaths)
  return egress_footpaths_.Get(index);
}
inline ::ProtoOdTripFootpath* ProtoOdTrip::add_egress_footpaths() {
  // @@protoc_insertion_point(field_add:ProtoOdTrip.egress_footpaths)
  return egress_footpaths_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ProtoOdTripFootpath >&
ProtoOdTrip::egress_footpaths() const {
  // @@protoc_insertion_point(field_list:ProtoOdTrip.egress_footpaths)
  return egress_footpaths_;
}

// double origin_latitude = 19;
inline void ProtoOdTrip::clear_origin_latitude() {
  origin_latitude_ = 0;
}
inline double ProtoOdTrip::origin_latitude() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.origin_latitude)
  return origin_latitude_;
}
inline void ProtoOdTrip::set_origin_latitude(double value) {
  
  origin_latitude_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.origin_latitude)
}

// double origin_longitude = 20;
inline void ProtoOdTrip::clear_origin_longitude() {
  origin_longitude_ = 0;
}
inline double ProtoOdTrip::origin_longitude() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.origin_longitude)
  return origin_longitude_;
}
inline void ProtoOdTrip::set_origin_longitude(double value) {
  
  origin_longitude_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.origin_longitude)
}

// double destination_latitude = 21;
inline void ProtoOdTrip::clear_destination_latitude() {
  destination_latitude_ = 0;
}
inline double ProtoOdTrip::destination_latitude() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.destination_latitude)
  return destination_latitude_;
}
inline void ProtoOdTrip::set_destination_latitude(double value) {
  
  destination_latitude_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.destination_latitude)
}

// double destination_longitude = 22;
inline void ProtoOdTrip::clear_destination_longitude() {
  destination_longitude_ = 0;
}
inline double ProtoOdTrip::destination_longitude() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.destination_longitude)
  return destination_longitude_;
}
inline void ProtoOdTrip::set_destination_longitude(double value) {
  
  destination_longitude_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.destination_longitude)
}

// double home_latitude = 23;
inline void ProtoOdTrip::clear_home_latitude() {
  home_latitude_ = 0;
}
inline double ProtoOdTrip::home_latitude() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.home_latitude)
  return home_latitude_;
}
inline void ProtoOdTrip::set_home_latitude(double value) {
  
  home_latitude_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.home_latitude)
}

// double home_longitude = 24;
inline void ProtoOdTrip::clear_home_longitude() {
  home_longitude_ = 0;
}
inline double ProtoOdTrip::home_longitude() const {
  // @@protoc_insertion_point(field_get:ProtoOdTrip.home_longitude)
  return home_longitude_;
}
inline void ProtoOdTrip::set_home_longitude(double value) {
  
  home_longitude_ = value;
  // @@protoc_insertion_point(field_set:ProtoOdTrip.home_longitude)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_proto_5fod_5ftrip_2eproto