//
// Created by jollu on 1/13/22.
//

#ifndef TASK2_HTML_VIEWER_QMAINWINDOW_H
#define TASK2_HTML_VIEWER_QMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

#include <iostream>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget *centerWidgets;
    QGridLayout *gridLayout;
    QWebEngineView *webEngineView;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(982, 758);
        centerWidgets = new QWidget(MainWindow);
        centerWidgets->setObjectName(QString::fromUtf8("centerWidgets"));
        gridLayout = new QGridLayout(centerWidgets);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webEngineView = new QWebEngineView(centerWidgets);
        webEngineView->setObjectName(QString::fromUtf8("webEngineView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(webEngineView->sizePolicy().hasHeightForWidth());
        webEngineView->setSizePolicy(sizePolicy);
        webEngineView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        gridLayout->addWidget(webEngineView, 1, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(centerWidgets);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);

        QFont font;
        font.setPointSize(12);
        plainTextEdit->setFont(font);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centerWidgets);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 982, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        returnsLateUi(MainWindow);
        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    static void returnsLateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    }

    void updater() const {
        webEngineView->setHtml(plainTextEdit->toPlainText());
    }

};

namespace Ui {
    class [[maybe_unused]] MainWindow : public Ui_MainWindow {
    };
}

QT_END_NAMESPACE


#endif //TASK2_HTML_VIEWER_QMAINWINDOW_H
