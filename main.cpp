#include <QtGui/QApplication>
#include "labchooser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LabChooser w;
    w.show();
    
    return a.exec();
}
