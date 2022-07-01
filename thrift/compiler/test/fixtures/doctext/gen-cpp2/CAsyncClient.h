/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class C;
} // cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::C> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "C";
  }


  virtual void f(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void f(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  virtual void sync_f();
  virtual void sync_f(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<folly::Unit> future_f();
  virtual folly::SemiFuture<folly::Unit> semifuture_f();
  virtual folly::Future<folly::Unit> future_f(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_f(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_f(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_f(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_f() {
    return co_f<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_f(apache::thrift::RpcOptions& rpcOptions) {
    return co_f<true>(&rpcOptions);
  }
#else
  folly::coro::Task<void> co_f() {
    co_await folly::coro::detachOnCancel(semifuture_f());
  }
  folly::coro::Task<void> co_f(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_f(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_f(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = fCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      fImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_f(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void f(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_f(::apache::thrift::ClientReceiveState& state);
  static void recv_f(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_f(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_f(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void fT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> fCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void numbers(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void numbers(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void numbersImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback, bool stealRpcOptions = false);
 public:

  virtual apache::thrift::ClientBufferedStream<::cpp2::number> sync_numbers();
  virtual apache::thrift::ClientBufferedStream<::cpp2::number> sync_numbers(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> semifuture_numbers();
  virtual folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> semifuture_numbers(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<apache::thrift::ClientBufferedStream<::cpp2::number>, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_numbers(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers() {
    return co_numbers<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers(apache::thrift::RpcOptions& rpcOptions) {
    return co_numbers<true>(&rpcOptions);
  }
#else
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers() {
    co_return co_await folly::coro::detachOnCancel(semifuture_numbers());
  }
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_numbers(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<apache::thrift::ClientBufferedStream<::cpp2::number>> co_numbers(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = numbersCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::createStreamClientCallback(
        apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback),
      hasRpcOptions ? rpcOptions->getBufferOptions() : defaultRpcOptions.getBufferOptions());
    if constexpr (hasRpcOptions) {
      numbersImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      numbersImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    apache::thrift::ClientBufferedStream<::cpp2::number> _return;
    if (auto ew = recv_wrapped_numbers(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES



  static folly::exception_wrapper recv_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<::cpp2::number> recv_numbers(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual apache::thrift::ClientBufferedStream<::cpp2::number> recv_instance_numbers(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void numbersT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> numbersCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void thing(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual void thing(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
 protected:
  void thingImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c, bool stealRpcOptions = false);
 public:

  virtual void sync_thing(::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual void sync_thing(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);

  virtual folly::Future<::std::string> future_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual folly::SemiFuture<::std::string> semifuture_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual folly::Future<::std::string> future_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual folly::SemiFuture<::std::string> semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  virtual folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::std::string> co_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    return co_thing<false>(nullptr, p_a, p_b, p_c);
  }
  template <int = 0>
  folly::coro::Task<::std::string> co_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    return co_thing<true>(&rpcOptions, p_a, p_b, p_c);
  }
#else
  folly::coro::Task<::std::string> co_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    co_return co_await folly::coro::detachOnCancel(semifuture_thing(p_a, p_b, p_c));
  }
  folly::coro::Task<::std::string> co_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    co_return co_await folly::coro::detachOnCancel(semifuture_thing(rpcOptions, p_a, p_b, p_c));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_thing(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = thingCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      thingImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_a, p_b, p_c);
    } else {
      thingImpl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_a, p_b, p_c);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::std::string _return;
    if (auto ew = recv_wrapped_thing(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void thing(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);


  static folly::exception_wrapper recv_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void thingT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> thingCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using CAsyncClient [[deprecated("Use apache::thrift::Client<C> instead")]] = ::apache::thrift::Client<C>;
} // cpp2
