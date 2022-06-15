////////////游戏主界面////////////
#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include<aboutscene.h>
#include<mybutton.h>
#include<QPainter>
#include<QDebug>
#include<QMessageBox>//标准对话框
#include <QWidget>
#include<QString>
#include<QTimer>
#include<QKeyEvent>
#include<QDialog>
namespace Ui {
class MainScene;
}

class MainScene : public QWidget
{
    Q_OBJECT

public:
    explicit MainScene(QWidget *parent = 0);
    ~MainScene();
    //重写绘图事件
    void paintEvent(QPaintEvent* ev);
private:
    Ui::MainScene *ui;
signals:
    void back();//返回上一页
};

#endif // MAINSCENE_H
