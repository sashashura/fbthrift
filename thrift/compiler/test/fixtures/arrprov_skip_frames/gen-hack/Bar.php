<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * Bar
 */
interface BarAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  public function baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  public function baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): varray<Foo>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  public function baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarAsyncRpcOptionsIf extends \IThriftAsyncRpcOptionsIf {
  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  public function baz(\RpcOptions $rpc_options, darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>>;
}

/**
 * Original thrift service:-
 * Bar
 */
trait BarClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): int {
    $currentseqid = $this->getNextSequenceID();
    $args = Bar_baz_args::fromShape(shape(
      'a' => $a,
      'b' => varray(Vec\map($b, 
        $_val0 ==> darray($_val0)
      )),
      'd' => $d,
      'e' => $e,
      'f' => varray($f),
    ));
    try {
      $this->eventHandler_->preSend('baz', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'baz', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'baz', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('baz', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('baz', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('baz', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('baz', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('baz', $args, $currentseqid);
    return $currentseqid;
  }

  <<__ProvenanceSkipFrame>>
  protected function recvImpl_baz(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): varray<Foo> {
    try {
      $this->eventHandler_->preRecv('baz', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'Bar_baz_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'Bar_baz_result', Shapes::idx($options, 'read_options', 0));
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype == \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = Bar_baz_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("baz failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('baz', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('baz', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('baz', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('baz', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('baz', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("baz failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('baz', $expectedsequenceid, $x);
    throw $x;
  }

}

class BarAsyncClient extends \ThriftClientBase implements BarAsyncIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  <<__ProvenanceSkipFrame>>
  public async function baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e, $f);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid);
  }

  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  <<__ProvenanceSkipFrame>>
  public async function baz__LEGACY_ARRAYS(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e, $f);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid, shape('read_options' => THRIFT_MARK_LEGACY_ARRAYS));
  }

}

class BarClient extends \ThriftClientBase implements BarClientIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  <<__ProvenanceSkipFrame>>
  public async function baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e, $f);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid);
  }

  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  <<__ProvenanceSkipFrame>>
  public async function baz__LEGACY_ARRAYS(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e, $f);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse(new \RpcOptions(), $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid, shape('read_options' => THRIFT_MARK_LEGACY_ARRAYS));
  }

  /* send and recv functions */
  public function send_baz(darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): int {
    return $this->sendImpl_baz($a, $b, $d, $e, $f);
  }
  <<__ProvenanceSkipFrame>>
  public function recv_baz(?int $expectedsequenceid = null): varray<Foo> {
    return $this->recvImpl_baz($expectedsequenceid);
  }
}

class BarAsyncRpcOptionsClient extends \ThriftClientBase implements BarAsyncRpcOptionsIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  <<__ProvenanceSkipFrame>>
  public async function baz(\RpcOptions $rpc_options, darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e, $f);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid);
  }

  /**
   * Original thrift definition:-
   * list<Foo>
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: Foo d,
   *       4: i64 e,
   *       5: list<Foo> f);
   */
  <<__ProvenanceSkipFrame>>
  public async function baz__LEGACY_ARRAYS(\RpcOptions $rpc_options, darray<int, bool> $a, KeyedContainer<int, KeyedContainer<int, darray<string, bool>>> $b, ?Foo $d, int $e, KeyedContainer<int, Foo> $f): Awaitable<varray<Foo>> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $d, $e, $f);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    return $this->recvImpl_baz($currentseqid, shape('read_options' => THRIFT_MARK_LEGACY_ARRAYS));
  }

}

// HELPER FUNCTIONS AND STRUCTURES

class Bar_baz_args implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'array',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::I32,
        'vtype' => \TType::SET,
        'key' => shape(
          'type' => \TType::I32,
        ),
        'val' => shape(
          'type' => \TType::SET,
          'etype' => \TType::STRING,
          'elem' => shape(
            'type' => \TType::STRING,
          ),
          'format' => 'array',
        ),
        'format' => 'array',
      ),
      'format' => 'array',
    ),
    3 => shape(
      'var' => 'd',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    4 => shape(
      'var' => 'e',
      'type' => \TType::I64,
    ),
    5 => shape(
      'var' => 'f',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => Foo::class,
      ),
      'format' => 'array',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'd' => 3,
    'e' => 4,
    'f' => 5,
  ];

  const type TConstructorShape = shape(
    ?'a' => ?darray<int, bool>,
    ?'b' => ?varray<darray<int, darray<string, bool>>>,
    ?'d' => ?Foo,
    ?'e' => ?int,
    ?'f' => ?varray<Foo>,
  );

  const type TShape = shape(
    'a' => darray<int, bool>,
    'b' => varray<darray<int, darray<string, bool>>>,
    ?'d' => ?Foo::TShape,
    'e' => int,
    'f' => varray<Foo::TShape>,
  );
  const int STRUCTURAL_ID = 1612873710359158656;
  public darray<int, bool> $a;
  public varray<darray<int, darray<string, bool>>> $b;
  public ?Foo $d;
  public int $e;
  public varray<Foo> $f;

  <<__Rx, __ProvenanceSkipFrame>>
  public function __construct(?darray<int, bool> $a = null, ?varray<darray<int, darray<string, bool>>> $b = null, ?Foo $d = null, ?int $e = null, ?varray<Foo> $f = null  ) {
    $this->a = $a ?? darray[];
    $this->b = $b ?? varray[];
    $this->d = $d;
    $this->e = $e ?? 4;
    $this->f = $f ?? varray[];
  }

  <<__Rx, __MutableReturn, __ProvenanceSkipFrame>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn, __ProvenanceSkipFrame>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'b'),
      Shapes::idx($shape, 'd'),
      Shapes::idx($shape, 'e'),
      Shapes::idx($shape, 'f'),
    );
  }

  public function getName(): string {
    return 'Bar_baz_args';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  <<__Rx, __MutableReturn, __ProvenanceSkipFrame>>
  public static function __fromShape(self::TShape $shape): this {
    return new static(
      $shape['a'],
      $shape['b'],
      Shapes::idx($shape, 'd') === null ? null : (Foo::__fromShape($shape['d'])),
      $shape['e'],
      $shape['f']
        |> Vec\map(
          $$,
          $_val0 ==> $_val0
            |> Foo::__fromShape($$),
        ) |> varray($$),
    );
  }

  <<__Rx, __ProvenanceSkipFrame>>
  public function __toShape(): self::TShape {
    return shape(
      'a' => $this->a,
      'b' => $this->b,
      'd' => $this->d?->__toShape(),
      'e' => $this->e,
      'f' => $this->f
        |> (
          Vec\map(
            $$,
            <<__ProvenanceSkipFrame>> ($_val0) ==> $_val0->__toShape(),
          ) |> varray($$)
        ),
    );
  }
}

class Bar_baz_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => Foo::class,
      ),
      'format' => 'array',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?varray<Foo>,
  );

  const int STRUCTURAL_ID = 5594803499509360192;
  public ?varray<Foo> $success;

  <<__Rx, __ProvenanceSkipFrame>>
  public function __construct(?varray<Foo> $success = null  ) {
  }

  <<__Rx, __MutableReturn, __ProvenanceSkipFrame>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn, __ProvenanceSkipFrame>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName(): string {
    return 'Bar_baz_result';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

}

class BarStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getAllStructuredAnnotations(): \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}

