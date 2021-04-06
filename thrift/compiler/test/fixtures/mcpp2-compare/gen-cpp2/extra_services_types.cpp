/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::extra::svc::containerStruct2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::extra::svc::containerStruct2>;
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

namespace extra { namespace svc {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
containerStruct2::containerStruct2() :
      fieldA(0),
      req_fieldA(0),
      opt_fieldA(0),
      fieldC(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4}),
      req_fieldC(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4}),
      opt_fieldC(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4}),
      fieldE(apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring")),
      req_fieldE(apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring")),
      opt_fieldE(apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring")) {}

THRIFT_IGNORE_ISSET_USE_WARNING_END

containerStruct2::~containerStruct2() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
containerStruct2::containerStruct2(containerStruct2&& other) noexcept  :
    fieldA(std::move(other.fieldA)),
    req_fieldA(std::move(other.req_fieldA)),
    opt_fieldA(std::move(other.opt_fieldA)),
    fieldB(std::move(other.fieldB)),
    req_fieldB(std::move(other.req_fieldB)),
    opt_fieldB(std::move(other.opt_fieldB)),
    fieldC(std::move(other.fieldC)),
    req_fieldC(std::move(other.req_fieldC)),
    opt_fieldC(std::move(other.opt_fieldC)),
    fieldD(std::move(other.fieldD)),
    fieldE(std::move(other.fieldE)),
    req_fieldE(std::move(other.req_fieldE)),
    opt_fieldE(std::move(other.opt_fieldE)),
    __isset(other.__isset) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
containerStruct2::containerStruct2(apache::thrift::FragileConstructor, bool fieldA__arg, bool req_fieldA__arg, bool opt_fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::map<::std::string, bool> req_fieldB__arg, ::std::map<::std::string, bool> opt_fieldB__arg, ::std::set<::std::int32_t> fieldC__arg, ::std::set<::std::int32_t> req_fieldC__arg, ::std::set<::std::int32_t> opt_fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::string req_fieldE__arg, ::std::string opt_fieldE__arg) :
    fieldA(std::move(fieldA__arg)),
    req_fieldA(std::move(req_fieldA__arg)),
    opt_fieldA(std::move(opt_fieldA__arg)),
    fieldB(std::move(fieldB__arg)),
    req_fieldB(std::move(req_fieldB__arg)),
    opt_fieldB(std::move(opt_fieldB__arg)),
    fieldC(std::move(fieldC__arg)),
    req_fieldC(std::move(req_fieldC__arg)),
    opt_fieldC(std::move(opt_fieldC__arg)),
    fieldD(std::move(fieldD__arg)),
    fieldE(std::move(fieldE__arg)),
    req_fieldE(std::move(req_fieldE__arg)),
    opt_fieldE(std::move(opt_fieldE__arg)) {
  __isset.fieldA = true;
  __isset.opt_fieldA = true;
  __isset.fieldB = true;
  __isset.opt_fieldB = true;
  __isset.fieldC = true;
  __isset.opt_fieldC = true;
  __isset.fieldD = true;
  __isset.fieldE = true;
  __isset.opt_fieldE = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void containerStruct2::__clear() {
  // clear all fields
  fieldA = 0;
  req_fieldA = 0;
  opt_fieldA = 0;
  fieldB.clear();
  req_fieldB.clear();
  opt_fieldB.clear();
  fieldC.clear();
  req_fieldC.clear();
  opt_fieldC.clear();
  fieldD = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  fieldE = apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring");
  req_fieldE = apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring");
  opt_fieldE = apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool containerStruct2::operator==(const containerStruct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return false;
  }
  if (!(lhs.req_fieldA == rhs.req_fieldA)) {
    return false;
  }
  if (lhs.opt_fieldA_ref() != rhs.opt_fieldA_ref()) {
    return false;
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return false;
  }
  if (!(lhs.req_fieldB == rhs.req_fieldB)) {
    return false;
  }
  if (lhs.opt_fieldB_ref() != rhs.opt_fieldB_ref()) {
    return false;
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return false;
  }
  if (!(lhs.req_fieldC == rhs.req_fieldC)) {
    return false;
  }
  if (lhs.opt_fieldC_ref() != rhs.opt_fieldC_ref()) {
    return false;
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return false;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return false;
  }
  if (!(lhs.req_fieldE == rhs.req_fieldE)) {
    return false;
  }
  if (lhs.opt_fieldE_ref() != rhs.opt_fieldE_ref()) {
    return false;
  }
  return true;
}

bool containerStruct2::operator<(const containerStruct2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return lhs.fieldA < rhs.fieldA;
  }
  if (!(lhs.req_fieldA == rhs.req_fieldA)) {
    return lhs.req_fieldA < rhs.req_fieldA;
  }
  if (lhs.opt_fieldA_ref() != rhs.opt_fieldA_ref()) {
    return lhs.opt_fieldA_ref() < rhs.opt_fieldA_ref();
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return lhs.fieldB < rhs.fieldB;
  }
  if (!(lhs.req_fieldB == rhs.req_fieldB)) {
    return lhs.req_fieldB < rhs.req_fieldB;
  }
  if (lhs.opt_fieldB_ref() != rhs.opt_fieldB_ref()) {
    return lhs.opt_fieldB_ref() < rhs.opt_fieldB_ref();
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return lhs.fieldC < rhs.fieldC;
  }
  if (!(lhs.req_fieldC == rhs.req_fieldC)) {
    return lhs.req_fieldC < rhs.req_fieldC;
  }
  if (lhs.opt_fieldC_ref() != rhs.opt_fieldC_ref()) {
    return lhs.opt_fieldC_ref() < rhs.opt_fieldC_ref();
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return lhs.fieldD < rhs.fieldD;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return lhs.fieldE < rhs.fieldE;
  }
  if (!(lhs.req_fieldE == rhs.req_fieldE)) {
    return lhs.req_fieldE < rhs.req_fieldE;
  }
  if (lhs.opt_fieldE_ref() != rhs.opt_fieldE_ref()) {
    return lhs.opt_fieldE_ref() < rhs.opt_fieldE_ref();
  }
  return false;
}

const ::std::map<::std::string, bool>& containerStruct2::get_fieldB() const& {
  return fieldB;
}

::std::map<::std::string, bool> containerStruct2::get_fieldB() && {
  return std::move(fieldB);
}

const ::std::map<::std::string, bool>& containerStruct2::get_req_fieldB() const& {
  return req_fieldB;
}

::std::map<::std::string, bool> containerStruct2::get_req_fieldB() && {
  return std::move(req_fieldB);
}

const ::std::map<::std::string, bool>* containerStruct2::get_opt_fieldB() const& {
  return opt_fieldB_ref().has_value() ? std::addressof(opt_fieldB) : nullptr;
}

::std::map<::std::string, bool>* containerStruct2::get_opt_fieldB() & {
  return opt_fieldB_ref().has_value() ? std::addressof(opt_fieldB) : nullptr;
}

const ::std::set<::std::int32_t>& containerStruct2::get_fieldC() const& {
  return fieldC;
}

::std::set<::std::int32_t> containerStruct2::get_fieldC() && {
  return std::move(fieldC);
}

const ::std::set<::std::int32_t>& containerStruct2::get_req_fieldC() const& {
  return req_fieldC;
}

::std::set<::std::int32_t> containerStruct2::get_req_fieldC() && {
  return std::move(req_fieldC);
}

const ::std::set<::std::int32_t>* containerStruct2::get_opt_fieldC() const& {
  return opt_fieldC_ref().has_value() ? std::addressof(opt_fieldC) : nullptr;
}

::std::set<::std::int32_t>* containerStruct2::get_opt_fieldC() & {
  return opt_fieldC_ref().has_value() ? std::addressof(opt_fieldC) : nullptr;
}


void swap(containerStruct2& a, containerStruct2& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value(), b.fieldA_ref().value());
  swap(a.req_fieldA_ref().value(), b.req_fieldA_ref().value());
  swap(a.opt_fieldA_ref().value_unchecked(), b.opt_fieldA_ref().value_unchecked());
  swap(a.fieldB_ref().value(), b.fieldB_ref().value());
  swap(a.req_fieldB_ref().value(), b.req_fieldB_ref().value());
  swap(a.opt_fieldB_ref().value_unchecked(), b.opt_fieldB_ref().value_unchecked());
  swap(a.fieldC_ref().value(), b.fieldC_ref().value());
  swap(a.req_fieldC_ref().value(), b.req_fieldC_ref().value());
  swap(a.opt_fieldC_ref().value_unchecked(), b.opt_fieldC_ref().value_unchecked());
  swap(a.fieldD_ref().value(), b.fieldD_ref().value());
  swap(a.fieldE_ref().value(), b.fieldE_ref().value());
  swap(a.req_fieldE_ref().value(), b.req_fieldE_ref().value());
  swap(a.opt_fieldE_ref().value_unchecked(), b.opt_fieldE_ref().value_unchecked());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void containerStruct2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void containerStruct2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void containerStruct2::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t containerStruct2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t containerStruct2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t containerStruct2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;



}} // extra::svc
