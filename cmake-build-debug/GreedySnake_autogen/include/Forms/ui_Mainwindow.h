/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

namespace UI {

class Ui_Mainwindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UI__Mainwindow)
    {
        if (UI__Mainwindow->objectName().isEmpty())
            UI__Mainwindow->setObjectName(QString::fromUtf8("UI__Mainwindow"));
        UI__Mainwindow->resize(400, 300);
        centralwidget = new QWidget(UI__Mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        UI__Mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UI__Mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 17));
        UI__Mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UI__Mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UI__Mainwindow->setStatusBar(statusbar);

        retranslateUi(UI__Mainwindow);

        QMetaObject::connectSlotsByName(UI__Mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *UI__Mainwindow)
    {
        UI__Mainwindow->setWindowTitle(QCoreApplication::translate("UI::Mainwindow", "Mainwindow", nullptr));
    } // retranslateUi

};

} // namespace UI

namespace UI {
namespace Ui {
    class Mainwindow: public Ui_Mainwindow {};
} // namespace Ui
} // namespace UI

#endif // UI_MAINWINDOW_H
