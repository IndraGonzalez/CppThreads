#include "PruebaQThreads.h"

PruebaQThreads::PruebaQThreads(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	for (int i = 0; i < 2; i++) {
		Thread *newThread = new Thread;
		threadList.append(newThread);
	}

	connect(ui.windowButton, SIGNAL(clicked()), this, SLOT(insertMessage()));

	Thread thread;
	for (int  i = 0; i < threadList.size(); i++)
	{
		Thread *thread = threadList.at(i);
		connect(ui.threadButton, SIGNAL(clicked()), this, SLOT(startThread()));
		connect(thread, SIGNAL(working()), this, SLOT(insertThreadMessage()));
		connect(ui.stopThreadButton, SIGNAL(clicked()), this, SLOT(stopThread()));
		connect(thread, SIGNAL(finished()), this, SLOT(showMessageFinished()));
	}
		
}
	

//	thread1 = new Thread;
//	thread2 = new Thread;
//	thread3 = new Thread;
//	connectMethods(thread1, ui, this);
//	connectMethods(thread2, ui, this);
//	connectMethods(thread3, ui, this);


void PruebaQThreads::insertMessage()
{
	ui.windowText->appendPlainText("La APP sigue funcionando");
}

void PruebaQThreads::insertThreadMessage()
{
	ui.threadText->appendPlainText("El hilo sigue funcionando");
}

void PruebaQThreads::showMessageFinished()
{
	ui.threadText->appendPlainText("EL HILO HA TERMINADO");
}

void PruebaQThreads::startThread()
{
	for (int i = 0; i < threadList.size(); i++)
	{
		Thread *thread = threadList.at(i);
		if ((!thread->isRunning()) && (!thread->isFinished())) {
			ui.threadText->appendPlainText("EL HILO HA EMPEZADO");
			thread->start();
		}
	}
}


void PruebaQThreads::stopThread()
{
	for (int i = 0; i < threadList.size(); i++)
	{
		Thread *thread = threadList.at(i);
		thread->stop();
	}
}
