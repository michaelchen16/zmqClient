#include <iostream>
#include <string>

#define strdup _strdup
#define SENDER_SOCKET "tcp://localhost:5557"

#include "zmq.hpp"
#include "ts_wmi_event.pb.h"
#include "ts_fim_event.pb.h"

int main()
{
	zmq::context_t context(1);
	zmq::socket_t puller(context, ZMQ_PULL);

	puller.bind("tcp://*:5558");

	//void* context = zmq_ctx_new();
	//void* receiver = zmq_socket(context, ZMQ_PULL);
	//
	//zmq_bind(receiver, "tcp://*:5558");

	printf("Connected to socket.\n");

	for (;;)
	{
		//char* string = s_recv(receiver);
		zmq::message_t message;
		puller.recv(&message);
		std::string smessage(static_cast<char*>(message.data()), message.size());

		// ts_wmi_events::ts_wmi_event ts_wmi_event;
		// ts_wmi_event.ParseFromString(smessage);

		ts_wmi_events::ts_wmi_event ts_wmi_event;
		ts_wmi_event.ParseFromString(smessage);

		std::cout << smessage << std::endl;
	}

	google::protobuf::ShutdownProtobufLibrary();

	zmq_term(context);


	return 0;
}