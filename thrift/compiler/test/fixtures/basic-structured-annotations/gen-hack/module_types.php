<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * MyEnum
 */
enum MyEnum: int {
  UNKNOWN = 0;
  ONE = 1;
}

class MyEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getAllStructuredAnnotations(): \TEnumAnnotations {
    return shape(
      'enum' => dict[
        'structured_annotation_inline' => structured_annotation_inline::fromShape(
          shape(
            "count" => 4,
          )
        ),
      ],
      'constants' => dict[
        'UNKNOWN' => dict[
          'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
            shape(
              "name" => "unknown",
            )
          ),
        ],
        'ONE' => dict[
          'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
            shape(
              "name" => "one",
            )
          ),
        ],
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * structured_annotation_inline
 */
class structured_annotation_inline implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'count',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'count' => 1,
    'name' => 2,
  ];

  const type TConstructorShape = shape(
    ?'count' => ?int,
    ?'name' => ?string,
  );

  const int STRUCTURAL_ID = 4972386806027895704;
  /**
   * Original thrift field:-
   * 1: i64 count
   */
  public int $count;
  /**
   * Original thrift field:-
   * 2: string name
   */
  public string $name;

  <<__Rx>>
  public function __construct(?int $count = null, ?string $name = null  ) {
    $this->count = $count ?? 0;
    $this->name = $name ?? "abacaba";
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'count'),
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName(): string {
    return 'structured_annotation_inline';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * structured_annotation_with_default
 */
class structured_annotation_with_default implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
  );

  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  <<__Rx>>
  public function __construct(?string $name = null  ) {
    $this->name = $name ?? "abacabadabacaba";
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'name'),
    );
  }

  public function getName(): string {
    return 'structured_annotation_with_default';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * structured_annotation_recursive
 */
class structured_annotation_recursive implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'recurse',
      'type' => \TType::STRUCT,
      'class' => structured_annotation_recursive::class,
    ),
    3 => shape(
      'var' => 'forward',
      'type' => \TType::STRUCT,
      'class' => structured_annotation_forward::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
    'recurse' => 2,
    'forward' => 3,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
    ?'recurse' => ?structured_annotation_recursive,
    ?'forward' => ?structured_annotation_forward,
  );

  const int STRUCTURAL_ID = 7354537001799650471;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;
  /**
   * Original thrift field:-
   * 2: struct module.structured_annotation_recursive recurse
   */
  public ?structured_annotation_recursive $recurse;
  /**
   * Original thrift field:-
   * 3: struct module.structured_annotation_forward forward
   */
  public ?structured_annotation_forward $forward;

  <<__Rx>>
  public function __construct(?string $name = null, ?structured_annotation_recursive $recurse = null, ?structured_annotation_forward $forward = null  ) {
    $this->name = $name ?? '';
    $this->recurse = $recurse;
    $this->forward = $forward;
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'recurse'),
      Shapes::idx($shape, 'forward'),
    );
  }

  public function getName(): string {
    return 'structured_annotation_recursive';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * structured_annotation_forward
 */
class structured_annotation_forward implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'count',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'count' => 1,
  ];

  const type TConstructorShape = shape(
    ?'count' => ?int,
  );

  const int STRUCTURAL_ID = 6887469671700782815;
  /**
   * Original thrift field:-
   * 1: i64 count
   */
  public int $count;

  <<__Rx>>
  public function __construct(?int $count = null  ) {
    $this->count = $count ?? 0;
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'count'),
    );
  }

  public function getName(): string {
    return 'structured_annotation_forward';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * structured_annotation_nested
 */
class structured_annotation_nested implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'name',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'nest',
      'type' => \TType::STRUCT,
      'class' => structured_annotation_with_default::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'name' => 1,
    'nest' => 2,
  ];

  const type TConstructorShape = shape(
    ?'name' => ?string,
    ?'nest' => ?structured_annotation_with_default,
  );

  const int STRUCTURAL_ID = 6161284296844090840;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;
  /**
   * Original thrift field:-
   * 2: struct module.structured_annotation_with_default nest
   */
  public ?structured_annotation_with_default $nest;

  <<__Rx>>
  public function __construct(?string $name = null, ?structured_annotation_with_default $nest = null  ) {
    $this->name = $name ?? '';
    $this->nest = $nest;
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'name'),
      Shapes::idx($shape, 'nest'),
    );
  }

  public function getName(): string {
    return 'structured_annotation_nested';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

/**
 * Original thrift struct:-
 * MyStruct
 */
class MyStruct implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'annotated_field',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'annotated_type',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'annotated_recursive',
      'type' => \TType::STRING,
    ),
    4 => shape(
      'var' => 'annotated_nested',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'annotated_field' => 1,
    'annotated_type' => 2,
    'annotated_recursive' => 3,
    'annotated_nested' => 4,
  ];

  const type TConstructorShape = shape(
    ?'annotated_field' => ?int,
    ?'annotated_type' => ?string,
    ?'annotated_recursive' => ?string,
    ?'annotated_nested' => ?int,
  );

  const int STRUCTURAL_ID = 3348150936040517721;
  /**
   * Original thrift field:-
   * 1: i64 annotated_field
   */
  public int $annotated_field;
  /**
   * Original thrift field:-
   * 2: string annotated_type
   */
  public string $annotated_type;
  /**
   * Original thrift field:-
   * 3: string annotated_recursive
   */
  public string $annotated_recursive;
  /**
   * Original thrift field:-
   * 4: i64 annotated_nested
   */
  public int $annotated_nested;

  <<__Rx>>
  public function __construct(?int $annotated_field = null, ?string $annotated_type = null, ?string $annotated_recursive = null, ?int $annotated_nested = null  ) {
    $this->annotated_field = $annotated_field ?? 0;
    $this->annotated_type = $annotated_type ?? '';
    $this->annotated_recursive = $annotated_recursive ?? '';
    $this->annotated_nested = $annotated_nested ?? 0;
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'annotated_field'),
      Shapes::idx($shape, 'annotated_type'),
      Shapes::idx($shape, 'annotated_recursive'),
      Shapes::idx($shape, 'annotated_nested'),
    );
  }

  public function getName(): string {
    return 'MyStruct';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[
        'structured_annotation_inline' => structured_annotation_inline::fromShape(
          shape(
            "count" => 2,
          )
        ),
        'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
          shape(
          )
        ),
        'structured_annotation_nested' => structured_annotation_nested::fromShape(
          shape(
            "name" => "nesty2",
            "nest" => structured_annotation_with_default::fromShape(
              shape(
                "name" => "dcdbdcdadcdbdcd",
              )
            ),
          )
        ),
        'structured_annotation_included' => structured_annotation_included::fromShape(
          shape(
            "name" => "aba",
          )
        ),
        '\test\namespace\structured_annotation_with_namespace' => \test\namespace\structured_annotation_with_namespace::fromShape(
          shape(
            "name" => "bac",
          )
        ),
      ],
      'fields' => dict[
        'annotated_field' => shape(
          'field' => dict[
            'structured_annotation_inline' => structured_annotation_inline::fromShape(
              shape(
                "count" => 1,
                "name" => "counter",
              )
            ),
          ],
          'type' => dict[],
        ),
        'annotated_type' => shape(
          'field' => dict[],
          'type' => dict[
            'structured_annotation_inline' => structured_annotation_inline::fromShape(
              shape(
                "count" => 1,
              )
            ),
            'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
              shape(
                "name" => "abc",
              )
            ),
          ],
        ),
        'annotated_recursive' => shape(
          'field' => dict[
            'structured_annotation_recursive' => structured_annotation_recursive::fromShape(
              shape(
                "name" => "abc",
                "recurse" => structured_annotation_recursive::fromShape(
                  shape(
                    "name" => "cba",
                  )
                ),
                "forward" => structured_annotation_forward::fromShape(
                  shape(
                    "count" => 3,
                  )
                ),
              )
            ),
          ],
          'type' => dict[],
        ),
        'annotated_nested' => shape(
          'field' => dict[
            'structured_annotation_nested' => structured_annotation_nested::fromShape(
              shape(
                "name" => "nesty",
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

}

/**
 * Original thrift exception:-
 * MyException
 */
class MyException extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'context',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'context' => 1,
  ];

  const type TConstructorShape = shape(
    ?'context' => ?string,
  );

  const int STRUCTURAL_ID = 4527164319056566576;
  /**
   * Original thrift field:-
   * 1: string context
   */
  public string $context;

  <<__Rx>>
  public function __construct(?string $context = null  ) {
    parent::__construct();
    $this->context = $context ?? '';
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'context'),
    );
  }

  public function getName(): string {
    return 'MyException';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[
        'structured_annotation_nested' => structured_annotation_nested::fromShape(
          shape(
            "name" => "nesty",
          )
        ),
      ],
      'fields' => dict[
        'context' => shape(
          'field' => dict[
            'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
              shape(
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

}

enum MyUnionEnum: int {
  _EMPTY_ = 0;
  first = 1;
  second = 2;
}

/**
 * Original thrift struct:-
 * MyUnion
 */
class MyUnion implements \IThriftStruct, \IThriftUnion<MyUnionEnum> {
  use \ThriftUnionSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'first',
      'union' => true,
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'second',
      'union' => true,
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'first' => 1,
    'second' => 2,
  ];

  const type TConstructorShape = shape(
    ?'first' => ?string,
    ?'second' => ?int,
  );

  const int STRUCTURAL_ID = 1597178699879920243;
  /**
   * Original thrift field:-
   * 1: string first
   */
  public ?string $first;
  /**
   * Original thrift field:-
   * 2: i64 second
   */
  public ?int $second;
  protected MyUnionEnum $_type = MyUnionEnum::_EMPTY_;

  <<__Rx>>
  public function __construct(?string $first = null, ?int $second = null  ) {
    $this->_type = MyUnionEnum::_EMPTY_;
    if ($first !== null) {
      $this->first = $first;
      $this->_type = MyUnionEnum::first;
    }
    if ($second !== null) {
      $this->second = $second;
      $this->_type = MyUnionEnum::second;
    }
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'first'),
      Shapes::idx($shape, 'second'),
    );
  }

  public function getName(): string {
    return 'MyUnion';
  }

  public function getType(): MyUnionEnum {
    return $this->_type;
  }

  public function reset(): void {
    switch ($this->_type) {
      case MyUnionEnum::first:
        $this->first = null;
        break;
      case MyUnionEnum::second:
        $this->second = null;
        break;
      case MyUnionEnum::_EMPTY_:
        break;
    }
    $this->_type = MyUnionEnum::_EMPTY_;
}

  public function set_first(string $first): this {
    $this->reset();
    $this->_type = MyUnionEnum::first;
    $this->first = $first;
    return $this;
  }

  public function get_first(): string {
    invariant(
      $this->_type === MyUnionEnum::first,
      'get_first called on an instance of MyUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->first as nonnull;
  }

  public function set_second(int $second): this {
    $this->reset();
    $this->_type = MyUnionEnum::second;
    $this->second = $second;
    return $this;
  }

  public function get_second(): int {
    invariant(
      $this->_type === MyUnionEnum::second,
      'get_second called on an instance of MyUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->second as nonnull;
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[
        'structured_annotation_nested' => structured_annotation_nested::fromShape(
          shape(
            "name" => "nesty",
            "nest" => structured_annotation_with_default::fromShape(
              shape(
              )
            ),
          )
        ),
      ],
      'fields' => dict[
        'first' => shape(
          'field' => dict[
            'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
              shape(
              )
            ),
          ],
          'type' => dict[
            'structured_annotation_inline' => structured_annotation_inline::fromShape(
              shape(
                "count" => 1,
              )
            ),
            'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
              shape(
                "name" => "abc",
              )
            ),
          ],
        ),
        'second' => shape(
          'field' => dict[
            'structured_annotation_with_default' => structured_annotation_with_default::fromShape(
              shape(
                "name" => "aba",
              )
            ),
          ],
          'type' => dict[
            'structured_annotation_inline' => structured_annotation_inline::fromShape(
              shape(
                "count" => 2,
              )
            ),
          ],
        ),
      ],
    );
  }

}

