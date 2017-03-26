#include "Game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include "enemytruck.h"
#include <QFont>
#include <QBrush>
#include <QImage>
#include "tank.h"
#include <totalpoints.h>
Game::Game(QWidget *parent){
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setBackgroundBrush(QBrush(QImage(":/images/land.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);


    tank1 = new tank();
    tank1->setPos(200,400);
    tank1->setFlag(QGraphicsItem::ItemIsFocusable);
    tank1->setFocus();
    scene->addItem(tank1);
    points = new totalpoints();
    scene->addItem(points);
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),tank1,SLOT(spawn()));
    timer->start(2000);

    show();
}
