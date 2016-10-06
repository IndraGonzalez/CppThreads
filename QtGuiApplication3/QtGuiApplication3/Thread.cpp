#include "Thread.h"

Thread::Thread(QObject *parent)
	: QThread(parent)
{

	abort = false;
}

Thread::~Thread()
{
}

void Thread::run()
{
	while (true) {
		if (abort) break;
		msleep(50);
		emit working();
	}
	exit();
}

void Thread::stop()
{
	abort = true;
}


