#include <QApplication>
#include "Game.h"



int main(int argc, char *argv[]){
    QApplication a(argc, argv);

  Game* game1 = new Game();
   game1->show();

    return a.exec();
}
