/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Fields>::fields_names = {{
  "injected_field",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::Fields>::fields_ids = {{
  100,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Fields>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Fields>::storage_names = {{
  "__fbthrift_field_injected_field",
}};
const std::array<int, 1> TStructDataStorage<::cpp2::Fields>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::FieldsInjectedToEmptyStruct>::fields_names = {{
  "injected_field",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::FieldsInjectedToEmptyStruct>::fields_ids = {{
  -1100,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::FieldsInjectedToEmptyStruct>::fields_types = {{
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::FieldsInjectedToEmptyStruct>::storage_names = {{
  "__fbthrift_field_injected_field",
}};
const std::array<int, 1> TStructDataStorage<::cpp2::FieldsInjectedToEmptyStruct>::isset_indexes = {{
  0,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::FieldsInjectedToStruct>::fields_names = {{
  "string_field",
  "injected_field",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::FieldsInjectedToStruct>::fields_ids = {{
  1,
  -1100,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::FieldsInjectedToStruct>::fields_types = {{
  TType::T_STRING,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::FieldsInjectedToStruct>::storage_names = {{
  "__fbthrift_field_string_field",
  "__fbthrift_field_injected_field",
}};
const std::array<int, 2> TStructDataStorage<::cpp2::FieldsInjectedToStruct>::isset_indexes = {{
  0,
  1,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::FieldsInjectedWithIncludedStruct>::fields_names = {{
  "string_field",
  "injected_field",
  "injected_structured_annotation_field",
  "injected_unstructured_annotation_field",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::FieldsInjectedWithIncludedStruct>::fields_ids = {{
  1,
  -1100,
  -1101,
  -1102,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::FieldsInjectedWithIncludedStruct>::fields_types = {{
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
}};
const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::FieldsInjectedWithIncludedStruct>::storage_names = {{
  "__fbthrift_field_string_field",
  "__fbthrift_field_injected_field",
  "__fbthrift_field_injected_structured_annotation_field",
  "__fbthrift_field_injected_unstructured_annotation_field",
}};
const std::array<int, 4> TStructDataStorage<::cpp2::FieldsInjectedWithIncludedStruct>::isset_indexes = {{
  0,
  1,
  -1,
  -1,
}};

} // namespace thrift
} // namespace apache
