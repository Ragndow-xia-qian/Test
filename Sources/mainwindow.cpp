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

    void Mainwindow::paintEvent(QPaintEvent *event) {
        QLinearGradient gradient(0, 0, this->width(), this->height());
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

    void Mainwindow::mousePressEvent(QMouseEvent *event) {
        this->windowPos = this->pos();
        this->mousePos = event->globalPos();
        this->dPos = mousePos - windowPos;
        QWidget::mousePressEvent(event);
    }

    void Mainwindow::mouseMoveEvent(QMouseEvent *event) {
        if (this->windowState() == Qt::WindowMaximized) {
            return;
        }
        this->move(event->globalPos() - this->dPos);
        QWidget::mouseMoveEvent(event);
    }
} // UI
