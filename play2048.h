#ifndef PLAY2048_H
#define PLAY2048_H

#include <QObject>

class play2048 : public QObject
{
    Q_OBJECT
public:
    explicit play2048(QObject *parent = 0);

signals:

public slots:
};

#endif // PLAY2048_H