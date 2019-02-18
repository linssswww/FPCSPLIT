/********************************************************************************
** Form generated from reading UI file 'FPCSPLIT.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FPCSPLIT_H
#define UI_FPCSPLIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FPCSPLITClass
{
public:
    QWidget *centralWidget;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FPCSPLITClass)
    {
        if (FPCSPLITClass->objectName().isEmpty())
            FPCSPLITClass->setObjectName(QStringLiteral("FPCSPLITClass"));
        FPCSPLITClass->resize(895, 615);
        centralWidget = new QWidget(FPCSPLITClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(10, 10, 871, 561));
        FPCSPLITClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FPCSPLITClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 895, 23));
        FPCSPLITClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FPCSPLITClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FPCSPLITClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FPCSPLITClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FPCSPLITClass->setStatusBar(statusBar);

        retranslateUi(FPCSPLITClass);

        QMetaObject::connectSlotsByName(FPCSPLITClass);
    } // setupUi

    void retranslateUi(QMainWindow *FPCSPLITClass)
    {
        FPCSPLITClass->setWindowTitle(QApplication::translate("FPCSPLITClass", "FPCSPLIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FPCSPLITClass: public Ui_FPCSPLITClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FPCSPLIT_H
