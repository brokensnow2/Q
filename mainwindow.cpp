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
    //图标
    this->setWindowTitle("Demo");
    QPixmap pix;
    pix.load(":/2.png");
    this->setWindowIcon(QIcon(pix));
    //登录界面,跳转另一窗口和关闭当前窗口
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
