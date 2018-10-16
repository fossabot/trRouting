// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: odTripsCollection.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(9b0f9fd67753ff3f);
CAPNP_DECLARE_SCHEMA(971c23bdb6ead05b);

}  // namespace schemas
}  // namespace capnp

namespace odTripsCollection {

struct OdTripsCollection {
  OdTripsCollection() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(9b0f9fd67753ff3f, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct OdTrip {
  OdTrip() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(971c23bdb6ead05b, 17, 6)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class OdTripsCollection::Reader {
public:
  typedef OdTripsCollection Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasOdTrips() const;
  inline  ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Reader getOdTrips() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class OdTripsCollection::Builder {
public:
  typedef OdTripsCollection Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasOdTrips();
  inline  ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Builder getOdTrips();
  inline void setOdTrips( ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Builder initOdTrips(unsigned int size);
  inline void adoptOdTrips(::capnp::Orphan< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>> disownOdTrips();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class OdTripsCollection::Pipeline {
public:
  typedef OdTripsCollection Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class OdTrip::Reader {
public:
  typedef OdTrip Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::int64_t getId() const;

  inline  ::int64_t getPersonId() const;

  inline  ::int64_t getHouseholdId() const;

  inline  ::int64_t getAge() const;

  inline  ::int64_t getDepartureTimeSeconds() const;

  inline  ::int64_t getArrivalTimeSeconds() const;

  inline  ::int64_t getWalkingTravelTimeSeconds() const;

  inline  ::int64_t getCyclingTravelTimeSeconds() const;

  inline  ::int64_t getDrivingTravelTimeSeconds() const;

  inline float getExpansionFactor() const;

  inline bool hasAgeGroup() const;
  inline  ::capnp::Text::Reader getAgeGroup() const;

  inline bool hasGender() const;
  inline  ::capnp::Text::Reader getGender() const;

  inline bool hasMode() const;
  inline  ::capnp::Text::Reader getMode() const;

  inline bool hasOccupation() const;
  inline  ::capnp::Text::Reader getOccupation() const;

  inline bool hasOriginActivity() const;
  inline  ::capnp::Text::Reader getOriginActivity() const;

  inline bool hasDestinationActivity() const;
  inline  ::capnp::Text::Reader getDestinationActivity() const;

  inline  ::int64_t getAccessFootpathsStartIdx() const;

  inline  ::int64_t getAccessFootpathsEndIdx() const;

  inline  ::int64_t getEgressFootpathsStartIdx() const;

  inline  ::int64_t getEgressFootpathsEndIdx() const;

  inline float getOriginLatitude() const;

  inline float getOriginLongitude() const;

  inline float getDestinationLatitude() const;

  inline float getDestinationLongitude() const;

  inline float getHomeLatitude() const;

  inline float getHomeLongitude() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class OdTrip::Builder {
public:
  typedef OdTrip Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::int64_t getId();
  inline void setId( ::int64_t value);

  inline  ::int64_t getPersonId();
  inline void setPersonId( ::int64_t value);

  inline  ::int64_t getHouseholdId();
  inline void setHouseholdId( ::int64_t value);

  inline  ::int64_t getAge();
  inline void setAge( ::int64_t value);

  inline  ::int64_t getDepartureTimeSeconds();
  inline void setDepartureTimeSeconds( ::int64_t value);

  inline  ::int64_t getArrivalTimeSeconds();
  inline void setArrivalTimeSeconds( ::int64_t value);

  inline  ::int64_t getWalkingTravelTimeSeconds();
  inline void setWalkingTravelTimeSeconds( ::int64_t value);

  inline  ::int64_t getCyclingTravelTimeSeconds();
  inline void setCyclingTravelTimeSeconds( ::int64_t value);

  inline  ::int64_t getDrivingTravelTimeSeconds();
  inline void setDrivingTravelTimeSeconds( ::int64_t value);

  inline float getExpansionFactor();
  inline void setExpansionFactor(float value);

  inline bool hasAgeGroup();
  inline  ::capnp::Text::Builder getAgeGroup();
  inline void setAgeGroup( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initAgeGroup(unsigned int size);
  inline void adoptAgeGroup(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownAgeGroup();

  inline bool hasGender();
  inline  ::capnp::Text::Builder getGender();
  inline void setGender( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initGender(unsigned int size);
  inline void adoptGender(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownGender();

  inline bool hasMode();
  inline  ::capnp::Text::Builder getMode();
  inline void setMode( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initMode(unsigned int size);
  inline void adoptMode(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownMode();

  inline bool hasOccupation();
  inline  ::capnp::Text::Builder getOccupation();
  inline void setOccupation( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initOccupation(unsigned int size);
  inline void adoptOccupation(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownOccupation();

  inline bool hasOriginActivity();
  inline  ::capnp::Text::Builder getOriginActivity();
  inline void setOriginActivity( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initOriginActivity(unsigned int size);
  inline void adoptOriginActivity(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownOriginActivity();

  inline bool hasDestinationActivity();
  inline  ::capnp::Text::Builder getDestinationActivity();
  inline void setDestinationActivity( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initDestinationActivity(unsigned int size);
  inline void adoptDestinationActivity(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDestinationActivity();

  inline  ::int64_t getAccessFootpathsStartIdx();
  inline void setAccessFootpathsStartIdx( ::int64_t value);

  inline  ::int64_t getAccessFootpathsEndIdx();
  inline void setAccessFootpathsEndIdx( ::int64_t value);

  inline  ::int64_t getEgressFootpathsStartIdx();
  inline void setEgressFootpathsStartIdx( ::int64_t value);

  inline  ::int64_t getEgressFootpathsEndIdx();
  inline void setEgressFootpathsEndIdx( ::int64_t value);

  inline float getOriginLatitude();
  inline void setOriginLatitude(float value);

  inline float getOriginLongitude();
  inline void setOriginLongitude(float value);

  inline float getDestinationLatitude();
  inline void setDestinationLatitude(float value);

  inline float getDestinationLongitude();
  inline void setDestinationLongitude(float value);

  inline float getHomeLatitude();
  inline void setHomeLatitude(float value);

  inline float getHomeLongitude();
  inline void setHomeLongitude(float value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class OdTrip::Pipeline {
public:
  typedef OdTrip Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool OdTripsCollection::Reader::hasOdTrips() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool OdTripsCollection::Builder::hasOdTrips() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Reader OdTripsCollection::Reader::getOdTrips() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Builder OdTripsCollection::Builder::getOdTrips() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void OdTripsCollection::Builder::setOdTrips( ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>::Builder OdTripsCollection::Builder::initOdTrips(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void OdTripsCollection::Builder::adoptOdTrips(
    ::capnp::Orphan< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>> OdTripsCollection::Builder::disownOdTrips() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTripsCollection::OdTrip,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::int64_t OdTrip::Reader::getId() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getId() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setId( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getPersonId() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getPersonId() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setPersonId( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getHouseholdId() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getHouseholdId() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setHouseholdId( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getAge() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getAge() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setAge( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getDepartureTimeSeconds() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getDepartureTimeSeconds() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setDepartureTimeSeconds( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getArrivalTimeSeconds() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getArrivalTimeSeconds() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setArrivalTimeSeconds( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getWalkingTravelTimeSeconds() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getWalkingTravelTimeSeconds() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setWalkingTravelTimeSeconds( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getCyclingTravelTimeSeconds() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getCyclingTravelTimeSeconds() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setCyclingTravelTimeSeconds( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getDrivingTravelTimeSeconds() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getDrivingTravelTimeSeconds() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setDrivingTravelTimeSeconds( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getExpansionFactor() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<18>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getExpansionFactor() {
  return _builder.getDataField<float>(
      ::capnp::bounded<18>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setExpansionFactor(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<18>() * ::capnp::ELEMENTS, value);
}

inline bool OdTrip::Reader::hasAgeGroup() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool OdTrip::Builder::hasAgeGroup() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader OdTrip::Reader::getAgeGroup() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder OdTrip::Builder::getAgeGroup() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void OdTrip::Builder::setAgeGroup( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder OdTrip::Builder::initAgeGroup(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void OdTrip::Builder::adoptAgeGroup(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> OdTrip::Builder::disownAgeGroup() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool OdTrip::Reader::hasGender() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool OdTrip::Builder::hasGender() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader OdTrip::Reader::getGender() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder OdTrip::Builder::getGender() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void OdTrip::Builder::setGender( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder OdTrip::Builder::initGender(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void OdTrip::Builder::adoptGender(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> OdTrip::Builder::disownGender() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool OdTrip::Reader::hasMode() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool OdTrip::Builder::hasMode() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader OdTrip::Reader::getMode() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder OdTrip::Builder::getMode() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void OdTrip::Builder::setMode( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder OdTrip::Builder::initMode(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void OdTrip::Builder::adoptMode(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> OdTrip::Builder::disownMode() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool OdTrip::Reader::hasOccupation() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool OdTrip::Builder::hasOccupation() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader OdTrip::Reader::getOccupation() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder OdTrip::Builder::getOccupation() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void OdTrip::Builder::setOccupation( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder OdTrip::Builder::initOccupation(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void OdTrip::Builder::adoptOccupation(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> OdTrip::Builder::disownOccupation() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool OdTrip::Reader::hasOriginActivity() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool OdTrip::Builder::hasOriginActivity() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader OdTrip::Reader::getOriginActivity() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder OdTrip::Builder::getOriginActivity() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void OdTrip::Builder::setOriginActivity( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder OdTrip::Builder::initOriginActivity(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void OdTrip::Builder::adoptOriginActivity(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> OdTrip::Builder::disownOriginActivity() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

inline bool OdTrip::Reader::hasDestinationActivity() const {
  return !_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline bool OdTrip::Builder::hasDestinationActivity() {
  return !_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader OdTrip::Reader::getDestinationActivity() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder OdTrip::Builder::getDestinationActivity() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline void OdTrip::Builder::setDestinationActivity( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder OdTrip::Builder::initDestinationActivity(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), size);
}
inline void OdTrip::Builder::adoptDestinationActivity(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> OdTrip::Builder::disownDestinationActivity() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}

inline  ::int64_t OdTrip::Reader::getAccessFootpathsStartIdx() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getAccessFootpathsStartIdx() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setAccessFootpathsStartIdx( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getAccessFootpathsEndIdx() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getAccessFootpathsEndIdx() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setAccessFootpathsEndIdx( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getEgressFootpathsStartIdx() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getEgressFootpathsStartIdx() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setEgressFootpathsStartIdx( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS, value);
}

inline  ::int64_t OdTrip::Reader::getEgressFootpathsEndIdx() const {
  return _reader.getDataField< ::int64_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS);
}

inline  ::int64_t OdTrip::Builder::getEgressFootpathsEndIdx() {
  return _builder.getDataField< ::int64_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setEgressFootpathsEndIdx( ::int64_t value) {
  _builder.setDataField< ::int64_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getOriginLatitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<19>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getOriginLatitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<19>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setOriginLatitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<19>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getOriginLongitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<28>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getOriginLongitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<28>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setOriginLongitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<28>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getDestinationLatitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<29>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getDestinationLatitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<29>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setDestinationLatitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<29>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getDestinationLongitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<30>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getDestinationLongitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<30>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setDestinationLongitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<30>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getHomeLatitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<31>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getHomeLatitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<31>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setHomeLatitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<31>() * ::capnp::ELEMENTS, value);
}

inline float OdTrip::Reader::getHomeLongitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS);
}

inline float OdTrip::Builder::getHomeLongitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS);
}
inline void OdTrip::Builder::setHomeLongitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<32>() * ::capnp::ELEMENTS, value);
}

}  // namespace
