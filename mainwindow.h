/*******************************************************************
文    件:              mainwindow.h
功    能:              实现主窗口聊天的类的声明
函数列表:
日    期:              2011-09-10
********************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool initGroup();                       /*初始化好友分组*/
};

#endif // MAINWINDOW_H
