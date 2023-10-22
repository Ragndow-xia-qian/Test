//
// Created by 37237 on 2023/10/15.
//

#ifndef GREEDYSNAKE_MAINWINDOW_H
#define GREEDYSNAKE_MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QDesktopWidget>
#include <QPaintEvent>
#include <QPoint>

namespace UI {
    QT_BEGIN_NAMESPACE
    namespace Ui { class Mainwindow; }
    QT_END_NAMESPACE

    // TODO Mainwindow
    class Mainwindow : public QMainWindow {
    Q_OBJECT

    public:
        explicit Mainwindow(QWidget *parent = nullptr);

        ~Mainwindow() override;

    private:
        void paintEvent(QPaintEvent *event) override;

        void mousePressEvent(QMouseEvent *event) override;
        void mouseMoveEvent(QMouseEvent *event) override;

        Ui::Mainwindow *ui;

        QPoint windowPos;
        QPoint mousePos;
        QPoint dPos;
    };
} // UI

#endif //GREEDYSNAKE_MAINWINDOW_H
