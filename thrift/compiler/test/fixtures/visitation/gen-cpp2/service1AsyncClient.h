/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/reflection_dep_B_types.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/reflection_dep_C_types.h"
#include "thrift/test/fatal_custom_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test_cpp2 { namespace cpp_reflection {
class service1;
}} // test_cpp2::cpp_reflection
namespace apache::thrift {

template <>
class Client<::test_cpp2::cpp_reflection::service1> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "service1";
  }


  virtual void method1(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void method1(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void method1Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  virtual void sync_method1();
  virtual void sync_method1(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<folly::Unit> future_method1();
  virtual folly::SemiFuture<folly::Unit> semifuture_method1();
  virtual folly::Future<folly::Unit> future_method1(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_method1(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method1(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method1(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_method1() {
    return co_method1<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_method1(apache::thrift::RpcOptions& rpcOptions) {
    return co_method1<true>(&rpcOptions);
  }
#else
  folly::coro::Task<void> co_method1() {
    co_await folly::coro::detachOnCancel(semifuture_method1());
  }
  folly::coro::Task<void> co_method1(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_method1(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_method1(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method1Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      method1Impl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      method1Impl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_method1(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void method1(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_method1(::apache::thrift::ClientReceiveState& state);
  static void recv_method1(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method1(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method1(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void method1T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> method1Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void method2(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual void method2(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
 protected:
  void method2Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z, bool stealRpcOptions = false);
 public:

  virtual void sync_method2(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual void sync_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);

  virtual folly::Future<folly::Unit> future_method2(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_method2(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::Future<folly::Unit> future_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<folly::Unit> semifuture_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<void> co_method2(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    return co_method2<false>(nullptr, p_x, p_y, p_z);
  }
  template <int = 0>
  folly::coro::Task<void> co_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    return co_method2<true>(&rpcOptions, p_x, p_y, p_z);
  }
#else
  folly::coro::Task<void> co_method2(::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    co_await folly::coro::detachOnCancel(semifuture_method2(p_x, p_y, p_z));
  }
  folly::coro::Task<void> co_method2(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    co_await folly::coro::detachOnCancel(semifuture_method2(rpcOptions, p_x, p_y, p_z));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_method2(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method2Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      method2Impl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_x, p_y, p_z);
    } else {
      method2Impl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_x, p_y, p_z);
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
    if (auto ew = recv_wrapped_method2(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void method2(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);


  static folly::exception_wrapper recv_wrapped_method2(::apache::thrift::ClientReceiveState& state);
  static void recv_method2(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method2(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method2(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void method2T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_x, const ::test_cpp2::cpp_reflection::struct1& p_y, double p_z);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> method2Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void method3(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void method3(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void method3Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  virtual ::std::int32_t sync_method3();
  virtual ::std::int32_t sync_method3(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<::std::int32_t> future_method3();
  virtual folly::SemiFuture<::std::int32_t> semifuture_method3();
  virtual folly::Future<::std::int32_t> future_method3(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<::std::int32_t> semifuture_method3(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method3(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method3(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_method3() {
    return co_method3<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_method3(apache::thrift::RpcOptions& rpcOptions) {
    return co_method3<true>(&rpcOptions);
  }
#else
  folly::coro::Task<::std::int32_t> co_method3() {
    co_return co_await folly::coro::detachOnCancel(semifuture_method3());
  }
  folly::coro::Task<::std::int32_t> co_method3(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method3(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_method3(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method3Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      method3Impl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      method3Impl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_method3(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void method3(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_method3(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static ::std::int32_t recv_method3(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual ::std::int32_t recv_instance_method3(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method3(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void method3T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> method3Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void method4(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual void method4(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
 protected:
  void method4Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k, bool stealRpcOptions = false);
 public:

  virtual ::std::int32_t sync_method4(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual ::std::int32_t sync_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);

  virtual folly::Future<::std::int32_t> future_method4(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<::std::int32_t> semifuture_method4(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::Future<::std::int32_t> future_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<::std::int32_t> semifuture_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::Future<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  virtual folly::SemiFuture<std::pair<::std::int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_method4(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    return co_method4<false>(nullptr, p_i, p_j, p_k);
  }
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    return co_method4<true>(&rpcOptions, p_i, p_j, p_k);
  }
#else
  folly::coro::Task<::std::int32_t> co_method4(::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method4(p_i, p_j, p_k));
  }
  folly::coro::Task<::std::int32_t> co_method4(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method4(rpcOptions, p_i, p_j, p_k));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_method4(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method4Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      method4Impl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_i, p_j, p_k);
    } else {
      method4Impl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_i, p_j, p_k);
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
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_method4(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void method4(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);


  static folly::exception_wrapper recv_wrapped_method4(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static ::std::int32_t recv_method4(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual ::std::int32_t recv_instance_method4(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method4(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void method4T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_i, const ::test_cpp2::cpp_reflection::struct1& p_j, double p_k);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> method4Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void method5(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void method5(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void method5Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  virtual void sync_method5(::test_cpp2::cpp_reflection::struct2& _return);
  virtual void sync_method5(apache::thrift::RpcOptions& rpcOptions, ::test_cpp2::cpp_reflection::struct2& _return);

  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_method5();
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_method5();
  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_method5(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_method5(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method5(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method5(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method5() {
    return co_method5<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method5(apache::thrift::RpcOptions& rpcOptions) {
    return co_method5<true>(&rpcOptions);
  }
#else
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method5() {
    co_return co_await folly::coro::detachOnCancel(semifuture_method5());
  }
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method5(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method5(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method5(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method5Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      method5Impl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      method5Impl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    ::test_cpp2::cpp_reflection::struct2 _return;
    if (auto ew = recv_wrapped_method5(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void method5(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_method5(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_method5(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method5(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method5(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void method5T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> method5Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
  virtual void method6(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual void method6(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
 protected:
  void method6Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n, bool stealRpcOptions = false);
 public:

  virtual void sync_method6(::test_cpp2::cpp_reflection::struct2& _return, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual void sync_method6(apache::thrift::RpcOptions& rpcOptions, ::test_cpp2::cpp_reflection::struct2& _return, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);

  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_method6(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_method6(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::Future<::test_cpp2::cpp_reflection::struct2> future_method6(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<::test_cpp2::cpp_reflection::struct2> semifuture_method6(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::Future<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_method6(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  virtual folly::SemiFuture<std::pair<::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_method6(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);

#if FOLLY_HAS_COROUTINES
#if __clang__
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method6(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    return co_method6<false>(nullptr, p_l, p_m, p_n);
  }
  template <int = 0>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method6(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    return co_method6<true>(&rpcOptions, p_l, p_m, p_n);
  }
#else
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method6(::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method6(p_l, p_m, p_n));
  }
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method6(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    co_return co_await folly::coro::detachOnCancel(semifuture_method6(rpcOptions, p_l, p_m, p_n));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::test_cpp2::cpp_reflection::struct2> co_method6(apache::thrift::RpcOptions* rpcOptions, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = method6Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      method6Impl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_l, p_m, p_n);
    } else {
      method6Impl(defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_l, p_m, p_n);
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
    ::test_cpp2::cpp_reflection::struct2 _return;
    if (auto ew = recv_wrapped_method6(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void method6(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);


  static folly::exception_wrapper recv_wrapped_method6(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_method6(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_method6(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_method6(::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void method6T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_l, const ::test_cpp2::cpp_reflection::struct1& p_m, double p_n);
  std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> method6Ctx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace test_cpp2 { namespace cpp_reflection {
using service1AsyncClient [[deprecated("Use apache::thrift::Client<service1> instead")]] = ::apache::thrift::Client<service1>;
}} // test_cpp2::cpp_reflection
