#include <QApplication>
#include <QGuiApplication>
#include <QRect>
#include <QScreen>
#include <QList>
#include "Headers/mainwindow.h"
#include "Headers/ExitButton.h"
#include "Headers/MaximizeButton.h"
#include "Headers/MinimizeButton.h"

// TODO Main
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    UI::Mainwindow window;

    window.setWindowFlag(Qt::FramelessWindowHint);
    window.setAttribute(Qt::WA_StyledBackground);
    window.setAttribute(Qt::WA_TranslucentBackground);

    QRect windowRect = QGuiApplication::primaryScreen()->geometry();
    windowRect.setLeft(windowRect.width() / 4);
    windowRect.setRight(windowRect.width() / 4 * 3);
    windowRect.setTop(windowRect.height() / 4);
    windowRect.setBottom(windowRect.height() / 4 * 3);

    window.setGeometry(windowRect);

    QList<QPushButton *> buttons;
    QList<std::pair<int, int>> rects;

    Button::ExitButton exitButton(&window);
    Button::MaximizeButton maximizeButton(&window);
    Button::MinimizeButton minimizeButton(&window);

    exitButton.setText("×");
    maximizeButton.setText("□");
    minimizeButton.setText("—");

    QRect newRect = window.geometry();

    newRect.setTop(0);
    newRect.setBottom(windowRect.height() / 10);
    newRect.setLeft(windowRect.width() / 10 * 9);
    newRect.setRight(windowRect.width());

    UI::Mainwindow::putButton(&exitButton, newRect, windowRect, buttons, rects);
    UI::Mainwindow::putButton(&maximizeButton, newRect, windowRect, buttons, rects);
    UI::Mainwindow::putButton(&minimizeButton, newRect, windowRect, buttons, rects);

    maximizeButton.setAssociation(buttons);
    maximizeButton.setRects(rects);
    maximizeButton.linkedExitButton(&exitButton);
    maximizeButton.linkedMiniButton(&minimizeButton);

    window.show();

    return QApplication::exec();
}
