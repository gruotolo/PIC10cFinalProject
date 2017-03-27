#include "baseHealth.h"
#include <QFont>

basehealth::basehealth(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    health = 1;

    setPlainText(QString("Base Health: ") + QString::number(health));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));
}

void basehealth::decrease(){
    health--;
    setPlainText(QString("Base Health: ") + QString::number(health));
}

int basehealth::getHealth(){
    return health;
}
