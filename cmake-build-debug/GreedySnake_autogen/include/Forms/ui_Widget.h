/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

namespace Ui {

class Ui_Widget
{
public:

    void setupUi(QWidget *Ui__Widget)
    {
        if (Ui__Widget->objectName().isEmpty())
            Ui__Widget->setObjectName(QString::fromUtf8("Ui__Widget"));
        Ui__Widget->resize(400, 300);

        retranslateUi(Ui__Widget);

        QMetaObject::connectSlotsByName(Ui__Widget);
    } // setupUi

    void retranslateUi(QWidget *Ui__Widget)
    {
        Ui__Widget->setWindowTitle(QCoreApplication::translate("Ui::Widget", "Widget", nullptr));
    } // retranslateUi

};

} // namespace Ui

namespace Ui {
namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui
} // namespace Ui

#endif // UI_WIDGET_H
