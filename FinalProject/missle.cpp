#include "missle.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "enemytruck.h"
#include "Game.h"

extern Game * game; // there is an external global object called game

missle::missle(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/images/missle.png"));
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void missle::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(enemytruck)){
            game->points->increase();

            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            delete colliding_items[i];
            delete this;


            return;
        }
    }

    setPos(x()+10,y());

    if (pos().x() > 800){
        scene()->removeItem(this);
        delete this;
    }
}
