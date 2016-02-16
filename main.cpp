#include <QGuiApplication>
// define for the UX... to be used later
//#include <QQmlApplicationEngine>
//#include <QtQml/QQmlEngine>
//#include <QtQuick/QQuickView>
//#include <QtDeclarative/QDeclarativeEngine>


#include "types.h"
#include "game.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    //The QML interface is deactivated at moment

    /*
     *   As discussed, this part will manage
     *   the QML interface, in second phase of
     *   the project
     *
     *
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    QQmlEngine engine2;
    QQmlComponent component(&engine2, "qrc:/main.qml");
    QObject *object = component.create();

    // TODO: retrieving a tile is easy using the Qt MetaObject engine
    // let's refine this and is ok .
    QObject *rect = object->findChild<QObject*>("01");
    if (rect)
        rect->setProperty("color", "red");
    */


    game aGame;

/*

    aGame.init_grid(mat,DIM,DIM);
    aGame.random_grid(mat,DIM,DIM);
    aGame.print_grid(mat,DIM,DIM);
    puts("---------------- 2048-------------------------------------------------");
    puts("press 'a'' for left move, 'd' for rigth move, 'w' for up, 'x' for down ");
    puts("press 'q' for quit ");

    do
        {

            choice = getchar();

            switch (choice) {
            case 'a':
                aGame.leftAction(mat,DIM,DIM);
                aGame.print_grid(mat,DIM,DIM);
                //aGame.random_grid(mat,DIM,DIM);
                //aGame.print_grid(mat,DIM,DIM);
                break;
            case 'd':
                aGame.leftAction(mat,DIM,DIM);
                aGame.random_grid(mat,DIM,DIM);
                aGame.print_grid(mat,DIM,DIM);
                break;
            case 'w':
                aGame.leftAction(mat,DIM,DIM);
                aGame.random_grid(mat,DIM,DIM);
                aGame.print_grid(mat,DIM,DIM);
                break;
            case 'x':
                aGame.leftAction(mat,DIM,DIM);
                aGame.random_grid(mat,DIM,DIM);
                aGame.print_grid(mat,DIM,DIM);
                break;
            default:
                break;
            }

        } while (choice != 'q');

*/
    return app.exec();
}

