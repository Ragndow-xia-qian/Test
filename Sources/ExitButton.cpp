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
            auto p = this->parent();
            if (p) {
                reinterpret_cast<QMainWindow *>(p)->close();
            }
        }
        if (_event->type() == QEvent::MouseButtonRelease) {

        }
        return QPushButton::event(_event);
    }
} // Button