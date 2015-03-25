#ifndef _OWNER_H
#define _OWNER_H

#include "Worker.h"

class Owner : public Protocol
{
public:
	int xid;
	Worker *worker;
	Owner(int parameter);
	void workerNotifiesDelegateOK(Worker *worker);
	void workerNotifiesDeleagateNOK(Worker *worker);
	void doSomething(int parameter);
	~Owner();
};

#endif