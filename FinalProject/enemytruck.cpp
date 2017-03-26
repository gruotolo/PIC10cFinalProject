#include "enemytruck.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "Game.h"
extern Game * game;
enemytruck::enemytruck(QGraphicsItem *parent): QGraphicsPixmapItem(parent){


    int random_number = rand() % 700;
        setPos(800,random_number);

    setPixmap(QPixmap(":/images/truck.png"));
    setTransformOriginPoint(50,50);
        setRotation(0);

        QTimer * timer = new QTimer(this);
           connect(timer,SIGNAL(timeout()),this,SLOT(move()));


         timer->start(50);

}

void enemytruck::move(){
    setPos(x()-5,y());

    if (pos().x() < -400){
       // game->health->decrease();

        scene()->removeItem(this);
        delete this;
    }
}
