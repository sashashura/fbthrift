/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/nimble/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::BasicTypes>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::BasicTypes>;
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
BasicTypes::BasicTypes(apache::thrift::FragileConstructor, ::std::int32_t first__arg, ::std::int32_t second__arg, ::std::int64_t third__arg, bool isTrue__arg) :
    first(std::move(first__arg)),
    second(std::move(second__arg)),
    third(std::move(third__arg)),
    isTrue(std::move(isTrue__arg)) {
  __isset.second = true;
  __isset.third = true;
  __isset.isTrue = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void BasicTypes::__clear() {
  // clear all fields
  first = 0;
  second = 0;
  third = 0;
  isTrue = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool BasicTypes::operator==(const BasicTypes& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first == rhs.first)) {
    return false;
  }
  if (lhs.second_ref() != rhs.second_ref()) {
    return false;
  }
  if (lhs.third_ref() != rhs.third_ref()) {
    return false;
  }
  if (!(lhs.isTrue == rhs.isTrue)) {
    return false;
  }
  return true;
}

bool BasicTypes::operator<(const BasicTypes& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.first == rhs.first)) {
    return lhs.first < rhs.first;
  }
  if (lhs.second_ref() != rhs.second_ref()) {
    return lhs.second_ref() < rhs.second_ref();
  }
  if (lhs.third_ref() != rhs.third_ref()) {
    return lhs.third_ref() < rhs.third_ref();
  }
  if (!(lhs.isTrue == rhs.isTrue)) {
    return lhs.isTrue < rhs.isTrue;
  }
  return false;
}


void swap(BasicTypes& a, BasicTypes& b) {
  using ::std::swap;
  swap(a.first_ref().value(), b.first_ref().value());
  swap(a.second_ref().value_unchecked(), b.second_ref().value_unchecked());
  swap(a.third_ref().value_unchecked(), b.third_ref().value_unchecked());
  swap(a.isTrue_ref().value(), b.isTrue_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void BasicTypes::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void BasicTypes::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void BasicTypes::readNoXfer<>(apache::thrift::NimbleProtocolReader*);
template uint32_t BasicTypes::write<>(apache::thrift::NimbleProtocolWriter*) const;
template uint32_t BasicTypes::serializedSize<>(apache::thrift::NimbleProtocolWriter const*) const;
template uint32_t BasicTypes::serializedSizeZC<>(apache::thrift::NimbleProtocolWriter const*) const;



} // cpp2
