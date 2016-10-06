#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PruebaQThreads.h"
#include "Thread.h"

class PruebaQThreads : public QMainWindow
{
    Q_OBJECT

public:
    PruebaQThreads(QWidget *parent = Q_NULLPTR);
	void connectMethods(Thread* thread, Ui::PruebaQThreadsClass ui, PruebaQThreads* window);

private:
    Ui::PruebaQThreadsClass ui;
	QList<Thread*> threadList;
//	Thread* thread1;
//	Thread* thread2;
//	Thread* thread3;

public slots:
	void insertMessage();
	void insertThreadMessage();
	void showMessageFinished();
	void startThread();
	void stopThread();
};
