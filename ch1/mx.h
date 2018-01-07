#ifndef MX_H
#define MX_H
#include<QThread>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class mx :public QThread
{

public:
    mx(QObject *parent,Ui::MainWindow *ui);
protected:
    void  run();
    Ui::MainWindow *mw;

};
#endif // MX_H
