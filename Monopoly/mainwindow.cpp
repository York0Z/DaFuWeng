#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMenu>
#include <QMenuBar>
#include <about.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn2Player_clicked()
{
    bool pick = true;
    pn = 2;
    pp = new int[2];
    players = new Player * [2];
    for (int i = 0; i < 2; i++)
    {
        players[i] = new Player();
    }
    for (int i = 0; i < 2; i++)
    {
        bool ok;
        pp[i] = QInputDialog::getInt(this, tr("Now pick pieces!"),
                                     tr("For each player, pick a different piece from 1-4:"), 1, 1, 4, 1, &ok);
        std::cout << pn << std::endl;
        std::cout << pp[i] << std::endl;

        while (!pick)
        {
            pick = true;
            for (int j = 0; j < 2; j++)
            {
                if (pp[i] == pp[j] && i != j)
                {
                    pick = false;
                    pp[i] = QInputDialog::getInt(this, tr("Now pick a piece that has not been taken!"),
                                                 tr("Piece taken! Pick a unique piece from 1-4:"), 1, 1, 4, 1, &ok);
                }
            }
        }
    }

    setGeometry( 0, 0, 1000, 600 );

    //Display the board in the central widget
    central = new CentralWidget(pn, pp, this, players, guiPlayers);

    setCentralWidget( central );

    //Player 1 is at the left. 2 at the left.
    //Create the GUIPlayers
    guiPlayers[0] = new GUIPlayerHorizontal( players[0] );
    guiPlayers[1] = new GUIPlayerVertical( players[1] );
    addDockWidget( Qt::LeftDockWidgetArea, guiPlayers[0] );
    addDockWidget( Qt::LeftDockWidgetArea, guiPlayers[1] );

    //    //Menu Bar Code
    //    QMenuBar *mb = menuBar(); //creates the menu bar
    //    QMenu* menu= new QMenu("Menu of Options! Click on Me!", this);
    //    mb->addMenu(menu);

    //    startAction = new QAction( "Start the Game!", this ); //start game button
    //    menu->addAction( startAction );
    //    connect(startAction, SIGNAL(triggered()), this, SLOT(start()));

    //    QAction *resignAction = new QAction( "Player Resign! This is going to quit the game!", this );
    //    menu->addAction( resignAction ); //player resigning and quitting the program whole
    //    connect(resignAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    //    QAction *exitAction = new QAction( "Quit the Game! The program will end!", this );
    //    menu->addAction( exitAction ); //quit the game as a whole
    //    connect(exitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    //    endGame();

    //Start the game
    central->enableDice();
    central->drawPlayers();
    central->promptStart();
    endGame();
}


void MainWindow::on_btn3Player_clicked()
{
    bool pick = true;
    pn = 3;
    pp = new int[3];
    players = new Player * [3];
    for (int i = 0; i < 3; i++)
    {
        players[i] = new Player();
    }
    for (int i = 0; i < 3; i++)
    {
        bool ok;
        pp[i] = QInputDialog::getInt(this, tr("Now pick pieces!"),
                                     tr("For each player, pick a different piece from 1-4:"), 1, 1, 4, 1, &ok);
        std::cout << pn << std::endl;
        std::cout << pp[i] << std::endl;

        while (!pick)
        {
            pick = true;
            for (int j = 0; j < 3; j++)
            {
                if (pp[i] == pp[j] && i != j)
                {
                    pick = false;
                    pp[i] = QInputDialog::getInt(this, tr("Now pick a piece that has not been taken!"),
                                                 tr("Piece taken! Pick a unique piece from 1-4:"), 1, 1, 4, 1, &ok);
                }
            }
        }
    }

    setGeometry( 0, 0, 1000, 600 );

    //Display the board in the central widget
    central = new CentralWidget(pn, pp, this, players, guiPlayers);

    setCentralWidget( central );

    //Player 1 is at the left. 2 at the left. 3 at the right.
    //Create the GUIPlayers
    guiPlayers[0] = new GUIPlayerHorizontal( players[0] );
    guiPlayers[1] = new GUIPlayerVertical( players[1] );
    guiPlayers[2] = new GUIPlayerHorizontal( players[2] );
    addDockWidget( Qt::LeftDockWidgetArea, guiPlayers[0] );
    addDockWidget( Qt::LeftDockWidgetArea, guiPlayers[1] );
    addDockWidget( Qt::RightDockWidgetArea, guiPlayers[2] );

    //    //Menu Bar Code
    //    QMenuBar *mb = menuBar(); //creates the menu bar
    //    QMenu* menu= new QMenu("Menu of Options! Click on Me!", this);
    //    mb->addMenu(menu);

    //    startAction = new QAction( "Start the Game!", this ); //start game button
    //    menu->addAction( startAction );
    //    connect(startAction, SIGNAL(triggered()), this, SLOT(start()));

    //    QAction *resignAction = new QAction( "Player Resign! This is going to quit the game!", this );
    //    menu->addAction( resignAction ); //player resigning and quitting the program whole
    //    connect(resignAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    //    QAction *exitAction = new QAction( "Quit the Game! The program will end!", this );
    //    menu->addAction( exitAction ); //quit the game as a whole
    //    connect(exitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    //    endGame();

    //Start the game
    central->enableDice();
    central->drawPlayers();
    central->promptStart();
    endGame();
}


void MainWindow::on_btn4Player_clicked()
{
    bool pick = true;
    pn = 4;
    pp = new int[4];
    players = new Player * [4];
    for (int i = 0; i < 4; i++)
    {
        players[i] = new Player();
    }
    for (int i = 0; i < 4; i++)
    {
        bool ok;
        pp[i] = QInputDialog::getInt(this, tr("Now pick pieces!"),
                                     tr("For each player, pick a different piece from 1-4:"), 1, 1, 4, 1, &ok);
        std::cout << pn << std::endl;
        std::cout << pp[i] << std::endl;

        while (!pick)
        {
            pick = true;
            for (int j = 0; j < 4; j++)
            {
                if (pp[i] == pp[j] && i != j)
                {
                    pick = false;
                    pp[i] = QInputDialog::getInt(this, tr("Now pick a piece that has not been taken!"),
                                                 tr("Piece taken! Pick a unique piece from 1-4:"), 1, 1, 4, 1, &ok);
                }
            }
        }
    }

    setGeometry( 0, 0, 1000, 600 );

    //Display the board in the central widget
    central = new CentralWidget(pn, pp, this, players, guiPlayers);

    setCentralWidget( central );

    //Player 1 is at the left. 2 at the left. 3 at the right. 4 at the right.
    //Create the GUIPlayers
    guiPlayers[0] = new GUIPlayerHorizontal( players[0] );
    guiPlayers[1] = new GUIPlayerVertical( players[1] );
    guiPlayers[2] = new GUIPlayerHorizontal( players[2] );
    guiPlayers[3] = new GUIPlayerVertical( players[3] );
    addDockWidget( Qt::LeftDockWidgetArea, guiPlayers[0] );
    addDockWidget( Qt::LeftDockWidgetArea, guiPlayers[1] );
    addDockWidget( Qt::RightDockWidgetArea, guiPlayers[2] );
    addDockWidget( Qt::RightDockWidgetArea, guiPlayers[3] );

    //    //Menu Bar Code
    //    QMenuBar *mb = menuBar(); //creates the menu bar
    //    QMenu* menu= new QMenu("Menu of Options! Click on Me!", this);
    //    mb->addMenu(menu);

    //    startAction = new QAction( "Start the Game!", this ); //start game button
    //    menu->addAction( startAction );
    //    connect(startAction, SIGNAL(triggered()), this, SLOT(start()));

    //    QAction *resignAction = new QAction( "Player Resign! This is going to quit the game!", this );
    //    menu->addAction( resignAction ); //player resigning and quitting the program whole
    //    connect(resignAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    //    QAction *exitAction = new QAction( "Quit the Game! The program will end!", this );
    //    menu->addAction( exitAction ); //quit the game as a whole
    //    connect(exitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    //    endGame();

    //Start the game
    central->enableDice();
    central->drawPlayers();
    central->promptStart();
    endGame();
}


void MainWindow::on_btnExit_clicked()
{
    QApplication::quit();
}

//void MainWindow::start()
//{ starting of the game and making buttons come to life after they were set to false
//    startAction->setEnabled(true);
//    central->enableDice();
//    central->drawPlayers();
//    startAction->setEnabled(false);
//    central->promptStart();
//}

void MainWindow::endGame()
{
    QMessageBox* gameEnds = new QMessageBox(this);
    gameEnds->setText(QString("The game is ending! Looks like there is no winner in this game!"));
}

void MainWindow::on_btnExit_2_clicked()
{
    ab = new About ;
    ab->show();
}
