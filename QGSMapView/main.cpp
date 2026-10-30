#include "mainwindow.h"

#include <qgsapplication.h>

int main(int argc, char *argv[])

{
    QgsApplication a(argc ,argv, true);
    QgsApplication::setPrefixPath(QStringLiteral("C:/QGIS/mysys64_QtQGisAll/mingw64"), true);
    QgsApplication::initQgis();

    MainWindow w;
    w.show();

    int exitCode=QgsApplication::exec();
    QgsApplication::exitQgis();
    return exitCode;
}