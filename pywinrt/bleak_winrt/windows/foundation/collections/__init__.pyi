# WARNING: Please don't edit this file. It was generated by Python/WinRT v1.0.0-beta.7

import enum
import datetime
import sys
import types
import typing

import bleak_winrt._winrt as _winrt
import bleak_winrt.windows.foundation

class CollectionChange(enum.IntEnum):
    RESET = 0
    ITEM_INSERTED = 1
    ITEM_REMOVED = 2
    ITEM_CHANGED = 3

Self = typing.TypeVar('Self')
K = typing.TypeVar('K')
T = typing.TypeVar('T')
V = typing.TypeVar('V')

class PropertySet(_winrt.Object, typing.MutableMapping[str, _winrt.Object]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: str, value: _winrt.Object) -> None: ...
    def __getitem__(self, key: str) -> _winrt.Object: ...
    def __delitem__(self, key: str) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> PropertySet: ...
    def __new__(cls: typing.Type[PropertySet]) -> PropertySet:...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[str, _winrt.Object]]]: ...
    def get_view(self) -> typing.Optional[IMapView[str, _winrt.Object]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: typing.Optional[_winrt.Object]) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[_winrt.Object]: ...
    def remove(self, key: str) -> None: ...
    def add_map_changed(self, vhnd: MapChangedEventHandler[str, _winrt.Object]) -> bleak_winrt.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None: ...

class StringMap(_winrt.Object, typing.MutableMapping[str, str]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: str, value: str) -> None: ...
    def __getitem__(self, key: str) -> str: ...
    def __delitem__(self, key: str) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> StringMap: ...
    def __new__(cls: typing.Type[StringMap]) -> StringMap:...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[str, str]]]: ...
    def get_view(self) -> typing.Optional[IMapView[str, str]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: str) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> str: ...
    def remove(self, key: str) -> None: ...
    def add_map_changed(self, vhnd: MapChangedEventHandler[str, str]) -> bleak_winrt.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None: ...

class ValueSet(_winrt.Object, typing.MutableMapping[str, _winrt.Object]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: str, value: _winrt.Object) -> None: ...
    def __getitem__(self, key: str) -> _winrt.Object: ...
    def __delitem__(self, key: str) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> ValueSet: ...
    def __new__(cls: typing.Type[ValueSet]) -> ValueSet:...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[str, _winrt.Object]]]: ...
    def get_view(self) -> typing.Optional[IMapView[str, _winrt.Object]]: ...
    def has_key(self, key: str) -> _winrt.Boolean: ...
    def insert(self, key: str, value: typing.Optional[_winrt.Object]) -> _winrt.Boolean: ...
    def lookup(self, key: str) -> typing.Optional[_winrt.Object]: ...
    def remove(self, key: str) -> None: ...
    def add_map_changed(self, vhnd: MapChangedEventHandler[str, _winrt.Object]) -> bleak_winrt.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None: ...

class IIterable(_winrt.Object, typing.Generic[T]):
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __iter__(self) -> IIterator[T]: ...
    def first(self) -> typing.Optional[IIterator[T]]: ...

class IIterator(_winrt.Object, typing.Generic[T]):
    current: typing.Optional[T]
    has_current: _winrt.Boolean
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __iter__(self: Self) -> Self: ...
    def __next__(self) -> T: ...
    def get_many(self, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[T]]: ...
    def move_next(self) -> _winrt.Boolean: ...

class IKeyValuePair(_winrt.Object, typing.Generic[K, V]):
    key: typing.Optional[K]
    value: typing.Optional[V]
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...

class IMapChangedEventArgs(_winrt.Object, typing.Generic[K]):
    collection_change: CollectionChange
    key: typing.Optional[K]
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...

class IMapView(_winrt.Object, typing.Mapping[K, V], typing.Generic[K, V]):
    size: _winrt.UInt32
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[K]: ...
    def __contains__(self, key: object) -> bool:...
    def __getitem__(self, key: K) -> V: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[K, V]]]: ...
    def has_key(self, key: typing.Optional[K]) -> _winrt.Boolean: ...
    def lookup(self, key: typing.Optional[K]) -> typing.Optional[V]: ...
    def split(self) -> typing.Tuple[typing.Optional[IMapView[K, V]], typing.Optional[IMapView[K, V]]]: ...

class IMap(_winrt.Object, typing.MutableMapping[K, V], typing.Generic[K, V]):
    size: _winrt.UInt32
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[K]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: K, value: V) -> None: ...
    def __getitem__(self, key: K) -> V: ...
    def __delitem__(self, key: K) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[K, V]]]: ...
    def get_view(self) -> typing.Optional[IMapView[K, V]]: ...
    def has_key(self, key: typing.Optional[K]) -> _winrt.Boolean: ...
    def insert(self, key: typing.Optional[K], value: typing.Optional[V]) -> _winrt.Boolean: ...
    def lookup(self, key: typing.Optional[K]) -> typing.Optional[V]: ...
    def remove(self, key: typing.Optional[K]) -> None: ...

class IObservableMap(_winrt.Object, typing.MutableMapping[K, V], typing.Generic[K, V]):
    size: _winrt.UInt32
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[K]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: K, value: V) -> None: ...
    def __getitem__(self, key: K) -> V: ...
    def __delitem__(self, key: K) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[K, V]]]: ...
    def get_view(self) -> typing.Optional[IMapView[K, V]]: ...
    def has_key(self, key: typing.Optional[K]) -> _winrt.Boolean: ...
    def insert(self, key: typing.Optional[K], value: typing.Optional[V]) -> _winrt.Boolean: ...
    def lookup(self, key: typing.Optional[K]) -> typing.Optional[V]: ...
    def remove(self, key: typing.Optional[K]) -> None: ...
    def add_map_changed(self, vhnd: MapChangedEventHandler[K, V]) -> bleak_winrt.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None: ...

class IObservableVector(_winrt.Object, typing.MutableSequence[T], typing.Generic[T]):
    size: _winrt.UInt32
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> T: ...
    @typing.overload
    def __getitem__(self, index: slice) -> typing.MutableSequence[T]: ...
    def insert(self, index: int, value: T) -> None: ...
    @typing.overload
    def __delitem__(self, index: int) -> None: ...
    @typing.overload
    def __delitem__(self, index: slice) -> None: ...
    @typing.overload
    def __setitem__(self, index: int, value: T) -> None: ...
    @typing.overload
    def __setitem__(self, index: slice, value: typing.Iterable[T]) -> None: ...
    def append(self, value: typing.Optional[T]) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[T]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[T]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[T]]: ...
    def get_view(self) -> typing.Optional[IVectorView[T]]: ...
    def index_of(self, value: typing.Optional[T]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...
    def insert_at(self, index: _winrt.UInt32, value: typing.Optional[T]) -> None: ...
    def remove_at(self, index: _winrt.UInt32) -> None: ...
    def remove_at_end(self) -> None: ...
    def replace_all(self, items: typing.Sequence[T]) -> None: ...
    def set_at(self, index: _winrt.UInt32, value: typing.Optional[T]) -> None: ...
    def add_vector_changed(self, vhnd: VectorChangedEventHandler[T]) -> bleak_winrt.windows.foundation.EventRegistrationToken: ...
    def remove_vector_changed(self, token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None: ...

class IPropertySet(_winrt.Object, typing.MutableMapping[str, _winrt.Object]):
    size: _winrt.UInt32
    def __len__(self) -> int: ...
    def __iter__(self) -> typing.Iterator[str]: ...
    def __contains__(self, key: object) -> bool:...
    def __setitem__(self, key: str, value: _winrt.Object) -> None: ...
    def __getitem__(self, key: str) -> _winrt.Object: ...
    def __delitem__(self, key: str) -> None: ...
    @staticmethod
    def _from(obj: _winrt.Object) -> IPropertySet: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[IKeyValuePair[str, _winrt.Object]]]: ...
    def get_view(self) -> typing.Optional[IMapView[str, _winrt.Object]]: ...
    def has_key(self, key: typing.Optional[str]) -> _winrt.Boolean: ...
    def insert(self, key: typing.Optional[str], value: typing.Optional[_winrt.Object]) -> _winrt.Boolean: ...
    def lookup(self, key: typing.Optional[str]) -> typing.Optional[_winrt.Object]: ...
    def remove(self, key: typing.Optional[str]) -> None: ...
    def add_map_changed(self, vhnd: MapChangedEventHandler[str, _winrt.Object]) -> bleak_winrt.windows.foundation.EventRegistrationToken: ...
    def remove_map_changed(self, token: bleak_winrt.windows.foundation.EventRegistrationToken) -> None: ...

class IVectorChangedEventArgs(_winrt.Object):
    collection_change: CollectionChange
    index: _winrt.UInt32
    @staticmethod
    def _from(obj: _winrt.Object) -> IVectorChangedEventArgs: ...

class IVectorView(_winrt.Object, typing.Sequence[T], typing.Generic[T]):
    size: _winrt.UInt32
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> T: ...
    @typing.overload
    def __getitem__(self, index: slice) -> typing.Sequence[T]: ...
    def first(self) -> typing.Optional[IIterator[T]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[T]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[T]]: ...
    def index_of(self, value: typing.Optional[T]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...

class IVector(_winrt.Object, typing.MutableSequence[T], typing.Generic[T]):
    size: _winrt.UInt32
    if sys.version_info >= (3, 9):
        def __class_getitem__(cls, key: typing.Any) -> types.GenericAlias: ...
    def __len__(self) -> int: ...
    @typing.overload
    def __getitem__(self, index: int) -> T: ...
    @typing.overload
    def __getitem__(self, index: slice) -> typing.MutableSequence[T]: ...
    def insert(self, index: int, value: T) -> None: ...
    @typing.overload
    def __delitem__(self, index: int) -> None: ...
    @typing.overload
    def __delitem__(self, index: slice) -> None: ...
    @typing.overload
    def __setitem__(self, index: int, value: T) -> None: ...
    @typing.overload
    def __setitem__(self, index: slice, value: typing.Iterable[T]) -> None: ...
    def append(self, value: typing.Optional[T]) -> None: ...
    def clear(self) -> None: ...
    def first(self) -> typing.Optional[IIterator[T]]: ...
    def get_at(self, index: _winrt.UInt32) -> typing.Optional[T]: ...
    def get_many(self, start_index: _winrt.UInt32, items_size: _winrt.UInt32) -> typing.Tuple[_winrt.UInt32, typing.List[T]]: ...
    def get_view(self) -> typing.Optional[IVectorView[T]]: ...
    def index_of(self, value: typing.Optional[T]) -> typing.Tuple[_winrt.Boolean, _winrt.UInt32]: ...
    def insert_at(self, index: _winrt.UInt32, value: typing.Optional[T]) -> None: ...
    def remove_at(self, index: _winrt.UInt32) -> None: ...
    def remove_at_end(self) -> None: ...
    def replace_all(self, items: typing.Sequence[T]) -> None: ...
    def set_at(self, index: _winrt.UInt32, value: typing.Optional[T]) -> None: ...

MapChangedEventHandler = typing.Callable[[IObservableMap[K, V], IMapChangedEventArgs[K]], None]

VectorChangedEventHandler = typing.Callable[[IObservableVector[T], typing.Optional[IVectorChangedEventArgs]], None]

