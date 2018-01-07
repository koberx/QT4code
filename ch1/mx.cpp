#include "mx.h"
#include<QDebug>

mx::mx(QObject * parent,Ui::MainWindow *ui) :
    QThread(parent)
{
    mw = ui;
}

void mx::run()
{

   while(1) {
    qDebug()<<"Wait press";
    sleep(3);
    emit(mw->login->click());
    qDebug()<<"press up";
  }

}
