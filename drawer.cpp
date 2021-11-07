#include "drawer.h"


Drawer::Drawer(QWidget * parent, Qt::WindowFlags f)
    :QToolBox(parent, f)
{
    setWindowTitle(tr("My QQ"));
    QGroupBox *groupBox1 = new QGroupBox();

    toolButton1_1 = new QToolButton();//定义各个按键属性
    toolButton1_1->setText(tr("beibei"));
    toolButton1_1->setIcon(QPixmap(":/new/prefix1/bb.png"));
    toolButton1_1->setIconSize(QPixmap(":/new/prefix1/bb.png").size());
    toolButton1_1->setAutoRaise(TRUE);
    toolButton1_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_2 = new QToolButton();//定义各个按键属性
    toolButton1_2->setText(tr("jingjing"));
    toolButton1_2->setIcon(QPixmap(":/new/prefix1/jj.png"));
    toolButton1_2->setIconSize(QPixmap(":/new/prefix1/jj.png").size());
    toolButton1_2->setAutoRaise(TRUE);
    toolButton1_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_3 = new QToolButton();//定义各个按键属性
    toolButton1_3->setText(tr("huanhuan"));
    toolButton1_3->setIcon(QPixmap(":/new/prefix1/hh.png"));
    toolButton1_3->setIconSize(QPixmap(":/new/prefix1/hh.png").size());
    toolButton1_3->setAutoRaise(TRUE);
    toolButton1_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_4 = new QToolButton();//定义各个按键属性
    toolButton1_4->setText(tr("yingying"));
    toolButton1_4->setIcon(QPixmap(":/new/prefix1/yy.png"));
    toolButton1_4->setIconSize(QPixmap(":/new/prefix1/yy.png").size());
    toolButton1_4->setAutoRaise(TRUE);
    toolButton1_4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton1_5 = new QToolButton();//定义各个按键属性
    toolButton1_5->setText(tr("nini"));
    toolButton1_5->setIcon(QPixmap(":/new/prefix1/nn.png"));
    toolButton1_5->setIconSize(QPixmap(":/new/prefix1/nn.png").size());
    toolButton1_5->setAutoRaise(TRUE);
    toolButton1_5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    //以下设置第一组中按键排列方式垂直对齐排列
    QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
    layout1->setMargin(10);
    layout1->setAlignment(Qt::AlignHCenter);

    layout1->addWidget(toolButton1_1);
    layout1->addWidget(toolButton1_2);
    layout1->addWidget(toolButton1_3);
    layout1->addWidget(toolButton1_4);
    layout1->addWidget(toolButton1_5);

    layout1->addStretch();

    //以下设置第二组中按键排列方式垂直对齐排列
    QGroupBox *groupBox2 = new QGroupBox();
    toolButton2_1 = new QToolButton();
    toolButton2_1->setText(tr("pizicai"));
    toolButton2_1->setIcon(QPixmap(":/new/prefix1/pizicai.jpg"));
    toolButton2_1->setIconSize(QPixmap(":/new/prefix1/pizicai.jpg").size());
    toolButton2_1->setAutoRaise(TRUE);
    toolButton2_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton2_2 = new QToolButton();
    toolButton2_2->setText(tr("feiyang"));
    toolButton2_2->setIcon(QPixmap(":/new/prefix1/feiyang.jpg"));
    toolButton2_2->setIconSize(QPixmap(":/new/prefix1/feiyang.jpg").size());
    toolButton2_2->setAutoRaise(TRUE);
    toolButton2_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolButton2_1);
    layout2->addWidget(toolButton2_2);
    layout2->addStretch();

    //以下设置第三组中按键排列方式垂直对齐排列
    QGroupBox *groupBox3 = new QGroupBox();
    toolButton3_1 = new QToolButton();
    toolButton3_1->setText(tr("QQ"));
    toolButton3_1->setIcon(QPixmap(":/new/prefix1/QQ.jpg"));
    toolButton3_1->setIconSize(QPixmap(":/new/prefix1/QQ.jpg").size());
    toolButton3_1->setAutoRaise(TRUE);
    toolButton3_1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    toolButton3_2 = new QToolButton();
    toolButton3_2->setText(tr("angel"));
    toolButton3_2->setIcon(QPixmap(":/new/prefix1/angel.jpg"));
    toolButton3_2->setIconSize(QPixmap(":/new/prefix1/angel.jpg").size());
    toolButton3_2->setAutoRaise(TRUE);
    toolButton3_2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout3 = new QVBoxLayout(groupBox3);
    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolButton3_1);
    layout3->addWidget(toolButton3_2);
    layout3->addStretch();

    ///////////////////////////
    //增加各个Group Box到窗口中
    this->addItem((QWidget*)groupBox1, tr("my friends"));
    this->addItem((QWidget*)groupBox2, tr("stranger"));
    this->addItem((QWidget*)groupBox3, tr("blacklist"));

}

Drawer::~Drawer()
{

}
