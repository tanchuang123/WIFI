#include "WifiHotspotForm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WifiHotspotForm w;
    w.show();

    return a.exec();
}
