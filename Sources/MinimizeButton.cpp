//
// Created by 37237 on 2023/10/22.
//

#include "Headers/MinimizeButton.h"

#include <QEvent>
#include <QMouseEvent>
#include <QMainWIndow>

namespace Button {
    bool MinimizeButton::event(QEvent *_event) {
        if (_event->type() == QEvent::MouseButtonPress) {
            auto p = this->parent();
            if (p) {
                reinterpret_cast<QMainWindow *>(p)->setWindowState(Qt::WindowMinimized);
            }
        }
        if (_event->type() == QEvent::MouseButtonRelease) {

        }
        return QPushButton::event(_event);
    }
} // Button