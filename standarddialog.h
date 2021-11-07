#ifndef STANDARDDIALOG_H
#define STANDARDDIALOG_H

#include <QDialog>
#include "ui_standarddialog.h"
#include "QLineEdit"
#include "QFileDialog"
#include "QColorDialog"
#include "QFontDialog"

namespace Ui {
class StandardDialog;
}

class StandardDialog : public QDialog
{
  Q_OBJECT

public:
  explicit StandardDialog(QWidget *parent = 0);
  ~StandardDialog();

private slots:
  void slotOpenFileDlg();
  void slotOpenColorDlg();
  void on_fontPushButton_clicked();

  void on_fileBt_clicked();

  void on_colorBt_clicked();

  void on_fontBt_clicked();

private:
  Ui::StandardDialog *ui;
};

#endif // STANDARDDIALOG_H
