#include "worker.h"
#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>
#include <QtCore/QThreadPool>

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);

	Worker worker;
	worker.setAutoDelete(false);

	QThreadPool *threadPool = QThreadPool::globalInstance();
	threadPool->start(&worker);

	qDebug() << "Hello from GUI thread. ID is " << (int)QThread::currentThreadId();

	threadPool->waitForDone();

	return 0;
}
