//player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
#include <string>
//#include "bank.h"
//#include "gameboard.h"

class Player {
private:
    QString playerName;
    //player's name

public:
    Player();
    Player(QString n);
    void setName( QString n );
    //change player's name
    QString getName();
    //get player's name
    int currentSpace;
    //player's current position
    char *pro;
    //player's land and houses
    void addPro();
    //add player's houses
    char *getPro();
    //get player's houses
    void updateSpace(int);
    //update player's house
    int getSpace();
    //get player's current position
    void setSpace(int);
    //reset player's position

    //int piece;
    //int currentSpace;
    int payMoney(int);
    //player deducts money
    int printmoney();
    //printing player money
    int getMoney(int);
    //player receiving money
    //int property[40];
    //array of property size 40
    //int buyProperty(gameboard, bank*);
    //buying property function
    //int hold; //random number

protected:
    double money;
    //player's money

};

#endif
