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

    QObject *rect = object->findChild<QObject*>("01");
    if (rect)
        rect->setProperty("color", "red");
    */
    game aGame;

    aGame.print_grid(mat,DIM,DIM);


    return app.exec();
}

