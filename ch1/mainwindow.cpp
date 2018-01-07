#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace info{
struct infoHandle {
    mx *mx1;
}handle;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->login,SIGNAL(clicked()),this,SLOT(close()));
    info::handle.mx1 = new mx(0,ui);
    info::handle.mx1->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
