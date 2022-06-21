# Copyright (c) Meta Platforms, Inc. and affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import typing

import thrift.py3.types as py3_types
import thrift.python.types as python_types

T = typing.TypeVar("T")
TObj = typing.Union[py3_types.Struct, python_types.StructOrUnion]

@typing.overload
def to_py_struct(cls: typing.Type[T], obj: TObj) -> T: ...
@typing.overload
def to_py_struct(
    cls: typing.Type[T], obj: typing.Optional[TObj]
) -> typing.Optional[T]: ...
