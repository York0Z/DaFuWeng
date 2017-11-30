#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QtGui>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QInputDialog>
#include <QPushButton>
#include <QAction>
#include <QMessageBox>
#include <QMainWindow>

#include "guiplayerhorizontal.h"
#include "guiplayervertical.h"
#include "centralwidget.h"
#include "guispace.h"
#include "guiplayer.h"
#include "about.h"

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int pn;
    //number of players
    int*pp;
    //players

    void endGame();
    //to end Monopoly
    void playerBroke();
    //whether to end Monopoly

private:
    Ui::MainWindow *ui;
    //ui->mainwindow
    //QLabel *boardLabel;
    Player** players;
    GUIPlayer* guiPlayers[4];
    QPushButton* cardDeckButton;
    CentralWidget* central;
    QAction *startAction;
    About *ab;

private slots:
    void on_btn2Player_clicked();
    void on_btn3Player_clicked();
    void on_btn4Player_clicked();
    //choose 2\3\4players

    void on_btnExit_clicked();
    //choose to exit the game

    void on_btnExit_2_clicked();
    //choose to show About information
};

#endif // MAINWINDOW_H
