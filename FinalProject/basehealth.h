#ifndef BASEHEALTH_H
#define BASEHEALTH_H
#include <QFont>

#include <QGraphicsTextItem>

class basehealth: public QGraphicsTextItem{
public:
    basehealth(QGraphicsItem * parent=0);
    void decrease();
    int getHealth();
private:
    int health;
};
#endif // BASEHEALTH_H
