#include "worker.h"
#include <QtCore/QDebug>
#include <QtCore/QThread>

/*------- Worker class ----------------------------------*/
void Worker::run()
{
	qDebug() << "Hello from worker thread. ID is " << (int)QThread::currentThreadId();
}
