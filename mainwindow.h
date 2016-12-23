#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "helper.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public Q_SLOTS:
    void newItem();
    void newRandomSquare(int val);

private:
    Ui::MainWindow *ui;
    Helper helper;
    bool drawSquare;

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
