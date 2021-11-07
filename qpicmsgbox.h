#ifndef QPICMSGBOX_H
#define QPICMSGBOX_H

#include <QMessageBox>
#include <QImage>
class QPicMsgBox : public QMessageBox
{
Q_OBJECT
public:
    explicit QPicMsgBox(QWidget *parent = 0);
    QImage *pImage;
protected:
    virtual void paintEvent(QPaintEvent *paintevent);
signals:
    public slots:
};
#endif // QPICMSGBOX_H
///////////////////////////////////////////////
