#include <QGuiApplication>
#include <QQmlApplicationEngine>


#include "types.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    grid[0][2] = 0;

    return app.exec();
}
