/********************************************************************************
** Form generated from reading UI file 'PruebaQThreads.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRUEBAQTHREADS_H
#define UI_PRUEBAQTHREADS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PruebaQThreadsClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *windowText;
    QPlainTextEdit *threadText;
    QPushButton *windowButton;
    QPushButton *threadButton;
    QPushButton *stopThreadButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PruebaQThreadsClass)
    {
        if (PruebaQThreadsClass->objectName().isEmpty())
            PruebaQThreadsClass->setObjectName(QStringLiteral("PruebaQThreadsClass"));
        PruebaQThreadsClass->resize(779, 493);
        centralWidget = new QWidget(PruebaQThreadsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        windowText = new QPlainTextEdit(centralWidget);
        windowText->setObjectName(QStringLiteral("windowText"));

        verticalLayout->addWidget(windowText);

        threadText = new QPlainTextEdit(centralWidget);
        threadText->setObjectName(QStringLiteral("threadText"));

        verticalLayout->addWidget(threadText);

        windowButton = new QPushButton(centralWidget);
        windowButton->setObjectName(QStringLiteral("windowButton"));

        verticalLayout->addWidget(windowButton);

        threadButton = new QPushButton(centralWidget);
        threadButton->setObjectName(QStringLiteral("threadButton"));

        verticalLayout->addWidget(threadButton);

        stopThreadButton = new QPushButton(centralWidget);
        stopThreadButton->setObjectName(QStringLiteral("stopThreadButton"));

        verticalLayout->addWidget(stopThreadButton);

        PruebaQThreadsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PruebaQThreadsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 21));
        PruebaQThreadsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PruebaQThreadsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PruebaQThreadsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PruebaQThreadsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PruebaQThreadsClass->setStatusBar(statusBar);

        retranslateUi(PruebaQThreadsClass);

        QMetaObject::connectSlotsByName(PruebaQThreadsClass);
    } // setupUi

    void retranslateUi(QMainWindow *PruebaQThreadsClass)
    {
        PruebaQThreadsClass->setWindowTitle(QApplication::translate("PruebaQThreadsClass", "PruebaQThreads", 0));
        windowButton->setText(QApplication::translate("PruebaQThreadsClass", "Mostrar Mensaje", 0));
        threadButton->setText(QApplication::translate("PruebaQThreadsClass", "Lanzar hilo", 0));
        stopThreadButton->setText(QApplication::translate("PruebaQThreadsClass", "Abortar hilo", 0));
    } // retranslateUi

};

namespace Ui {
    class PruebaQThreadsClass: public Ui_PruebaQThreadsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRUEBAQTHREADS_H
