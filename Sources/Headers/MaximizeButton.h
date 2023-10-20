//
// Created by 37237 on 2023/10/18.
//

#ifndef GREEDYSNAKE_MAXIMIZEBUTTON_H
#define GREEDYSNAKE_MAXIMIZEBUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QList>

namespace Button {
    // TODO MaximizeButton
    class MaximizeButton: public QPushButton {
    Q_OBJECT
    public:
        explicit MaximizeButton(QWidget *parent);

        void setAssociation(const QList<QPushButton *> &ass);
        void setRects(const QList<std::pair<int, int>> &Rects);

        void linkedExitButton(QPushButton *exitButton) {
            this->exit = exitButton;
            this->exit_init_rect = this->exit->geometry();
            this->me_init_rect = this->geometry();
        }

    private:
        bool event(QEvent *e) override;
        QPushButton *exit{};
        QRect exit_init_rect;
        QRect me_init_rect;
        QList<QPushButton *> ass;
        QList<std::pair<int, int>> rects;
    };

} // Button

#endif //GREEDYSNAKE_MAXIMIZEBUTTON_H
