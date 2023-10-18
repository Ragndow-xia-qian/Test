//
// Created by 37237 on 2023/10/18.
//

#include <QEvent>
#include <QMainWindow>
#include "Headers/MaximizeButton.h"

namespace Button {
    bool MaximizeButton::event(QEvent *_event) {
        if (_event->type() == QEvent::MouseButtonPress) {
            auto *p = reinterpret_cast<QMainWindow *>(this->parent());
            if (p) {
                if (p->windowState() == Qt::WindowMaximized) {
                    p->setWindowState(Qt::WindowNoState);
                } else if (p->windowState() == Qt::WindowNoState) {
                    p->setWindowState(Qt::WindowMaximized);
                }
            }
        }
        if (_event->type() == QEvent::MouseButtonRelease) {

        }
        return QPushButton::event(_event);
    }
} // Button