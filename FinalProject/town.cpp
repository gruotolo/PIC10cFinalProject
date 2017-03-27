#include "town.h"
#include <QGraphicsScene>

town::town(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/images/town.png"));
}
