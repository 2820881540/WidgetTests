#ifndef MBOXDIALOG_H
#define MBOXDIALOG_H

#include <QDialog>
#include "ui_mboxdialog.h"
#include "QMessageBox"
#include "qpicmsgbox.h"

namespace Ui {
class MBoxDialog;
}

class MBoxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MBoxDialog(QWidget *parent = nullptr);
    ~MBoxDialog();

private slots:

    void on_QuestionBt_clicked();

    void on_WarningBt_clicked();

    void on_InformationBt_clicked();

    void on_CriticalBt_clicked();

    void on_AboutBt_clicked();

    void on_AboutQTBt_clicked();

    void on_CustomBt_clicked();

private:
    Ui::MBoxDialog *ui;
};

#endif // MBOXDIALOG_H
