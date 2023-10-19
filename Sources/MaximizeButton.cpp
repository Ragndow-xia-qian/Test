//
// Created by 37237 on 2023/10/18.
//

#include <QEvent>
#include <QMainWindow>
#include "Headers/MaximizeButton.h"

namespace Button {
    MaximizeButton::MaximizeButton(QWidget *parent) : QPushButton(parent) {}

    bool MaximizeButton::event(QEvent *_event) {
        auto *p = reinterpret_cast<QMainWindow *>(this->parent());
        if (_event->type() == QEvent::MouseButtonPress) {
            if (p) {
                if (p->windowState() == Qt::WindowMaximized) {
                    p->setWindowState(Qt::WindowNoState);
                } else if (p->windowState() == Qt::WindowNoState) {
                    p->setWindowState(Qt::WindowMaximized);
                }
            }

            QRect windowRect = p->geometry();
            QRect newRect = p->geometry();

            for (int i = 0; i < this->ass.size(); ++i) {
                auto &it = this->ass[i];
                auto &[w, h] = this->rects[i];
                newRect.setTop(0);
                newRect.setBottom(h);
                if (i == 0) {
                    newRect.setRight(windowRect.right());
                } else {
                    newRect.setRight(newRect.right() - w);
                }
                newRect.setLeft(newRect.right() - w);
                it->setGeometry(newRect);
                it->update();
            }
        }
        if (_event->type() == QEvent::MouseButtonRelease) {

        }

        return QPushButton::event(_event);
    }

    void MaximizeButton::setAssociation(const QList<QPushButton *> &association) {
        this->ass = association;
    }
    void MaximizeButton::setRects(const QList<std::pair<int, int>> &Rects) {
        this->rects = Rects;
    }
} // Button