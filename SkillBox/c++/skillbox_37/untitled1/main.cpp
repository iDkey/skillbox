#include <QApplication>
#include <QtGui/QtGui>
#include <iostream>


#include <QObject>

class MyClass : public QObject {
//Q_OBJECT
    int myAge;
public:
    Q_PROPERTY(int age, READ age setAge NOTYFY ageChanged);

    void setAge(int nAge) {
        myAge = nAge;
    }

    int age() {
        return myAge;
    }

signals:
    void ageChanged(int);
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyClass hero;
    hero.setProperty("Height", 180);

    std::cout << "Height: " << hero.property("Height").toUInt() << std::endl;

    return QApplication::exec();
}
