#ifndef THREADPOOL_WORKER_H
#define THREADPOOL_WORKER_H

#include <QtCore/QRunnable>

class Worker : public QRunnable
{
private:
	void run();
};

#endif // THREADPOOL_WORKER_H
