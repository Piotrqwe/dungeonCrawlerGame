#include "mainwindow.h"
#include <QApplication>
#include "Game.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // w.setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
    w.show();
    Room room(3,4);

    return a.exec();
}
