#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QQuickItem>

#include "types.h"

class game : public QObject
{
    Q_OBJECT
public:
    explicit game(QObject *parent = 0);
    void init_grid(int arr[][DIM], int M, int N);
    void print_grid(int arr[][DIM], int M, int N);
    void random_grid(int arr[][DIM], int M, int N);
    void leftAction(int arr[][DIM], int M, int N);
    void upAction(int arr[][DIM], int M, int N);
    void mergeArray(int arr[][DIM], int M, int N);
    int collapseArray(int a[],int max_num);
    int moveArray(int a[],int max_num);
    void rotateGrid(int arr[][DIM]);
    void swap(int *a, int *b);

signals:

public slots:
};

#endif // GAME_H
