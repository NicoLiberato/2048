#include <QGuiApplication>

#include "game.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    game newGame;
    /*
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
    return app.exec();
}

