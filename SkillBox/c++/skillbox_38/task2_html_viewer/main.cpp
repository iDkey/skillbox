#include <iostream>
#include "QMainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;
    Ui_MainWindow webWindow;
    webWindow.setupUi(&window);

    QObject::connect(webWindow.plainTextEdit, &QPlainTextEdit::textChanged, [&webWindow](){ webWindow.updater();});

    window.show();

    return app.exec();
}
