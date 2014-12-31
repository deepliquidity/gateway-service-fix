#include <iostream>
#include <fix8/f8includes.hpp>
#include <fix8/usage.hpp>
#include <core/ExchangeGateway.h>


#include <messages/DeepLiquidity_types.hpp>
#include <messages/DeepLiquidity_router.hpp>
#include <messages/DeepLiquidity_classes.hpp>

using namespace FIX8;
using namespace DL;


int main(int argc,char *argv[])
{
	FIX8::DL::Heartbeat msg;
	ExchangeGateway exchange;
	f8String str;
	std::string error;

	if(exchange.initialize(argv[1],error))
	{
		exchange.start();
	}
	else
	{
		std::cerr << "Failed to start the service. Error: " << error << std::endl;
	}
	msg.encode(str);
	std::cout << str;
	return 0;
}
