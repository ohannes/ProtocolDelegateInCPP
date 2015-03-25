#ifndef _WORKER_H
#define _WORKER_H

class Worker;
class Protocol;

void printLog(std::string message);

class Protocol
{
public:
	Protocol();
	virtual void workerNotifiesDelegateOK(Worker *worker) = 0;
	virtual void workerNotifiesDeleagateNOK(Worker *worker) = 0;
	~Protocol();
};

class Worker
{
public:
	Protocol *delegate;
	int xid;
	Worker(int parameter);
	void work(int parameter);
	~Worker();
};



#endif