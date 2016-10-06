#pragma once

#include <QThread>

class Thread : public QThread
{
	Q_OBJECT

public:
	Thread(QObject *parent = 0);
	~Thread();
	void stop();

protected:
	void run() Q_DECL_OVERRIDE;

private:
	bool abort;

signals:
	void working();
};
