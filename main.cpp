#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "types.h"
#include "game.h"



int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

     //The QML interface is deactivated at moment
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));



    game aGame;

    aGame.print_grid(mat,DIM,DIM);


    return app.exec();
}

