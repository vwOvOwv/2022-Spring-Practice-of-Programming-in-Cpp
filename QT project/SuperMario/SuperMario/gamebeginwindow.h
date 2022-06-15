//////////游戏开始界面//////////
#ifndef GAMEBEGINWINDOW_H
#define GAMEBEGINWINDOW_H

#include <QMainWindow>
#include<QEvent>
#include<mainscene.h>
//////////游戏的初始界面//////////
#include<aboutscene.h>
#include<mybutton.h>
#include<QPainter>
#include<QDebug>
#include<QMessageBox>//标准对话框
#include<QTimer>
namespace Ui {
class gameBeginWindow;
}

class gameBeginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameBeginWindow(QWidget *parent = 0);
    ~gameBeginWindow();
    //重写PaintEvent事件
    void paintEvent(QPaintEvent* ev);

private:
    Ui::gameBeginWindow *ui;
    AboutScene aboutScene;
    MainScene mainScene;
};

#endif // GAMEBEGINWINDOW_H
