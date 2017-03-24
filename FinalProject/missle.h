#ifndef MISSLE_H
#define MISSLE_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QObject>

class missle: public QObject,public QGraphicsPixmapItem {
    Q_OBJECT
public:
    missle(QGraphicsItem * parent=0);
public slots:
    void move();
};
#endif // MISSLE_H
