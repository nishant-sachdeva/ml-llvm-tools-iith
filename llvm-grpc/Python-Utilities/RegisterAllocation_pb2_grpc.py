# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import RegisterAllocation_pb2 as RegisterAllocation__pb2


class RegisterAllocationStub(object):
    """General Register Allocation Service 
    """

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.getGraphs = channel.unary_unary(
                '/registerallocation.RegisterAllocation/getGraphs',
                request_serializer=RegisterAllocation__pb2.Path.SerializeToString,
                response_deserializer=RegisterAllocation__pb2.GraphList.FromString,
                )
        self.codeGen = channel.unary_unary(
                '/registerallocation.RegisterAllocation/codeGen',
                request_serializer=RegisterAllocation__pb2.ColorData.SerializeToString,
                response_deserializer=RegisterAllocation__pb2.Empty.FromString,
                )


class RegisterAllocationServicer(object):
    """General Register Allocation Service 
    """

    def getGraphs(self, request, context):
        """RPC function to get interference graphs
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def codeGen(self, request, context):
        """RPC function to send register color data for codegen
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_RegisterAllocationServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'getGraphs': grpc.unary_unary_rpc_method_handler(
                    servicer.getGraphs,
                    request_deserializer=RegisterAllocation__pb2.Path.FromString,
                    response_serializer=RegisterAllocation__pb2.GraphList.SerializeToString,
            ),
            'codeGen': grpc.unary_unary_rpc_method_handler(
                    servicer.codeGen,
                    request_deserializer=RegisterAllocation__pb2.ColorData.FromString,
                    response_serializer=RegisterAllocation__pb2.Empty.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'registerallocation.RegisterAllocation', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class RegisterAllocation(object):
    """General Register Allocation Service 
    """

    @staticmethod
    def getGraphs(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/registerallocation.RegisterAllocation/getGraphs',
            RegisterAllocation__pb2.Path.SerializeToString,
            RegisterAllocation__pb2.GraphList.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def codeGen(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/registerallocation.RegisterAllocation/codeGen',
            RegisterAllocation__pb2.ColorData.SerializeToString,
            RegisterAllocation__pb2.Empty.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
