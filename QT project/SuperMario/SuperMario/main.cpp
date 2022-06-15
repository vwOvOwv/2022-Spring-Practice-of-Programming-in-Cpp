#include "gamebeginwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/Image/icon"));
    gameBeginWindow w;
    w.show();

    return a.exec();
}
