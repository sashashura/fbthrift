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
  MyValue1 = 0;
  MyValue2 = 1;
  DOMAIN = 2;
}

class MyEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getAllStructuredAnnotations(): \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * MyStructNestedAnnotation
 */
class MyStructNestedAnnotation implements \IThriftStruct, \IThriftShapishStruct {
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

  const type TShape = shape(
    'name' => string,
    ...
  );
  const int STRUCTURAL_ID = 2593878277785201336;
  /**
   * Original thrift field:-
   * 1: string name
   */
  public string $name;

  <<__Rx>>
  public function __construct(?string $name = null  ) {
    $this->name = $name ?? '';
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
    return 'MyStructNestedAnnotation';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  <<__Rx, __MutableReturn>>
  public static function __fromShape(self::TShape $shape): this {
    return new static(
      $shape['name'],
    );
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'name' => $this->name,
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'name') !== null) {
      $this->name = /* HH_FIXME[4110] */ $parsed['name'];
    }    
  }

}

/**
 * Original thrift struct:-
 * MyStructAnnotation
 */
class MyStructAnnotation implements \IThriftStruct, \IThriftShapishStruct {
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
    3 => shape(
      'var' => 'extra',
      'type' => \TType::STRING,
    ),
    4 => shape(
      'var' => 'nest',
      'type' => \TType::STRUCT,
      'class' => MyStructNestedAnnotation::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'count' => 1,
    'name' => 2,
    'extra' => 3,
    'nest' => 4,
  ];

  const type TConstructorShape = shape(
    ?'count' => ?int,
    ?'name' => ?string,
    ?'extra' => ?string,
    ?'nest' => ?MyStructNestedAnnotation,
  );

  const type TShape = shape(
    'count' => int,
    'name' => string,
    ?'extra' => ?string,
    ?'nest' => ?MyStructNestedAnnotation::TShape,
    ...
  );
  const int STRUCTURAL_ID = 6634109792509290256;
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
  /**
   * Original thrift field:-
   * 3: string extra
   */
  public ?string $extra;
  /**
   * Original thrift field:-
   * 4: struct module.MyStructNestedAnnotation nest
   */
  public ?MyStructNestedAnnotation $nest;

  <<__Rx>>
  public function __construct(?int $count = null, ?string $name = null, ?string $extra = null, ?MyStructNestedAnnotation $nest = null  ) {
    $this->count = $count ?? 0;
    $this->name = $name ?? '';
    $this->extra = $extra;
    $this->nest = $nest;
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
      Shapes::idx($shape, 'extra'),
      Shapes::idx($shape, 'nest'),
    );
  }

  public function getName(): string {
    return 'MyStructAnnotation';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  <<__Rx, __MutableReturn>>
  public static function __fromShape(self::TShape $shape): this {
    return new static(
      $shape['count'],
      $shape['name'],
      Shapes::idx($shape, 'extra') === null ? null : ($shape['extra']),
      Shapes::idx($shape, 'nest') === null ? null : (MyStructNestedAnnotation::__fromShape($shape['nest'])),
    );
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'count' => $this->count,
      'name' => $this->name,
      'extra' => $this->extra,
      'nest' => $this->nest?->__toShape(),
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'count') !== null) {
      $this->count = /* HH_FIXME[4110] */ $parsed['count'];
    }    
    if (idx($parsed, 'name') !== null) {
      $this->name = /* HH_FIXME[4110] */ $parsed['name'];
    }    
    if (idx($parsed, 'extra') !== null) {
      $this->extra = /* HH_FIXME[4110] */ $parsed['extra'];
    }    
    if (idx($parsed, 'nest') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['nest']);
      $_tmp1 = MyStructNestedAnnotation::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->nest = $_tmp1;
    }    
  }

}

/**
 * Original thrift struct:-
 * MyStruct
 */
class MyStruct implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'major',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'package',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'annotation_with_quote',
      'type' => \TType::STRING,
    ),
    4 => shape(
      'var' => 'class_',
      'type' => \TType::STRING,
    ),
    5 => shape(
      'var' => 'annotation_with_trailing_comma',
      'type' => \TType::STRING,
    ),
    6 => shape(
      'var' => 'empty_annotations',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'major' => 1,
    'package' => 2,
    'annotation_with_quote' => 3,
    'class_' => 4,
    'annotation_with_trailing_comma' => 5,
    'empty_annotations' => 6,
  ];

  const type TConstructorShape = shape(
    ?'major' => ?int,
    ?'package' => ?string,
    ?'annotation_with_quote' => ?string,
    ?'class_' => ?string,
    ?'annotation_with_trailing_comma' => ?string,
    ?'empty_annotations' => ?string,
  );

  const type TShape = shape(
    'major' => int,
    'package' => string,
    'annotation_with_quote' => string,
    'class_' => string,
    'annotation_with_trailing_comma' => string,
    'empty_annotations' => string,
    ...
  );
  const int STRUCTURAL_ID = 7960127824272155634;
  /**
   * Original thrift field:-
   * 1: i64 major
   */
  public int $major;
  /**
   * Original thrift field:-
   * 2: string package
   */
  public string $package;
  /**
   * Original thrift field:-
   * 3: string annotation_with_quote
   */
  public string $annotation_with_quote;
  /**
   * Original thrift field:-
   * 4: string class_
   */
  public string $class_;
  /**
   * Original thrift field:-
   * 5: string annotation_with_trailing_comma
   */
  public string $annotation_with_trailing_comma;
  /**
   * Original thrift field:-
   * 6: string empty_annotations
   */
  public string $empty_annotations;

  <<__Rx>>
  public function __construct(?int $major = null, ?string $package = null, ?string $annotation_with_quote = null, ?string $class_ = null, ?string $annotation_with_trailing_comma = null, ?string $empty_annotations = null  ) {
    $this->major = $major ?? 0;
    $this->package = $package ?? '';
    $this->annotation_with_quote = $annotation_with_quote ?? '';
    $this->class_ = $class_ ?? '';
    $this->annotation_with_trailing_comma = $annotation_with_trailing_comma ?? '';
    $this->empty_annotations = $empty_annotations ?? '';
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'major'),
      Shapes::idx($shape, 'package'),
      Shapes::idx($shape, 'annotation_with_quote'),
      Shapes::idx($shape, 'class_'),
      Shapes::idx($shape, 'annotation_with_trailing_comma'),
      Shapes::idx($shape, 'empty_annotations'),
    );
  }

  public function getName(): string {
    return 'MyStruct';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  <<__Rx, __MutableReturn>>
  public static function __fromShape(self::TShape $shape): this {
    return new static(
      $shape['major'],
      $shape['package'],
      $shape['annotation_with_quote'],
      $shape['class_'],
      $shape['annotation_with_trailing_comma'],
      $shape['empty_annotations'],
    );
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'major' => $this->major,
      'package' => $this->package,
      'annotation_with_quote' => $this->annotation_with_quote,
      'class_' => $this->class_,
      'annotation_with_trailing_comma' => $this->annotation_with_trailing_comma,
      'empty_annotations' => $this->empty_annotations,
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'major') !== null) {
      $this->major = /* HH_FIXME[4110] */ $parsed['major'];
    }    
    if (idx($parsed, 'package') !== null) {
      $this->package = /* HH_FIXME[4110] */ $parsed['package'];
    }    
    if (idx($parsed, 'annotation_with_quote') !== null) {
      $this->annotation_with_quote = /* HH_FIXME[4110] */ $parsed['annotation_with_quote'];
    }    
    if (idx($parsed, 'class_') !== null) {
      $this->class_ = /* HH_FIXME[4110] */ $parsed['class_'];
    }    
    if (idx($parsed, 'annotation_with_trailing_comma') !== null) {
      $this->annotation_with_trailing_comma = /* HH_FIXME[4110] */ $parsed['annotation_with_trailing_comma'];
    }    
    if (idx($parsed, 'empty_annotations') !== null) {
      $this->empty_annotations = /* HH_FIXME[4110] */ $parsed['empty_annotations'];
    }    
  }

}

/**
 * Original thrift struct:-
 * SecretStruct
 */
class SecretStruct implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'id',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'password',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'id' => 1,
    'password' => 2,
  ];

  const type TConstructorShape = shape(
    ?'id' => ?int,
    ?'password' => ?string,
  );

  const type TShape = shape(
    'id' => int,
    'password' => string,
    ...
  );
  const int STRUCTURAL_ID = 7563936987719176841;
  /**
   * Original thrift field:-
   * 1: i64 id
   */
  public int $id;
  /**
   * Original thrift field:-
   * 2: string password
   */
  public string $password;

  <<__Rx>>
  public function __construct(?int $id = null, ?string $password = null  ) {
    $this->id = $id ?? 0;
    $this->password = $password ?? '';
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'id'),
      Shapes::idx($shape, 'password'),
    );
  }

  public function getName(): string {
    return 'SecretStruct';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  <<__Rx, __MutableReturn>>
  public static function __fromShape(self::TShape $shape): this {
    return new static(
      $shape['id'],
      $shape['password'],
    );
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'id' => $this->id,
      'password' => $this->password,
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'id') !== null) {
      $this->id = /* HH_FIXME[4110] */ $parsed['id'];
    }    
    if (idx($parsed, 'password') !== null) {
      $this->password = /* HH_FIXME[4110] */ $parsed['password'];
    }    
  }

}

