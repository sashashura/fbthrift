#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import apache.thrift.metadata.thrift_types as _fbthrift_metadata


# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_exception_FooStreamEx(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.FooStreamEx"

    if qualified_name in metadata_struct.exceptions:
        return metadata_struct
    fields = [
    ]
    struct_dict = dict(metadata_struct.exceptions)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftException(name=qualified_name, fields=fields,
        structured_annotations=[
        ])
    new_struct = metadata_struct(exceptions=struct_dict)


    return new_struct
def gen_metadata_exception_FooStreamEx() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_exception_FooStreamEx(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_exception_FooEx(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.FooEx"

    if qualified_name in metadata_struct.exceptions:
        return metadata_struct
    fields = [
    ]
    struct_dict = dict(metadata_struct.exceptions)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftException(name=qualified_name, fields=fields,
        structured_annotations=[
        ])
    new_struct = metadata_struct(exceptions=struct_dict)


    return new_struct
def gen_metadata_exception_FooEx() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_exception_FooEx(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))


def gen_metadata_service_PubSubStreamingService() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_service_PubSubStreamingService(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def _fbthrift_gen_metadata_service_PubSubStreamingService(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.PubSubStreamingService"
    
    if qualified_name in metadata_struct.services:
        return metadata_struct
    
    functions = [
        _fbthrift_metadata.ThriftFunction(name="returnstream", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="i32_from", is_optional=False, structured_annotations=[
            ]),
            _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="i32_to", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="streamthrows", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="foo", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="servicethrows", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="foo", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.FooEx")), name="e", is_optional=False, structured_annotations=[
            ]),
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="boththrows", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="foo", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.FooEx")), name="e", is_optional=False, structured_annotations=[
            ]),
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="responseandstreamstreamthrows", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE),initialResponseType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="foo", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="responseandstreamservicethrows", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE),initialResponseType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="foo", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.FooEx")), name="e", is_optional=False, structured_annotations=[
            ]),
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="responseandstreamboththrows", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE),initialResponseType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="foo", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.FooEx")), name="e", is_optional=False, structured_annotations=[
            ]),
        ], is_oneway=False, structured_annotations=[
        ]),
        _fbthrift_metadata.ThriftFunction(name="returnstreamFast", return_type=_fbthrift_metadata.ThriftType(t_stream=_fbthrift_metadata.ThriftStreamType(elemType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE))), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="i32_from", is_optional=False, structured_annotations=[
            ]),
            _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="i32_to", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
    ]
    
    service_dict = dict(metadata_struct.services)
    service_dict[qualified_name] = _fbthrift_metadata.ThriftService(name=qualified_name, functions=functions,  structured_annotations=[
    ])
    new_struct = metadata_struct(services=service_dict)
    
     # i32_from
     # i32_to
    
    
     # elem
     # response  # return value
    
    
     # foo
    
    
     # elem
     # response  # return value
    
    
     # foo
    
    new_struct = _fbthrift_gen_metadata_exception_FooEx(new_struct) # e
    
     # elem
     # response  # return value
    
    
     # foo
    
    new_struct = _fbthrift_gen_metadata_exception_FooEx(new_struct) # e
    
     # elem
     # response  # return value
    
    
     # foo
    
    
     # elem
     # response  # return value
    
    
     # foo
    
    new_struct = _fbthrift_gen_metadata_exception_FooEx(new_struct) # e
    
     # elem
     # response  # return value
    
    
     # foo
    
    new_struct = _fbthrift_gen_metadata_exception_FooEx(new_struct) # e
    
     # elem
     # response  # return value
    
    
     # i32_from
     # i32_to
    
    
     # elem
     # response  # return value
    
    
    return new_struct

def _fbthrift_metadata_service_response_PubSubStreamingService() -> _fbthrift_metadata.ThriftServiceMetadataResponse:
    metadata = gen_metadata_service_PubSubStreamingService()
    context = _fbthrift_metadata.ThriftServiceContext(service_info=metadata.services["module.PubSubStreamingService"], module=_fbthrift_metadata.ThriftModuleContext(name="module"))
    services = [_fbthrift_metadata.ThriftServiceContextRef(module=_fbthrift_metadata.ThriftModuleContext(name=name.split('.')[0]), service_name=name) for name in metadata.services]
    return _fbthrift_metadata.ThriftServiceMetadataResponse(metadata=metadata,context=context,services=services)




def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_exception_FooStreamEx(meta)
    meta = _fbthrift_gen_metadata_exception_FooEx(meta)
    meta = _fbthrift_gen_metadata_service_PubSubStreamingService(meta)
    return meta
