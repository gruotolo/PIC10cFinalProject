#ifndef TOWN_H
#define TOWN_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class town:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    town(QGraphicsItem * parent=0);

 };
#endif // TOWN_H
