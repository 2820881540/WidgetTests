#include "qpicmsgbox.h"

#include "qpicmsgbox.h"
#include <QString>
#include <QPainter>
QPicMsgBox::QPicMsgBox(QWidget *parent) :
QMessageBox(parent)
{
    QString fileName = tr(":/new/prefix1/custom.png");
    pImage = new QImage(fileName);
}
void QPicMsgBox::paintEvent(QPaintEvent *paintevent)
{
    QPainter painter(this);
    painter.drawImage(0, 0, pImage->scaled(this->size()));
    QMessageBox::paintEvent(paintevent);
}
/////////////////////////////////////
