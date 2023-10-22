//
// Created by 37237 on 2023/10/15.
//

#include <QEvent>
#include <QMouseEvent>
#include <QMainWindow>
#include <QMessageBox>
#include "Headers/ExitButton.h"

namespace Button {
    bool ExitButton::event(QEvent *_event) {
        if (_event->type() == QEvent::MouseButtonPress) {
        }
        if (_event->type() == QEvent::Paint) {
            this->setStyleSheet(
                    "QPushButton{border: node; background: qlineargradient("
                    "x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #2C628C, stop: 1 #3F8F92)}");
        }
        if (_event->type() == QEvent::MouseButtonRelease) {
            auto p = reinterpret_cast<QMainWindow *>(this->parent());
            if (p && QMessageBox::question(p, "询问", "你确定要退出吗", QMessageBox::Yes | QMessageBox::No) == QMessageBox::Yes) {
                p->close();
            }
        }
        return QPushButton::event(_event);
    }
} // Button