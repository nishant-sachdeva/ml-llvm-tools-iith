// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: RegisterAllocation.proto

#include "RegisterAllocation.pb.h"
#include "RegisterAllocation.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace registerallocation {

static const char* RegisterAllocation_method_names[] = {
  "/registerallocation.RegisterAllocation/getGraphs",
  "/registerallocation.RegisterAllocation/codeGen",
};

std::unique_ptr< RegisterAllocation::Stub> RegisterAllocation::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RegisterAllocation::Stub> stub(new RegisterAllocation::Stub(channel));
  return stub;
}

RegisterAllocation::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_getGraphs_(RegisterAllocation_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_codeGen_(RegisterAllocation_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RegisterAllocation::Stub::getGraphs(::grpc::ClientContext* context, const ::registerallocation::Path& request, ::registerallocation::GraphList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::registerallocation::Path, ::registerallocation::GraphList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_getGraphs_, context, request, response);
}

void RegisterAllocation::Stub::experimental_async::getGraphs(::grpc::ClientContext* context, const ::registerallocation::Path* request, ::registerallocation::GraphList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::registerallocation::Path, ::registerallocation::GraphList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getGraphs_, context, request, response, std::move(f));
}

void RegisterAllocation::Stub::experimental_async::getGraphs(::grpc::ClientContext* context, const ::registerallocation::Path* request, ::registerallocation::GraphList* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_getGraphs_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::registerallocation::GraphList>* RegisterAllocation::Stub::PrepareAsyncgetGraphsRaw(::grpc::ClientContext* context, const ::registerallocation::Path& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::registerallocation::GraphList, ::registerallocation::Path, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_getGraphs_, context, request);
}

::grpc::ClientAsyncResponseReader< ::registerallocation::GraphList>* RegisterAllocation::Stub::AsyncgetGraphsRaw(::grpc::ClientContext* context, const ::registerallocation::Path& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncgetGraphsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status RegisterAllocation::Stub::codeGen(::grpc::ClientContext* context, const ::registerallocation::ColorData& request, ::registerallocation::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::registerallocation::ColorData, ::registerallocation::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_codeGen_, context, request, response);
}

void RegisterAllocation::Stub::experimental_async::codeGen(::grpc::ClientContext* context, const ::registerallocation::ColorData* request, ::registerallocation::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::registerallocation::ColorData, ::registerallocation::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_codeGen_, context, request, response, std::move(f));
}

void RegisterAllocation::Stub::experimental_async::codeGen(::grpc::ClientContext* context, const ::registerallocation::ColorData* request, ::registerallocation::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_codeGen_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::registerallocation::Empty>* RegisterAllocation::Stub::PrepareAsynccodeGenRaw(::grpc::ClientContext* context, const ::registerallocation::ColorData& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::registerallocation::Empty, ::registerallocation::ColorData, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_codeGen_, context, request);
}

::grpc::ClientAsyncResponseReader< ::registerallocation::Empty>* RegisterAllocation::Stub::AsynccodeGenRaw(::grpc::ClientContext* context, const ::registerallocation::ColorData& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynccodeGenRaw(context, request, cq);
  result->StartCall();
  return result;
}

RegisterAllocation::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RegisterAllocation_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RegisterAllocation::Service, ::registerallocation::Path, ::registerallocation::GraphList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RegisterAllocation::Service* service,
             ::grpc::ServerContext* ctx,
             const ::registerallocation::Path* req,
             ::registerallocation::GraphList* resp) {
               return service->getGraphs(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RegisterAllocation_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RegisterAllocation::Service, ::registerallocation::ColorData, ::registerallocation::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RegisterAllocation::Service* service,
             ::grpc::ServerContext* ctx,
             const ::registerallocation::ColorData* req,
             ::registerallocation::Empty* resp) {
               return service->codeGen(ctx, req, resp);
             }, this)));
}

RegisterAllocation::Service::~Service() {
}

::grpc::Status RegisterAllocation::Service::getGraphs(::grpc::ServerContext* context, const ::registerallocation::Path* request, ::registerallocation::GraphList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status RegisterAllocation::Service::codeGen(::grpc::ServerContext* context, const ::registerallocation::ColorData* request, ::registerallocation::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace registerallocation

