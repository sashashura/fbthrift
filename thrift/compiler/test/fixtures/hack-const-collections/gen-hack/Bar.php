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
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public function baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public function baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): string;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public function baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
interface BarAsyncRpcOptionsIf extends \IThriftAsyncRpcOptionsIf {
  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public function baz(\RpcOptions $rpc_options, ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): Awaitable<string>;
}

/**
 * Original thrift service:-
 * Bar
 */
trait BarClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): int {
    $currentseqid = $this->getNextSequenceID();
    $args = Bar_baz_args::fromShape(shape(
      'a' => $a,
      'b' => (new Vector($b))->map(
        $_val0 ==> new Map($_val0)
      ),
      'c' => $c,
      'd' => $d,
      'e' => $e,
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

  protected function recvImpl_baz(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): string {
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
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public async function baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $c, $d, $e);
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

}

class BarClient extends \ThriftClientBase implements BarClientIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public async function baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $c, $d, $e);
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

  /* send and recv functions */
  public function send_baz(ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): int {
    return $this->sendImpl_baz($a, $b, $c, $d, $e);
  }
  public function recv_baz(?int $expectedsequenceid = null): string {
    return $this->recvImpl_baz($expectedsequenceid);
  }
}

class BarAsyncRpcOptionsClient extends \ThriftClientBase implements BarAsyncRpcOptionsIf {
  use BarClientBase;

  /**
   * Original thrift definition:-
   * string
   *   baz(1: set<i32> a,
   *       2: list<map<i32, set<string>>> b,
   *       3: i64 c,
   *       4: Foo d,
   *       5: i64 e);
   */
  public async function baz(\RpcOptions $rpc_options, ConstSet<int> $a, KeyedContainer<int, KeyedContainer<int, ConstSet<string>>> $b, int $c, ?Foo $d, int $e): Awaitable<string> {
    await $this->asyncHandler_->genBefore("Bar", "baz");
    $currentseqid = $this->sendImpl_baz($a, $b, $c, $d, $e);
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

}

abstract class BarAsyncProcessorBase extends \ThriftAsyncProcessor {
  abstract const type TThriftIf as BarAsyncIf;
  protected async function process_baz(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('baz');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'baz', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'Bar_baz_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'Bar_baz_args');
    } else {
      $args = Bar_baz_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'baz', $args);
    $result = Bar_baz_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'baz', $args);
      $result->success = await $this->handler->baz($args->a, $args->b, $args->c, $args->d, $args->e);
      $this->eventHandler_->postExec($handler_ctx, 'baz', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'baz', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'baz', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'baz', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'baz', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("baz", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'baz', $result);
  }
}
class BarAsyncProcessor extends BarAsyncProcessorBase {
  const type TThriftIf = BarAsyncIf;
}

abstract class BarSyncProcessorBase extends \ThriftSyncProcessor {
  abstract const type TThriftIf as BarIf;
  protected function process_baz(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('baz');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'baz', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'Bar_baz_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'Bar_baz_args');
    } else {
      $args = Bar_baz_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'baz', $args);
    $result = Bar_baz_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'baz', $args);
      $result->success = $this->handler->baz($args->a, $args->b, $args->c, $args->d, $args->e);
      $this->eventHandler_->postExec($handler_ctx, 'baz', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'baz', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'baz', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'baz', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'baz', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("baz", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'baz', $result);
  }
}
class BarSyncProcessor extends BarSyncProcessorBase {
  const type TThriftIf = BarIf;
}
// For backwards compatibility
class BarProcessor extends BarSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class Bar_baz_args implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::SET,
      'etype' => \TType::I32,
      'elem' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'collection',
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
          'format' => 'collection',
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'c',
      'type' => \TType::I64,
    ),
    4 => shape(
      'var' => 'd',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    5 => shape(
      'var' => 'e',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'c' => 3,
    'd' => 4,
    'e' => 5,
  ];

  const type TConstructorShape = shape(
    ?'a' => ?ConstSet<int>,
    ?'b' => ?ConstVector<ConstMap<int, ConstSet<string>>>,
    ?'c' => ?int,
    ?'d' => ?Foo,
    ?'e' => ?int,
  );

  const int STRUCTURAL_ID = 7865027497865509792;
  public ConstSet<int> $a;
  public ConstVector<ConstMap<int, ConstSet<string>>> $b;
  public int $c;
  public ?Foo $d;
  public int $e;

  <<__Rx>>
  public function __construct(?ConstSet<int> $a = null, ?ConstVector<ConstMap<int, ConstSet<string>>> $b = null, ?int $c = null, ?Foo $d = null, ?int $e = null  ) {
    $this->a = $a ?? Set {};
    $this->b = $b ?? Vector {};
    $this->c = $c ?? 0;
    $this->d = $d;
    $this->e = $e ?? 4;
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'b'),
      Shapes::idx($shape, 'c'),
      Shapes::idx($shape, 'd'),
      Shapes::idx($shape, 'e'),
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

}

class Bar_baz_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?string,
  );

  const int STRUCTURAL_ID = 1365128170602685579;
  public ?string $success;

  <<__Rx>>
  public function __construct(?string $success = null  ) {
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
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

