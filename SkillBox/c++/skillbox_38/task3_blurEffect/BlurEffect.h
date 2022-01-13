//
// Created by jollu on 1/13/22.
//

#ifndef TASK3_BLUREFFECT_BLUREFFECT_H
#define TASK3_BLUREFFECT_BLUREFFECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centerWidgets;
    QGridLayout *gridLayout;
    [[maybe_unused]] QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonOpen;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    [[maybe_unused]] void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(603, 466);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centerWidgets = new QWidget(MainWindow);
        centerWidgets->setObjectName(QString::fromUtf8("centerWidgets"));
        gridLayout = new QGridLayout(centerWidgets);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centerWidgets);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMidLineWidth(0);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSlider = new QSlider(centerWidgets);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(10);
        horizontalSlider->setValue(8);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonOpen = new QPushButton(centerWidgets);
        buttonOpen->setObjectName(QString::fromUtf8("buttonOpen"));

        horizontalLayout_2->addWidget(buttonOpen);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centerWidgets);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 682, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        returnUI(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void returnUI(QMainWindow *MainWindow) const
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        buttonOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
    }

};

namespace Ui {
    class [[maybe_unused]] MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE



#endif //TASK3_BLUREFFECT_BLUREFFECT_H
