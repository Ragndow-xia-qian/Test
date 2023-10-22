//
// Created by 37237 on 2023/10/15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Mainwindow.h" resolved

#include <QPainter>
#include <QPaintEvent>
#include "Headers/mainwindow.h"
#include "Forms/ui_Mainwindow.h"

namespace UI {
    Mainwindow::Mainwindow(QWidget *parent) :
            QMainWindow(parent), ui(new Ui::Mainwindow) {
        ui->setupUi(this);
    }

    void Mainwindow::paintEvent(QPaintEvent *event) {QLinearGradient gradient(0, 0, width(), height());
        gradient.setColorAt(0, Qt::red);
        gradient.setColorAt(1, Qt::darkRed);
        QPainter painter(this);
        painter.setBrush(gradient);
        painter.drawRect(rect());
        QMainWindow::paintEvent(event);
    }

    Mainwindow::~Mainwindow() {
        delete ui;
    }
} // UI
