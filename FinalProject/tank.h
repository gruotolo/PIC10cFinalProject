#ifndef TANK_H
#define TANK_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class tank:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    tank(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent * event);
public slots:
    void spawn();

};

#endif
