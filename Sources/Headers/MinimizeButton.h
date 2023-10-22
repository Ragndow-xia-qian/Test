//
// Created by 37237 on 2023/10/22.
//

#ifndef GREEDYSNAKE_MINIMIZEBUTTON_H
#define GREEDYSNAKE_MINIMIZEBUTTON_H

#include <QPushButton>
#include <QWindow>

namespace Button {

    class MinimizeButton: public QPushButton {
    Q_OBJECT

    public:
        using QPushButton::QPushButton;

    private:
        bool event(QEvent *_event) override;
        QFlags<Qt::WindowState> lastState = Qt::WindowNoState;
    };

} // Button

#endif //GREEDYSNAKE_MINIMIZEBUTTON_H
