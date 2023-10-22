//
// Created by 37237 on 2023/10/22.
//

#include "Headers/MinimizeButton.h"

#include <QEvent>
#include <QMouseEvent>
#include <QMainWIndow>
#include <QDebug>

namespace Button {
    bool MinimizeButton::event(QEvent *_event) {
        auto p = reinterpret_cast<QMainWindow *>(this->parent());
        if (_event->type() == QEvent::MouseButtonPress) {

        }
        if (_event->type() == QEvent::Paint) {
            this->setStyleSheet(
                    "QPushButton{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop:0 #497BF0,stop:1 #1FB6F6)}");
        }
        if (_event->type() == QEvent::MouseButtonRelease) {
            if (p) {
                this->lastState = p->windowState();
                p->setWindowState(Qt::WindowMinimized);
            }
        }
        if (_event->type() == QEvent::Show) {
            p->setWindowState(this->lastState);
        }
        return QPushButton::event(_event);
    }
} // Button