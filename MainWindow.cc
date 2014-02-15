#include "MainWindow.h"

#include <QTextEdit>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), stars(0)
{
  setupUi(this);
  connect(north, &QPushButton::click, this, &MainWindow::doSomething);
  connect(south, &QPushButton::click, this, &MainWindow::doSomething);
  connect(east, &QPushButton::click, this, &MainWindow::doSomething);
  connect(west, &QPushButton::click, this, &MainWindow::doSomething);
  connect(inventory, &QPushButton::click, this, &MainWindow::doInventory);
  description->setHtml(tr("<p>You've been sent on an epic quest (imagine some backstory involving an inn, a suspiciously peppy bard and a threat to middle earth as you know it) to delve deep into the tunnels beneath github, and retrieve the <s>seven</s> ten stars!</p><p>After a long and tedious journey in which we get some character origin stories, you end up in the dungeons.</p>"));
  doPrompt();
}

void MainWindow::changeEvent(QEvent *e)
{
  QMainWindow::changeEvent(e);
  switch (e->type()) {
  case QEvent::LanguageChange:
    retranslateUi(this);
    break;
  default:
    break;
  }
}

void MainWindow::doSomething()
{

}

void MainWindow::doInventory()
{
  description->append(tr("<p>You have:<br>%1 stars<br>no tea</p>").arg(stars));
}

void MainWindow::prompt()
{
  description->append("<p>What now?</p>");
}
