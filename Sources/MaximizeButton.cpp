//
// Created by 37237 on 2023/10/18.
//

#include <QEvent>
#include <QMainWindow>
#include <QGuiApplication>
#include <QScreen>
#include "Headers/MaximizeButton.h"

namespace Button {
    MaximizeButton::MaximizeButton(QWidget *parent) : QPushButton(parent) {}

    bool MaximizeButton::event(QEvent *_event) {
        auto *p = reinterpret_cast<QMainWindow *>(this->parent());
        if (_event->type() == QEvent::MouseButtonPress) {
            if (p) {
                if (p->windowState() == Qt::WindowMaximized) {
                    p->setWindowState(Qt::WindowNoState);
                    exit->setGeometry(this->exit_init_rect);
                    mini->setGeometry(this->mini_init_rect);
                    this->setGeometry(this->me_init_rect);
                } else if (p->windowState() == Qt::WindowNoState) {
                    p->setWindowState(Qt::WindowMaximized);

                    QRect newRect = p->geometry();

                    newRect.setRight(QGuiApplication::primaryScreen()->geometry().right() + rects.at(0).first);

                    for (int i = 0; i < this->ass.size(); ++i) {
                        auto &it = this->ass.at(i);
                        auto &[w, h] = this->rects.at(i);
                        newRect.setTop(0);
                        newRect.setBottom(h);
                        newRect.setRight(newRect.right() - w);
                        newRect.setLeft(newRect.right() - w);
                        it->setGeometry(newRect);
                        it->update();
                    }
                }
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