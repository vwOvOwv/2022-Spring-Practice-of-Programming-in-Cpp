#include "mainscene.h"
#include "ui_mainscene.h"

MainScene::MainScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainScene)
{
    ui->setupUi(this);
    this->setFixedSize(1000,500);
    this->setWindowTitle("SuperMario");
    //实现返回按钮
    MyButton*backBtn=new MyButton(":/Image/backBtn.png");
    backBtn->setParent(this);
    backBtn->move(0.945*this->width(),0.89*this->height());
    connect(backBtn,&MyButton::clicked,[=](){
        backBtn->ZoomUp();
        backBtn->ZoomDown();
        //先实现按钮弹跳特效，而后等待0.5s后发送back()信号
        QTimer::singleShot(500,this,[=](){
            emit back();
        });
    });
    //实现暂停按钮
    MyButton*pauseBtn=new MyButton(":/Image/pauseBtn.png");
    pauseBtn->setParent(this);
    pauseBtn->move(0.945*this->width()-50,0.89*this->height());
    connect(pauseBtn,&MyButton::clicked,[=](){
        pauseBtn->ZoomUp();
        pauseBtn->ZoomDown();
        QTimer::singleShot(500,this,[=](){

        });
    });
    //实现继续游戏按钮
    MyButton*continueBtn=new MyButton(":/Image/continueBtn.png");
    continueBtn->setParent(this);
    continueBtn->move(0.945*this->width()-103,0.89*this->height());
    connect(continueBtn,&MyButton::clicked,[=](){
        continueBtn->ZoomUp();
        continueBtn->ZoomDown();
        QTimer::singleShot(500,this,[=](){

        });
    });
    //实现音乐设置按钮
    MyButton*musicBtn=new MyButton(":/Image/musicBtn.png");
    musicBtn->setParent(this);
    musicBtn->move(0.945*this->width()-153,0.89*this->height());
    connect(musicBtn,&MyButton::clicked,[=](){
        musicBtn->ZoomUp();
        musicBtn->ZoomDown();
        QTimer::singleShot(500,this,[=](){

        });
    });
}
//重写paintEvent事件
void MainScene::paintEvent(QPaintEvent *ev)
{
    //创建画家，指定绘图设备
    QPainter painter(this);
    //创建背景图并绘制之
    QPixmap pix(":/Image/background.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

}
MainScene::~MainScene()
{
    delete ui;
}
