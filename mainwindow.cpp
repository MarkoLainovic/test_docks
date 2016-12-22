#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts>

void MainWindow::newItem()
{
    ui->listWidget->addItem("5");
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setWindow(QRect(0, 0, 100, 100));
}

void MainWindow::newRandomSquare(int val)
{
    ui->listWidget->addItem("draw rectangle");
    QWidget::update();
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(newItem()));

    /**
     * @brief add chart
     */

    QChart *aChart = new QChart();
    aChart->legend()->show();
    aChart->createDefaultAxes();
    aChart->setTitle("chart example");

    /**
     * @brief add lines
     */

    QLineSeries* series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

    aChart->addSeries(series);
    aChart->setTitle("Simple line chart example");

    ui->chartWidget->setChart(aChart);
    ui->chartWidget->setRenderHint(QPainter::Antialiasing);

    /**
     * @brief draw rectangle
     */

    QObject::connect( ui->tabWidget,
                    SIGNAL(tabBarClicked(int)),
                    this,
                    SLOT(newRandomSquare(int)) );
}

MainWindow::~MainWindow()
{
    delete ui;
}
