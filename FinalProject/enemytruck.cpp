#include "enemytruck.h"
#include <QGraphicsScene>

enemytruck::enemytruck(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/images/truck.png"));
}
