#include <QtGui>
#include <QLabel>
#include <QInputDialog>
#include <iostream>
#include <QAction>
#include <QScrollArea>
#include <QDockWidget>
#ifndef GUIPLAYER_H
#define GUIPLAYER_H

#include "player.h"
#include "guiplayer.h"

class GUIPlayer : public QDockWidget {
    Q_OBJECT

protected:
    Player* player;
    //current player

    //show prompt information
    QLabel *nameLabel;
    QLabel *nameLabel0;
    QLabel *nameLabel1;
    QLabel *nameLabel2;
    QLabel *nameLabel3;

    QLabel *propertyLabel;
    //show the change of player's houses
    QLabel *moneyLabel;
    //show player's current money

    QScrollArea *propertyScroll;
    //show more information of player's houses

public:
    GUIPlayer( Player* p );

    void buyProperty();
    //buy houses
    void setStatus();
    //build more houses

    void updateLabel(int space, int balance,char *pro);
    void updateLabel(int space,int balance);
    //both to update money and houses

};

#endif
