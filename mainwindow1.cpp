#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include<QWidget>
#include<QSlider>//滑动条
#include<QProgressBar>//进度条
#include<QTextEdit>
#include<QLabel>//控件
#include<QMenuBar>//菜单栏
#include<QMenu>//菜单
MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
    QPixmap pix;
    pix.load(":/2.png");
    this->setWindowIcon(QIcon(pix));
    QMenuBar *bar=new QMenuBar(this);
    QMenu *menu=new QMenu(this);
    this->setMenuBar(bar);
    bar->addMenu(menu);
    menu->addMenu("add");
    QLabel* laber=new QLabel(this);
    laber->setText("....");
    laber->setFont(QFont("宋体",20,10,1));
    QSlider *slider=new QSlider(this);
   // slider->move("");

}

MainWindow1::~MainWindow1()
{
    delete ui;
}
