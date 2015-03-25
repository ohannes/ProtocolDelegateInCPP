#include <iostream>
#include "Owner.h"

using namespace std;

Owner::Owner(int parameter)
{
	xid = parameter;
	worker = new Worker(xid);
	worker->delegate = this;
}

void Owner::workerNotifiesDelegateOK(Worker *worker)
{
	printLog("workerNotifiesDelegateOK");
}

void Owner::workerNotifiesDeleagateNOK(Worker *worker)
{
	printLog("workerNotifiesDeleagateNOK");
}

void Owner::doSomething(int parameter)
{
	worker->work(parameter);
}

Owner::~Owner()
{
	delete worker;
}