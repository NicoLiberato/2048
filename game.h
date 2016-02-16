#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QQuickItem>

// define for the UX... to be used later
//#include <QQmlApplicationEngine>
//#include <QtQml/QQmlEngine>
//#include <QtQuick/QQuickView>
//#include <QtDeclarative/QDeclarativeEngine>


// c libraries
#include <stdio.h>
#include <stdlib.h>

#define DIM 4 // 4x4 grid

class game : public QObject
{
    Q_OBJECT
public:

    explicit game(QObject *parent = 0);
    void init_grid(int arr[][DIM], int M, int N);
    void print_grid(int arr[][DIM], int M, int N);
    void random_grid(int arr[][DIM]);
    void leftAction(int arr[][DIM], int M, int N);
    void upAction(int arr[][DIM], int M, int N);
    void mergeArray(int arr[][DIM], int M, int N);
    int collapseArray(int a[],int max_num);
    int moveArray(int a[],int max_num);
    void rotateGrid(int arr[][DIM]);
    void createBanner();
    void swap(int *a, int *b);
    void gameStatus(int arr[][DIM], int M, int N);
    void find_2048(int arr[][DIM], int M, int N);

signals:

public slots:
};

static int choice;



static int mat[DIM][DIM];

static int temp1[DIM];
static int temp2[DIM];
static int temp3[DIM];
static int temp4[DIM];

static int score ;

#endif // GAME_H
