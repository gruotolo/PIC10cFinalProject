#include "totalpoints.h"
#include <QFont>

totalpoints::totalpoints(QGraphicsItem *parent): QGraphicsTextItem(parent){
    points= 0;

    setPlainText(QString("Points: ") + QString::number(points));
    setDefaultTextColor(Qt::black);
    setFont(QFont("times",16));
}

void totalpoints::increase(){
    points++;
    setPlainText(QString("Points: ") + QString::number(points)); // Points: 1
}

int totalpoints::getpoints(){
    return points;
}
