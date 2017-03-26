#ifndef TOTALPOINTS_H
#define TOTALPOINTS_H

#include <QGraphicsTextItem>

class totalpoints: public QGraphicsTextItem{
public:
    totalpoints(QGraphicsItem * parent=0);
    void increase();
    int getpoints();
private:
    int points;
};
#endif // TOTALPOINTS_H
