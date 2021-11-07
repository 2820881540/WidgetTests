#ifndef DRAWER_H
#define DRAWER_H

#include "QtGui"
#include "QToolBox"
#include "QToolButton"
#include "QGroupBox"
#include "QVBoxLayout"

class Drawer : public QToolBox
{
    Q_OBJECT
public:
    Drawer(QWidget* parent=0, Qt::WindowFlags f=0);
    ~Drawer();

    QToolButton *toolButton1_1;//定义各个抽屉里的按键(图像)
    QToolButton *toolButton1_2;
    QToolButton *toolButton1_3;
    QToolButton *toolButton1_4;
    QToolButton *toolButton1_5;
    QToolButton *toolButton2_1;
    QToolButton *toolButton2_2;
    QToolButton *toolButton3_1;
    QToolButton *toolButton3_2;

};

#endif // DRAWER_H

