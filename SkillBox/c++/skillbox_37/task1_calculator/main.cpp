#include <QtWidgets>
#include "./ui_calcUI.h"
#include "./calc_mainWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Calc_mainWindow window(nullptr);
    Ui::MainWindow caller;
    caller.setupUi(&window);
    window.lineEdit = caller.lineEdit;
    window.resize(480, 640);
    window.show();
    return QApplication::exec();
}
