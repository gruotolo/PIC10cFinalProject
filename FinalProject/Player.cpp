#include "Player.h"
#include <QGraphicsScene>

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/images/pixel-tank_b.png"));
}
