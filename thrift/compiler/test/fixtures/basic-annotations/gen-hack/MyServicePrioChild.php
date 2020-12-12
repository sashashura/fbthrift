<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * MyServicePrioChild
 */
interface MyServicePrioChildAsyncIf extends MyServicePrioParentAsyncIf {
  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public function pang(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * MyServicePrioChild
 */
interface MyServicePrioChildIf extends MyServicePrioParentIf {
  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public function pang(): void;
}

/**
 * Original thrift service:-
 * MyServicePrioChild
 */
interface MyServicePrioChildClientIf extends MyServicePrioParentClientIf {
  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public function pang(): Awaitable<void>;
}

/**
 * Original thrift service:-
 * MyServicePrioChild
 */
interface MyServicePrioChildAsyncRpcOptionsIf extends MyServicePrioParentAsyncRpcOptionsIf {
  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public function pang(\RpcOptions $rpc_options): Awaitable<void>;
}

/**
 * Original thrift service:-
 * MyServicePrioChild
 */
trait MyServicePrioChildClientBase {
  require extends \ThriftClientBase;

  protected function sendImpl_pang(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = MyServicePrioChild_pang_args::withDefaultValues();
    try {
      $this->eventHandler_->preSend('pang', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'pang', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact($this->output_, 'pang', \TMessageType::CALL, $args, $currentseqid, false);
      }
      else
      {
        $this->output_->writeMessageBegin('pang', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('pang', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('pang', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('pang', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('pang', $args, $currentseqid);
    return $currentseqid;
  }

  protected function recvImpl_pang(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): void {
    try {
      $this->eventHandler_->preRecv('pang', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'MyServicePrioChild_pang_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'MyServicePrioChild_pang_result', Shapes::idx($options, 'read_options', 0));
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
        $result = MyServicePrioChild_pang_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid != $expectedsequenceid)) {
          throw new \TProtocolException("pang failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('pang', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('pang', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('pang', $expectedsequenceid, $ex->result);
          return;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('pang', $expectedsequenceid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postRecv('pang', $expectedsequenceid, null);
    return;
  }

}

class MyServicePrioChildAsyncClient extends MyServicePrioParentAsyncClient implements MyServicePrioChildAsyncIf {
  use MyServicePrioChildClientBase;

  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public async function pang(): Awaitable<void> {
    await $this->asyncHandler_->genBefore("MyServicePrioChild", "pang");
    $currentseqid = $this->sendImpl_pang();
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
    $this->recvImpl_pang($currentseqid);
  }

}

class MyServicePrioChildClient extends MyServicePrioParentClient implements MyServicePrioChildClientIf {
  use MyServicePrioChildClientBase;

  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public async function pang(): Awaitable<void> {
    await $this->asyncHandler_->genBefore("MyServicePrioChild", "pang");
    $currentseqid = $this->sendImpl_pang();
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
    $this->recvImpl_pang($currentseqid);
  }

  /* send and recv functions */
  public function send_pang(): int {
    return $this->sendImpl_pang();
  }
  public function recv_pang(?int $expectedsequenceid = null): void {
    $this->recvImpl_pang($expectedsequenceid);
  }
}

class MyServicePrioChildAsyncRpcOptionsClient extends MyServicePrioParentAsyncRpcOptionsClient implements MyServicePrioChildAsyncRpcOptionsIf {
  use MyServicePrioChildClientBase;

  /**
   * Original thrift definition:-
   * void
   *   pang();
   */
  public async function pang(\RpcOptions $rpc_options): Awaitable<void> {
    await $this->asyncHandler_->genBefore("MyServicePrioChild", "pang");
    $currentseqid = $this->sendImpl_pang();
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
    $this->recvImpl_pang($currentseqid);
  }

}

abstract class MyServicePrioChildAsyncProcessorBase extends MyServicePrioParentAsyncProcessorBase {
  abstract const type TThriftIf as MyServicePrioChildAsyncIf;
  protected async function process_pang(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('pang');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'pang', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'MyServicePrioChild_pang_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'MyServicePrioChild_pang_args');
    } else {
      $args = MyServicePrioChild_pang_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'pang', $args);
    $result = MyServicePrioChild_pang_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'pang', $args);
      await $this->handler->pang();
      $this->eventHandler_->postExec($handler_ctx, 'pang', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'pang', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'pang', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'pang', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'pang', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("pang", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'pang', $result);
  }
}
class MyServicePrioChildAsyncProcessor extends MyServicePrioChildAsyncProcessorBase {
  const type TThriftIf = MyServicePrioChildAsyncIf;
}

abstract class MyServicePrioChildSyncProcessorBase extends MyServicePrioParentSyncProcessorBase {
  abstract const type TThriftIf as MyServicePrioChildIf;
  protected function process_pang(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('pang');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'pang', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'MyServicePrioChild_pang_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'MyServicePrioChild_pang_args');
    } else {
      $args = MyServicePrioChild_pang_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'pang', $args);
    $result = MyServicePrioChild_pang_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'pang', $args);
      $this->handler->pang();
      $this->eventHandler_->postExec($handler_ctx, 'pang', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'pang', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'pang', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'pang', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact($output, 'pang', $reply_type, $result, $seqid);
    }
    else
    {
      $output->writeMessageBegin("pang", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'pang', $result);
  }
}
class MyServicePrioChildSyncProcessor extends MyServicePrioChildSyncProcessorBase {
  const type TThriftIf = MyServicePrioChildIf;
}
// For backwards compatibility
class MyServicePrioChildProcessor extends MyServicePrioChildSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class MyServicePrioChild_pang_args implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  <<__Rx>>
  public function __construct(  ) {
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
    );
  }

  public function getName(): string {
    return 'MyServicePrioChild_pang_args';
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
    );
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
    );
  }
  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class MyServicePrioChild_pang_result implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  <<__Rx>>
  public function __construct(  ) {
  }

  <<__Rx, __MutableReturn>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx, __MutableReturn>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
    );
  }

  public function getName(): string {
    return 'MyServicePrioChild_pang_result';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class MyServicePrioChildStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getAllStructuredAnnotations(): \TServiceAnnotations {
    return shape(
      'service' => dict[],
      'functions' => dict[
      ],
    );
  }
}

