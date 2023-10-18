//
// Created by 37237 on 2023/10/15.
//

#ifndef GREEDYSNAKE_EXITBUTTON_H
#define GREEDYSNAKE_EXITBUTTON_H

#include <QPushButton>
#include <QEvent>

namespace Button {
    // TODO ExitButton
    class ExitButton : public QPushButton {
    Q_OBJECT

    public:
        using QPushButton::QPushButton;

    private:
        bool event(QEvent *_event) override;
    };

} // Button

#endif //GREEDYSNAKE_EXITBUTTON_H
