#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_MainWindow.h"

class MainWindow : public QMainWindow, private Ui::MainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);

protected slots:
  void doSomething();
  void doInventory();
  void prompt();

protected:
  void changeEvent(QEvent *e);
  int stars;
};

#endif // MAINWINDOW_H
