#include <iostream>
#include "./ui_tv_controller.h"
#include "TvControllerWindow.h"
#include <QTimer>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    TvControllerWindow window(nullptr);
    Ui::MainWindow tvController;
    tvController.setupUi(&window);
    window.set_pLine(tvController.lineEdit);
    window.setWindowTitle("SAMSUNG");
    window.show();
    QObject::connect(window.timer, &QTimer::timeout, [&](){window.timer_slot();});
    return app.exec();
}
