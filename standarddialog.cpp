#include "standarddialog.h"


StandardDialog::StandardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StandardDialog)
{
    ui->setupUi(this);
}

StandardDialog::~StandardDialog()
{
    delete ui;
}

void StandardDialog::slotOpenFileDlg()
{
    QString s=QFileDialog::getOpenFileName(this,"open file dialog", "/","C++files(*.cpp);;C files(*.c);;Head files(*.h)");
    ui->fileLineEdit->setText(s.toUtf8());

}


void StandardDialog::slotOpenColorDlg()
{
    ui->colorFrame->setStyleSheet("background-color:rgb(0,170,255)");

    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid())
    {
        ui->colorLb->setPalette(QPalette(color));
    }

}



void StandardDialog::on_fontPushButton_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
    {
        ui->fontLineEdit->setFont(font);
    }
}
//--------------------------------------------------------

void StandardDialog::on_fileBt_clicked()
{
    slotOpenFileDlg();
}

void StandardDialog::on_colorBt_clicked()
{
    slotOpenColorDlg();
}

void StandardDialog::on_fontBt_clicked()
{
    on_fontPushButton_clicked();
}
