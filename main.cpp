#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    /**
//     * @brief add chart
//     */

//    QLineSeries* series = new QLineSeries();
//    QChart *chart = new QChart();
//    chart->legend()->hide();
//    chart->createDefaultAxes();
//    chart->setTitle("chart example");

//    /**
//     * @brief add lines
//     */

//    series->append(0, 6);
//    series->append(2, 4);
//    series->append(3, 8);
//    series->append(7, 4);
//    series->append(10, 5);
//    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

//    chart->addSeries(series);
//    chart->setTitle("Simple line chart example");

//    QChartView *chartView = new QChartView(chart);
//    chartView->setRenderHint(QPainter::Antialiasing);
//    w.setCentralWidget(chartView);

    w.show();
    return a.exec();
}
