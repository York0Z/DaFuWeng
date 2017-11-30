#include <QtGui>
#include <QLabel>
#include <QInputDialog>
#ifndef GUISPACE_H
#define GUISPACE_H

#include "space.h"

class GUISpace : public QWidget {
    Q_OBJECT

protected:

public:
    GUISpace();
    GUISpace(int, int, int, int);

    GUISpace *board[40];
    //construct the map of monopoly
    //40 pointer array to save the spaces
    //void createboard();

    int getX();
    int getY();
    //get the coordinate of player

    int getamount();
    //get the ammount of money
    void setOwner(Player*);
    //set the owner of a house
    Player *owner;
    //owner of property
    Player* checkOwner();
    //judge whether there is a owner
    bool upgrade;
    //judge whether to upgrade

private:
    int x;
    int y;
    //the coordinate of space

    int space;
    //the position of space
    int amount;
    //the price of space

};

#endif

