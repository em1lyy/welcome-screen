#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (!(QFile::exists(QDir::homePath() + "/.config/autostart/calamares.desktop"))) {
        MainWindow w;
        w.show();
        return a.quit();
    } else {
        return a.exec();
    }
}
