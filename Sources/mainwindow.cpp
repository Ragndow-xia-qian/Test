//
// Created by 37237 on 2023/10/15.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Mainwindow.h" resolved

#include "Headers/mainwindow.h"
#include "Forms/ui_Mainwindow.h"

namespace UI {
    Mainwindow::Mainwindow(QWidget *parent) :
            QMainWindow(parent), ui(new Ui::Mainwindow) {
        ui->setupUi(this);
    }

    Mainwindow::~Mainwindow() {
        delete ui;
    }
} // UI
