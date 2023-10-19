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

    private:
        bool event(QEvent *e) override;
        QList<QPushButton *> ass;
        QList<std::pair<int, int>> rects;
    };

} // Button

#endif //GREEDYSNAKE_MAXIMIZEBUTTON_H
