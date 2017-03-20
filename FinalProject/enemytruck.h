#ifndef ENEMYTRUCK_H
#define ENEMYTRUCK_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>


class enemytruck:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    enemytruck(QGraphicsItem * parent=0);

};


#endif // ENEMYTRUCK_H
