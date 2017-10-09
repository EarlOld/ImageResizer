#include "imageresizer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageResizer w;
    w.show();

    return a.exec();
}
