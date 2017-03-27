#include "tank.h"
#include <QKeyEvent>
#include "missle.h"
#include "enemytruck.h"
#include <QGraphicsScene>
#include "basehealth.h"
#include "gameover.h"
#include  "game.h"
extern Game * game;
tank::tank(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/images/pixel-tank_b.png"));
}

void tank::keyPressEvent(QKeyEvent *event){

    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Down){
        if (pos().y() + 100 < 800)
        setPos(x(),y()+10);
    }
    else if (event->key() == Qt::Key_Up){
        if (pos().y()  > 0)
        setPos(x(),y()-10);
    }

    else if (event->key() == Qt::Key_Space){
        missle * m = new missle();
        m->setPos(x()+45,y());
        scene()->addItem(m);
    }





   }

void tank::spawn(){
    enemytruck* truck = new enemytruck();

    scene()->addItem(truck);
    if ( game->health->getHealth()==0)
       {
           gameover* gover = new gameover();
           scene()->addItem(gover);
            delete this;

        }

}
