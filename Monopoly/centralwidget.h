#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H
#include <QtGui>
#include <QApplication>
#include <QGridLayout>
#include <QPushButton>
#include <QFont>
#include <QVBoxLayout>
#include <QWidget>
#include <QDialog>
#include <QLineEdit>
#include <QLabel>
#include <QInputDialog>
#include <QPropertyAnimation>
#include <QMessageBox>

#include "guispace.h"
#include "player.h"
#include "guiplayer.h"

class CentralWidget: public QWidget {
    Q_OBJECT

private:
    QPushButton* cardDeckButton;
    QPushButton* cardDeckButton2;
    QLabel* boardLabel;
    QLabel* boardLabel2;
    //show 'card' and 'community chest'

    //pictures of cards
    QPixmap* cardFaceDown1;
    QPixmap* cardFaceUp1;
    QPixmap* cardFaceDown2;
    QPixmap* cardFaceUp2;
    QPixmap* cardFaceUp3;
    QPixmap* cardFaceUp4;
    QPixmap* cardFaceUp5;
    QPixmap* cardFaceUp6;
    QPixmap* cardFaceUp7;
    QPixmap* cardFaceUp8;
    //all the card picture
    //all the card effect

    //judgements
    bool isFaceDown;
    bool isFaceDown2;
    //whether to show up the cards

    bool rolling;
    //to judge whether to roll
    bool buying;
    //to judge whether to buy houses
    bool upgrading;
    //to judge whether to update houses
    bool ending;
    //to judge whether to end turns

    //Dice
    QPushButton* diceButton;
    QPixmap* dice;
    QPixmap* dice1;
    QPixmap* dice2;
    QPixmap* dice3;
    QPixmap* dice4;
    QPixmap* dice5;
    QPixmap* dice6;
    //pictures of dice

    //Players
    QPushButton* firstpiece;
    QPushButton* secondpiece;
    QPushButton* thirdpiece;
    QPushButton* fourthpiece;
    //pictures of players
    QPixmap* piece1;
    QPixmap* piece2;
    QPixmap* piece3;
    QPixmap* piece4;
    //show the positions of players

    //Buying
    QPushButton* buyProperty;
    QPixmap* property;
    //Updating
    QPushButton* upgradeProperty;
    QPixmap* niceproperty;
    bool upgradeOrNot[50];
    //whether to update

    //End
    QPushButton* endTurn;
    QPixmap* end;
    //end turns

public slots:
    void drawCard();
    void drawCard2();
    //show pictures of cards

    void payProperty();
    void payupgradeProperty();
    //buy and update houses

    void endplayerTurn();
    void runTurn();
    //start and end turns


public:
    CentralWidget(int _pn, int *_pp, QWidget *parent, Player* playersm[4],GUIPlayer* guiPlayers[4]); //4?
    CentralWidget(QWidget *parent);
    int pn;
    //number of players
    int *pp;
    //every player
    int currentPlayer;
    //current player

    int x;
    int y;
    //coordinate of players
    int amount;
    //money of players

    //void updateSpace(int currentPlayer);
    void movePlayers(int, int, int);
    //change positions
    void createboard();
    //show maps
    void drawPlayers();
    //show players

    void rollDice();
    //roll dice
    void enableDice();
    //whether to roll dice

    Player** players;
    GUISpace* board[40];
    GUIPlayer** gplayers;

    void playerBroke();
    //whether a player broke
    void promptStart();
    //whether to start the game

};

#endif
