#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport facebook.thrift.annotation.java.types as _facebook_thrift_annotation_java_types
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport apache.thrift.type.standard.types_fields as _fbthrift_types_fields

cdef extern from "thrift/lib/thrift/gen-py3/standard/types.h":
  pass

cdef extern from "<folly/io/IOBuf.h>":
  pass
cdef extern from "<folly/FBString.h>":
  pass
cdef extern from *:
    ctypedef string folly_fbstring "folly::fbstring"

cdef extern from "thrift/lib/thrift/gen-cpp2/standard_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/lib/thrift/gen-cpp2/standard_types.h" namespace "::apache::thrift::type":
    cdef cppclass cStandardProtocol "::apache::thrift::type::StandardProtocol":
        pass

    cdef cppclass cVoid "::apache::thrift::type::Void":
        pass





cdef class StandardProtocol(thrift.py3.types.CompiledEnum):
    pass


cdef class Void(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "thrift/lib/thrift/gen-cpp2/standard_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/lib/thrift/gen-cpp2/standard_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/lib/thrift/gen-cpp2/standard_types_custom_protocol.h" namespace "::apache::thrift::type":

    cdef cppclass cUriStruct "::apache::thrift::type::UriStruct":
        cUriStruct() except +
        cUriStruct(const cUriStruct&) except +
        bint operator==(cUriStruct&)
        bint operator!=(cUriStruct&)
        bint operator<(cUriStruct&)
        bint operator>(cUriStruct&)
        bint operator<=(cUriStruct&)
        bint operator>=(cUriStruct&)
        __field_ref[string] scheme_ref "scheme_ref" ()
        __field_ref[vector[string]] domain_ref "domain_ref" ()
        __field_ref[vector[string]] path_ref "path_ref" ()
        __field_ref[cmap[string,string]] query_ref "query_ref" ()
        __field_ref[string] fragment_ref "fragment_ref" ()

    cdef enum cTypeUri__type "::apache::thrift::type::TypeUri::Type":
        cTypeUri__type___EMPTY__ "::apache::thrift::type::TypeUri::Type::__EMPTY__",
        cTypeUri__type_uri "::apache::thrift::type::TypeUri::Type::uri",
        cTypeUri__type_typeHashPrefixSha2_256 "::apache::thrift::type::TypeUri::Type::typeHashPrefixSha2_256",

    cdef cppclass cTypeUri "::apache::thrift::type::TypeUri":
        cTypeUri() except +
        cTypeUri(const cTypeUri&) except +
        bint operator==(cTypeUri&)
        bint operator!=(cTypeUri&)
        bint operator<(cTypeUri&)
        bint operator>(cTypeUri&)
        bint operator<=(cTypeUri&)
        bint operator>=(cTypeUri&)
        cTypeUri__type getType() const
        const string& get_uri "get_uri" () const
        string& set_uri "set_uri" (const string&)
        const folly_fbstring& get_typeHashPrefixSha2_256 "get_typeHashPrefixSha2_256" () const
        folly_fbstring& set_typeHashPrefixSha2_256 "set_typeHashPrefixSha2_256" (const folly_fbstring&)

    cdef enum cTypeName__type "::apache::thrift::type::TypeName::Type":
        cTypeName__type___EMPTY__ "::apache::thrift::type::TypeName::Type::__EMPTY__",
        cTypeName__type_boolType "::apache::thrift::type::TypeName::Type::boolType",
        cTypeName__type_byteType "::apache::thrift::type::TypeName::Type::byteType",
        cTypeName__type_i16Type "::apache::thrift::type::TypeName::Type::i16Type",
        cTypeName__type_i32Type "::apache::thrift::type::TypeName::Type::i32Type",
        cTypeName__type_i64Type "::apache::thrift::type::TypeName::Type::i64Type",
        cTypeName__type_floatType "::apache::thrift::type::TypeName::Type::floatType",
        cTypeName__type_doubleType "::apache::thrift::type::TypeName::Type::doubleType",
        cTypeName__type_stringType "::apache::thrift::type::TypeName::Type::stringType",
        cTypeName__type_binaryType "::apache::thrift::type::TypeName::Type::binaryType",
        cTypeName__type_enumType "::apache::thrift::type::TypeName::Type::enumType",
        cTypeName__type_typedefType "::apache::thrift::type::TypeName::Type::typedefType",
        cTypeName__type_structType "::apache::thrift::type::TypeName::Type::structType",
        cTypeName__type_unionType "::apache::thrift::type::TypeName::Type::unionType",
        cTypeName__type_exceptionType "::apache::thrift::type::TypeName::Type::exceptionType",
        cTypeName__type_listType "::apache::thrift::type::TypeName::Type::listType",
        cTypeName__type_setType "::apache::thrift::type::TypeName::Type::setType",
        cTypeName__type_mapType "::apache::thrift::type::TypeName::Type::mapType",

    cdef cppclass cTypeName "::apache::thrift::type::TypeName":
        cTypeName() except +
        cTypeName(const cTypeName&) except +
        bint operator==(cTypeName&)
        bint operator!=(cTypeName&)
        bint operator<(cTypeName&)
        bint operator>(cTypeName&)
        bint operator<=(cTypeName&)
        bint operator>=(cTypeName&)
        cTypeName__type getType() const
        const cVoid& get_boolType "get_boolType" () const
        cVoid& set_boolType "set_boolType" (const cVoid&)
        const cVoid& get_byteType "get_byteType" () const
        cVoid& set_byteType "set_byteType" (const cVoid&)
        const cVoid& get_i16Type "get_i16Type" () const
        cVoid& set_i16Type "set_i16Type" (const cVoid&)
        const cVoid& get_i32Type "get_i32Type" () const
        cVoid& set_i32Type "set_i32Type" (const cVoid&)
        const cVoid& get_i64Type "get_i64Type" () const
        cVoid& set_i64Type "set_i64Type" (const cVoid&)
        const cVoid& get_floatType "get_floatType" () const
        cVoid& set_floatType "set_floatType" (const cVoid&)
        const cVoid& get_doubleType "get_doubleType" () const
        cVoid& set_doubleType "set_doubleType" (const cVoid&)
        const cVoid& get_stringType "get_stringType" () const
        cVoid& set_stringType "set_stringType" (const cVoid&)
        const cVoid& get_binaryType "get_binaryType" () const
        cVoid& set_binaryType "set_binaryType" (const cVoid&)
        const cTypeUri& get_enumType "get_enumType" () const
        cTypeUri& set_enumType "set_enumType" (const cTypeUri&)
        const cTypeUri& get_typedefType "get_typedefType" () const
        cTypeUri& set_typedefType "set_typedefType" (const cTypeUri&)
        const cTypeUri& get_structType "get_structType" () const
        cTypeUri& set_structType "set_structType" (const cTypeUri&)
        const cTypeUri& get_unionType "get_unionType" () const
        cTypeUri& set_unionType "set_unionType" (const cTypeUri&)
        const cTypeUri& get_exceptionType "get_exceptionType" () const
        cTypeUri& set_exceptionType "set_exceptionType" (const cTypeUri&)
        const cVoid& get_listType "get_listType" () const
        cVoid& set_listType "set_listType" (const cVoid&)
        const cVoid& get_setType "get_setType" () const
        cVoid& set_setType "set_setType" (const cVoid&)
        const cVoid& get_mapType "get_mapType" () const
        cVoid& set_mapType "set_mapType" (const cVoid&)




cdef class UriStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cUriStruct] _cpp_obj
    cdef _fbthrift_types_fields.__UriStruct_FieldsSetter _fields_setter
    cdef inline object scheme_impl(self)
    cdef inline object domain_impl(self)
    cdef inline object path_impl(self)
    cdef inline object query_impl(self)
    cdef inline object fragment_impl(self)
    cdef List__string __fbthrift_cached_domain
    cdef List__string __fbthrift_cached_path
    cdef Map__string_string __fbthrift_cached_query

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cUriStruct])

cdef class __TypeUriType(thrift.py3.types.CompiledEnum):
    pass




cdef class TypeUri(thrift.py3.types.Union):
    cdef shared_ptr[cTypeUri] _cpp_obj
    cdef readonly __TypeUriType type
    cdef readonly object value
    cdef _load_cache(TypeUri self)

    @staticmethod
    cdef unique_ptr[cTypeUri] _make_instance(
        cTypeUri* base_instance,
        str uri,
        bytes typeHashPrefixSha2_256
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cTypeUri])

cdef class __TypeNameType(thrift.py3.types.CompiledEnum):
    pass




cdef class TypeName(thrift.py3.types.Union):
    cdef shared_ptr[cTypeName] _cpp_obj
    cdef readonly __TypeNameType type
    cdef readonly object value
    cdef _load_cache(TypeName self)

    @staticmethod
    cdef unique_ptr[cTypeName] _make_instance(
        cTypeName* base_instance,
        Void boolType,
        Void byteType,
        Void i16Type,
        Void i32Type,
        Void i64Type,
        Void floatType,
        Void doubleType,
        Void stringType,
        Void binaryType,
        TypeUri enumType,
        TypeUri typedefType,
        TypeUri structType,
        TypeUri unionType,
        TypeUri exceptionType,
        Void listType,
        Void setType,
        Void mapType
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cTypeName])


cdef class List__string(thrift.py3.types.List):
    cdef shared_ptr[vector[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[string]])
    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *

cdef class Map__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,string]])
    @staticmethod
    cdef shared_ptr[cmap[string,string]] _make_instance(object items) except *


cdef extern from "thrift/lib/thrift/gen-cpp2/standard_constants.h" namespace "::apache::thrift::type":
    cdef cint8_t cminTypeHashBytes "::apache::thrift::type::standard_constants::minTypeHashBytes"
    cdef cint8_t cdefaultTypeHashBytes "::apache::thrift::type::standard_constants::defaultTypeHashBytes"
