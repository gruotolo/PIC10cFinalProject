#include "gameover.h"
#include <QFont>
#include "game.h"
extern Game * game;
gameover::gameover(QGraphicsItem *parent): QGraphicsTextItem(parent){

    setPlainText(QString("GAME OVER \n Total score: ") + QString::number(game->points->getpoints()));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",40));
    setPos(220,200);
}
