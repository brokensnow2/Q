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
    //改变窗口图标
    QPixmap pix;
    pix.load(":/2.png");
    this->setWindowIcon(QIcon(pix));
    //添加菜单和菜单项
    QMenuBar *bar=new QMenuBar(this);
    QMenu *menu=new QMenu("file",this);
    this->setMenuBar(bar);
    bar->addMenu(menu);
    menu->addMenu("add");
    //添加文本编辑控件
    QLabel* laber=new QLabel(this);
    this->setCentralWidget(laber);//设为中心控件
    laber->setText("....");
    laber->setFont(QFont("宋体",20,10,1));
    //添加滑动条
    QSlider *slider=new QSlider(this);
    slider->move(600,300);
    slider->setValue(0);
    connect(slider,&QSlider::valueChanged,[laber](int _value)//小括号中要接信号返回的类型值
    {
        laber->setFont(QFont("宋体",_value,10,1));
    });
    //进度条略。。。。。。
}

MainWindow1::~MainWindow1()
{
    delete ui;
}
