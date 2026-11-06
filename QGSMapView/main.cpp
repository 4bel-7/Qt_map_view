#include "mainwindow.h"

#include <qgsapplication.h>

int main(int argc, char *argv[])

{
    QgsApplication a(argc ,argv, true);
    // Optimization: Use QStringLiteral for C-strings to prevent runtime memory allocation
    QgsApplication::setPrefixPath(QStringLiteral("C:/QGIS/mysys64_QtQGisAll/mingw64"),true);
    QgsApplication::initQgis();

    MainWindow w;
    w.show();

    int exitCode=QgsApplication::exec();
    QgsApplication::exitQgis();
    return exitCode;
}