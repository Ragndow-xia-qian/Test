//
// Created by 37237 on 2023/10/18.
//

#ifndef GREEDYSNAKE_MAXIMIZEBUTTON_H
#define GREEDYSNAKE_MAXIMIZEBUTTON_H

#include <QPushButton>

namespace Button {
    // TODO MaximizeButton
    class MaximizeButton: public QPushButton {
    Q_OBJECT
    public:
        using QPushButton::QPushButton;

    private:
        bool event(QEvent *e) override;
    };

} // Button

#endif //GREEDYSNAKE_MAXIMIZEBUTTON_H
