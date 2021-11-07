#ifndef GEOMETRYDLG_H
#define GEOMETRYDLG_H

#include <QDialog>
#include "ui_geometrydlg.h"

namespace Ui {
class GeometryDlg;
}


class GeometryDlg : public QDialog
{
  Q_OBJECT

public:
  explicit GeometryDlg(QWidget *parent = 0);
  ~GeometryDlg();
  void updateLabel();
protected:
  void moveEvent(QMoveEvent*);
  void resizeEvent(QResizeEvent *);
private:
  Ui::GeometryDlg *ui;
};

#endif // GEOMETRYDLG_H



