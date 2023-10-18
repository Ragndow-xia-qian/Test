#include <QApplication>
#include <QGuiApplication>
#include <QRect>
#include <QScreen>
#include "Headers/mainwindow.h"
#include "Headers/ExitButton.h"
#include "Headers/MaximizeButton.h"

// TODO Main
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    UI::Mainwindow window;

    window.setWindowFlag(Qt::FramelessWindowHint);

    QRect windowRect = QGuiApplication::primaryScreen()->geometry();
    windowRect.setLeft(windowRect.width() / 4);
    windowRect.setRight(windowRect.width() / 4 * 3);
    windowRect.setTop(windowRect.height() / 4);
    windowRect.setBottom(windowRect.height() / 4 * 3);

    window.setGeometry(windowRect);

    QRect newRect = window.geometry();

    Button::ExitButton exitButton(&window);
    Button::MaximizeButton maximizeButton(&window);

    exitButton.setText("X");
    maximizeButton.setText("□");

    newRect.setY(0);
    newRect.setX(newRect.width() / 3 * 2);
    newRect.setBottom(newRect.height() / 3);

    exitButton.setGeometry(newRect);
    exitButton.update();

    newRect.setX(newRect.x() / 2);
    newRect.setRight(newRect.width());

    maximizeButton.setGeometry(newRect);
    maximizeButton.update();

    window.show();

    return QApplication::exec();
}
