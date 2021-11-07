#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    GeometryDlg * cd = new GeometryDlg(this);
    cd->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    MBoxDialog * cd = new MBoxDialog(this);
    cd->show();
}

void MainWindow::on_pushButton_clicked()
{
    StandardDialog * sd = new StandardDialog(this);
    sd->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    Drawer *drawer = new Drawer();
    drawer->resize(120,360);
    drawer->show();
}
