//
// Created by 37237 on 2023/10/15.
//

#include <QEvent>
#include <QMouseEvent>
#include <QMainWindow>
#include "Headers/ExitButton.h"

namespace Button {
    bool ExitButton::event(QEvent *_event) {
        if (_event->type() == QEvent::MouseButtonPress) {
        }
        if (_event->type() == QEvent::Paint) {
            this->setStyleSheet(
                    "QPushButton{background: qlineargradient(x1:0, y1:0, x2:1, y2:0,stop:0 #2C628C,stop:1 #3F8F92)}");
        }
        if (_event->type() == QEvent::MouseButtonRelease) {
            auto p = this->parent();
            if (p) {
                reinterpret_cast<QMainWindow *>(p)->close();
            }
        }
        return QPushButton::event(_event);
    }
} // Button