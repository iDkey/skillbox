#include "BlurEffect.h"
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include "QGraphicsBlurEffect"
#include <QFileDialog>


QImage blurImage(const QImage& source, int blur_radius){
    if (source.isNull()) return {};
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(QPixmap::fromImage(source));
    auto *blur = new QGraphicsBlurEffect;
    blur->setBlurRadius(blur_radius);
    item.setGraphicsEffect(blur);
    scene.addItem(&item);
    QImage result(source.size(), QImage::Format_ARGB32);
    result.fill(Qt::transparent);
    QPainter painter(&result);
    scene.render(&painter, QRectF(), QRectF(0, 0, source.width(), source.height()));
    return result;
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;
    Ui_MainWindow blurWindow{};
    blurWindow.setupUi(&window);
    QImage sourceImage;
    QObject::connect(blurWindow.buttonOpen, &QPushButton::clicked, [&sourceImage, &blurWindow](){
        QString filepath = QFileDialog::getOpenFileName(nullptr, "open jpg", "", "jpg (*.jpg)");
        QImage temp(filepath);
        sourceImage = temp;
        blurWindow.label->setPixmap(QPixmap::fromImage(blurImage(sourceImage,
                                                                 blurWindow.horizontalSlider->value()).scaled(
                blurWindow.label->width(),
                blurWindow.label->height(), Qt::KeepAspectRatio)));
    });
    QObject::connect(blurWindow.horizontalSlider, &QSlider::valueChanged, [&blurWindow, &sourceImage](int newValue){
        blurWindow.label->setPixmap(QPixmap::fromImage(blurImage(sourceImage, newValue).scaled(
                blurWindow.label->width(),
                blurWindow.label->height(), Qt::KeepAspectRatio)));
    });


    window.show();

    return QApplication::exec();
}
