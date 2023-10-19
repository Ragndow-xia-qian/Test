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

    newRect.setTop(0);
    newRect.setBottom(windowRect.height() / 3);
    newRect.setLeft(windowRect.width() / 3 * 2);
    newRect.setRight(windowRect.width());

    exitButton.setGeometry(newRect);
    exitButton.update();

    newRect.setLeft(windowRect.width() / 3);
    newRect.setRight(windowRect.width() / 3 * 2);

    maximizeButton.setGeometry(newRect);
    maximizeButton.update();

    window.show();

    return QApplication::exec();
}
