#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow1.h"
#include<QPushButton>
#include<QPixmap>
#include<QIcon>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    MainWindow1 *window1=new MainWindow1();
    ui->setupUi(this);
    this->setWindowTitle("Demo");
    QPixmap pix;
    pix.load(":/2.png");
    this->setWindowIcon(QIcon(pix));
    connect(ui->pushButton,&QPushButton::clicked,[=]()->void
    {
        this->hide();
        window1->show();
    });
    connect(ui->pushButton_2,&QPushButton::clicked,[=]()->void
    {
        this->close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
