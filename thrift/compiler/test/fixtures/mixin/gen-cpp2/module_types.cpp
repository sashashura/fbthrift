/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Mixin1>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Mixin1>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Mixin1::Mixin1(Mixin1&& other) noexcept  :
    field1(std::move(other.field1)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Mixin1::Mixin1(apache::thrift::FragileConstructor, ::std::string field1__arg) :
    field1(std::move(field1__arg)) {
  __isset.field1 = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Mixin1::__clear() {
  // clear all fields
  field1 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Mixin1::operator==(const Mixin1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1 == rhs.field1)) {
    return false;
  }
  return true;
}

bool Mixin1::operator<(const Mixin1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1 == rhs.field1)) {
    return lhs.field1 < rhs.field1;
  }
  return false;
}


void swap(Mixin1& a, Mixin1& b) {
  using ::std::swap;
  swap(a.field1_ref().value(), b.field1_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Mixin1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Mixin1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Mixin1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Mixin1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Mixin1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Mixin1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Mixin1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Mixin1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Mixin2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Mixin2>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Mixin2::Mixin2(Mixin2&& other) noexcept  :
    m1(std::move(other.m1)),
    field2(std::move(other.field2)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Mixin2::Mixin2(apache::thrift::FragileConstructor, ::cpp2::Mixin1 m1__arg, ::std::string field2__arg) :
    m1(std::move(m1__arg)),
    field2(std::move(field2__arg)) {
  __isset.m1 = true;
  __isset.field2 = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Mixin2::__clear() {
  // clear all fields
  m1.__clear();
  field2 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Mixin2::operator==(const Mixin2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.m1 == rhs.m1)) {
    return false;
  }
  if (lhs.field2_ref() != rhs.field2_ref()) {
    return false;
  }
  return true;
}

bool Mixin2::operator<(const Mixin2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.m1 == rhs.m1)) {
    return lhs.m1 < rhs.m1;
  }
  if (lhs.field2_ref() != rhs.field2_ref()) {
    return lhs.field2_ref() < rhs.field2_ref();
  }
  return false;
}

const ::cpp2::Mixin1& Mixin2::get_m1() const& {
  return m1;
}

::cpp2::Mixin1 Mixin2::get_m1() && {
  return std::move(m1);
}


void swap(Mixin2& a, Mixin2& b) {
  using ::std::swap;
  swap(a.m1_ref().value(), b.m1_ref().value());
  swap(a.field2_ref().value_unchecked(), b.field2_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Mixin2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Mixin2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Mixin2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Mixin2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Mixin2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Mixin2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Mixin2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Mixin2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Mixin2,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin1>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Mixin2,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin1>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Mixin3Base>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Mixin3Base>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Mixin3Base::Mixin3Base(Mixin3Base&& other) noexcept  :
    field3(std::move(other.field3)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Mixin3Base::Mixin3Base(apache::thrift::FragileConstructor, ::std::string field3__arg) :
    field3(std::move(field3__arg)) {
  __isset.field3 = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Mixin3Base::__clear() {
  // clear all fields
  field3 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Mixin3Base::operator==(const Mixin3Base& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field3 == rhs.field3)) {
    return false;
  }
  return true;
}

bool Mixin3Base::operator<(const Mixin3Base& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field3 == rhs.field3)) {
    return lhs.field3 < rhs.field3;
  }
  return false;
}


void swap(Mixin3Base& a, Mixin3Base& b) {
  using ::std::swap;
  swap(a.field3_ref().value(), b.field3_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Mixin3Base::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Mixin3Base::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Mixin3Base::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Mixin3Base::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Mixin3Base::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Mixin3Base::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Mixin3Base::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Mixin3Base::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Foo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Foo::Foo(Foo&& other) noexcept  :
    field4(std::move(other.field4)),
    m2(std::move(other.m2)),
    m3(std::move(other.m3)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Foo::Foo(apache::thrift::FragileConstructor, ::std::string field4__arg, ::cpp2::Mixin2 m2__arg, ::cpp2::Mixin3 m3__arg) :
    field4(std::move(field4__arg)),
    m2(std::move(m2__arg)),
    m3(std::move(m3__arg)) {
  __isset.field4 = true;
  __isset.m2 = true;
  __isset.m3 = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void Foo::__clear() {
  // clear all fields
  field4 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  m2.__clear();
  m3.__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Foo::operator==(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field4 == rhs.field4)) {
    return false;
  }
  if (!(lhs.m2 == rhs.m2)) {
    return false;
  }
  if (!(lhs.m3 == rhs.m3)) {
    return false;
  }
  return true;
}

bool Foo::operator<(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field4 == rhs.field4)) {
    return lhs.field4 < rhs.field4;
  }
  if (!(lhs.m2 == rhs.m2)) {
    return lhs.m2 < rhs.m2;
  }
  if (!(lhs.m3 == rhs.m3)) {
    return lhs.m3 < rhs.m3;
  }
  return false;
}

const ::cpp2::Mixin2& Foo::get_m2() const& {
  return m2;
}

::cpp2::Mixin2 Foo::get_m2() && {
  return std::move(m2);
}

const ::cpp2::Mixin3& Foo::get_m3() const& {
  return m3;
}

::cpp2::Mixin3 Foo::get_m3() && {
  return std::move(m3);
}


void swap(Foo& a, Foo& b) {
  using ::std::swap;
  swap(a.field4_ref().value(), b.field4_ref().value());
  swap(a.m2_ref().value(), b.m2_ref().value());
  swap(a.m3_ref().value(), b.m3_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Foo,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin2>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Foo,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin3>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Foo,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin2>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        Foo,
        ::apache::thrift::type_class::structure,
        ::cpp2::Mixin3>,
    "inconsistent use of nimble option");

} // cpp2
