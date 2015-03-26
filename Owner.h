#ifndef _OWNER_H
#define _OWNER_H

#include "Worker.h"

class Owner : public AnotherProtocol, public Protocol
{
public:
	int xid;
	Worker *worker;
	Owner(int parameter);
	void workerNotifiesDelegateOK(Worker *worker);
	void workerNotifiesDeleagateNOK(Worker *worker);
	std::string workerRequestDelegateKey(Worker *worker);
	std::string workerRequestDelegateValue(Worker *worker);
	void doSomething(int parameter);
	~Owner();
};

#endif