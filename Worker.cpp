#include <iostream>
#include "Worker.h"

using namespace std;

void printLog(string message)
{
	cout << message << endl;
}

Protocol::Protocol(){}

Protocol::~Protocol(){}

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
}

Worker::~Worker(){}

