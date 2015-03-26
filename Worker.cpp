#include <iostream>
#include "Worker.h"

using namespace std;

void printLog(string message)
{
	cout << message << endl;
}

Protocol::Protocol(){}

Protocol::~Protocol(){}

AnotherProtocol::AnotherProtocol(){}

AnotherProtocol::~AnotherProtocol(){}

Worker::Worker(int parameter)
{
	xid = parameter;
}

void Worker::work(int parameter)
{
	if(xid == parameter)
	{
		if(delegate)
		{
			delegate->workerNotifiesDelegateOK(this);
		}
		else
		{
			printLog("No delegate assinged to Worker");
		}
	}
	else
	{
		if(delegate)
		{
			delegate->workerNotifiesDeleagateNOK(this);
		}
		else
		{
			printLog("No delegate assinged to Worker");
		}
	}

	if(anotherDelegate)
	{
		string key = anotherDelegate->workerRequestDelegateKey(this);
		string value = anotherDelegate->workerRequestDelegateValue(this);
		printLog("anotherDelegate declared value " + value + " for key " + key);
	}
	else
	{
		printLog("No anotherDelegate assinged to Worker");
	}
}

Worker::~Worker(){}

