#include "player.h"

Player::Player()
{
    currentSpace = 1;
    money = 2000;
    pro = new char[200];
    pro[0]='\0';
}

Player::Player( QString n )
{
    playerName = n;
}

void Player::setName( QString n )
{
    playerName = n;
}

QString Player::getName()
{
    return playerName;
}

int Player::payMoney(int n)
//pays money
{
    money = money - n;
    return money;
}

int Player::printmoney()
//prints out money
{
    return money;
}

int Player::getMoney(int n)
//receives money
{
    money = money + n;
    return money;
}

void Player::addPro()
{
    if(currentSpace == 2)
    {
        strcat(pro,"America $100\n");
    }
    else if(currentSpace == 4)
    {
        strcat(pro,"Canada  $100\n");
    }
    else if(currentSpace == 5)
    {
        strcat(pro,"Argentina   $120\n");
    }
    else if(currentSpace == 7)
    {
        strcat(pro,"Mexico  $100\n");
    }
    else if(currentSpace == 9)
    {
        strcat(pro,"Cuba    $100\n");
    }
    else if(currentSpace == 10)
    {
        strcat(pro,"France  $120\n");
    }
    else if(currentSpace == 12)
    {
        strcat(pro,"Germany   $140\n");
    }
    else if(currentSpace == 14)
    {
        strcat(pro,"Italy   $140\n");
    }
    else if(currentSpace == 15)
    {
        strcat(pro,"Spain  $160\n");
    }
    else if(currentSpace == 16)
    {
        strcat(pro,"Greece $170\n");
    }
    else if(currentSpace == 17)
    {
        strcat(pro,"Holland $180\n");
    }
    else if(currentSpace == 20)
    {
        strcat(pro,"England  $200\n");
    }
    else if(currentSpace == 22)
    {
        strcat(pro,"Russia $280\n");
    }
    else if(currentSpace == 24)
    {
        strcat(pro,"Thailand  $260\n");
    }
    else if(currentSpace == 25)
    {
        strcat(pro,"Turkey   $260\n");
    }
    else if(currentSpace == 27)
    {
        strcat(pro,"Austrilia   $240\n");
    }
    else if(currentSpace == 28)
    {
        strcat(pro,"Singapore   $220\n");
    }
    else if(currentSpace == 30)
    {
        strcat(pro,"Hong Kong   $220\n");
    }
    else if(currentSpace == 32)
    {
        strcat(pro,"Japan  $300\n");
    }
    else if(currentSpace == 33)
    {
        strcat(pro,"Brazil  $300\n");
    }
    else if(currentSpace == 36)
    {
        strcat(pro,"Korea   $320\n");
    }
    else if(currentSpace == 38)
    {
        strcat(pro,"India   $350\n");
    }
    else if(currentSpace == 39)
    {
        strcat(pro,"Norway  $400\n");
    }
    else if(currentSpace == 40)
    {
        strcat(pro,"China   $400\n");
    }
    else{}

}
char *Player::getPro()
{
    return pro;
}

void Player::updateSpace(int changeSpace)
{
    //updates space of player
    currentSpace = changeSpace + currentSpace;
}

int Player::getSpace()
{
    //gets the space of the player
    return currentSpace;
}

void Player::setSpace(int s)
{
    //setting the space of player
    currentSpace = s;
}
