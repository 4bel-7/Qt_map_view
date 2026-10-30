#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QDebug>
#include <qgsproject.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    this->showMaximized();
    //this->resize(1000,700);

    m_canvas =new QgsMapCanvas(this);
    m_canvas->setCanvasColor(Qt::white);
    m_canvas->enableAntiAliasing(true);
    // ⚡ Bolt: Enable parallel rendering to improve performance by utilizing multiple CPU cores for drawing layers
    m_canvas->setParallelRenderingEnabled(true);

    QVBoxLayout *layout = new QVBoxLayout(ui->centralwidget);
    layout->setContentsMargins(0,0,0,0);
    layout->addWidget(m_canvas);

    QString rasterPath ="C:/QGIS/msys64_QtQGisAll/worldTiff/world.tif";
    m_rasterLayer =new QgsRasterLayer(rasterPath, "World Map","gdal");

    if(!m_rasterLayer->isValid())
    {
        qCritical()<<"Failed to load raster map!Check your file path.";
        return;
    }
    QgsProject::instance()->addMapLayer(m_rasterLayer);
    m_canvas->setDestinationCrs(m_rasterLayer->crs());
    m_canvas->setExtent(m_rasterLayer->extent());
    m_canvas->setLayers({ m_rasterLayer });
    m_canvas->refresh();

}

MainWindow::~MainWindow()
{
    delete ui;
}
