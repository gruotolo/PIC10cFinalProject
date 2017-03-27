#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "tank.h"
#include "enemytruck.h"
#include "totalpoints.h"
#include "town.h"
#include "basehealth.h"
class Game: public QGraphicsView{
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    tank * tank1;
    totalpoints * points;
    town * town1;
    basehealth * health;

};
#endif
