#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "types.h"

void swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b   = *a;
    *a   = temp;
}

int moveArray(int a[],int max_num){
    int i = 0;
    if (a[0] == 0)
    {
        i=1;
        while( i <= max_num){

            if (a[i] != 0){
                swap(&a[0],&a[i]);
                swap(&a[1],&a[2]);
                break;
            }
            i++;
        }
        swap(&a[max_num-1],&a[max_num]);
    }
    i=1;
    while ((a[i] == 0) && (i!=3)){
        swap(&a[i],&a[i+1]);
        i++;
    }


    return 0;
}

int collapseArray(int a[],int max_num){

    int i = 0;
    for (i = 0; i < max_num ; i++){
        if (a[i] == a[i+1])
        {
            a[i] += a[i+1];
            a[i+1] = 0;
        }
    }

    return 0;
}


void init_grid(int arr[][DIM], int M, int N){
    int i, j;

    for(i=0; i< M ; i++)
    {
        for ( j=0; j < N; j++)
        {
            arr[i][j] = 0;
        }
    }
}

void print_grid(int arr[][DIM], int M, int N){
    int i, j;
    for(i=0; i< M ; i++)
    {
        for ( j=0; j < N; j++)
        {
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    puts("--------------\n");
}



void leftAction(int arr[][DIM], int M, int N){

    int ret,i;

    // first row

    for (int j = 0; j < N; j++){
         temp1[j] = mat[0][j];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp1,DIM-1);
        ret = collapseArray(temp1,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[0][j] = temp1[j];

    }

    // 2 row

    for (int j = 0; j < N; j++){
         temp2[j] = mat[1][j];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp2,DIM-1);
        ret = collapseArray(temp2,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[1][j] = temp2[j];

    }


    for (int j = 0; j < N; j++){
         temp3[j] = mat[2][j];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp3,DIM-1);
        ret = collapseArray(temp3,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[2][j] = temp3[j];

    }

    // 4 row

    for (int j = 0; j < N; j++){
         temp4[j] = mat[3][j];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp4,DIM-1);
        ret = collapseArray(temp4,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[3][j] = temp4[j];

    }

}


void upAction(int arr[][DIM], int M, int N){

    int ret;
    int i;

    for (int j = 0; j < N; j++){
         temp1[j] = mat[j][0];
    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp1,DIM-1);
        ret = collapseArray(temp1,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[j][0] = temp1[j];

    }


    for (int j = 0; j < N; j++){
         temp2[j] = mat[j][1];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp2,DIM-1);
        ret = collapseArray(temp2,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[j][1] = temp2[j];

    }

    for (int j = 0; j < N; j++){
         temp3[j] = mat[j][2];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp3,DIM-1);
        ret = collapseArray(temp3,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[j][2] = temp3[j];

    }

    for (int j = 0; j < N; j++){
         temp4[j] = mat[j][3];

    }

    i=0;
    while (i < 3) {
        ret = moveArray(temp4,DIM-1);
        ret = collapseArray(temp4,DIM-1);
        i++;
    }

    for (int j = 0; j < N; j++){
          mat[j][3] = temp4[j];
    }
}


void random_grid(int arr[][DIM], int M, int N){
    srand(time(NULL));
    int pos1 = rand() % (DIM); // randomize position
    int pos2 = rand() % (DIM);
    int pos3 = rand() % (DIM);
    int pos4 = rand() % (DIM);



    arr[pos1][pos2] = 2;
    arr[pos3][pos4] = 2;
}

void rotateGrid(int arr[][DIM]) {

    int tmp;
    // Transpose the matrix
      for ( int i = 0; i < DIM; i++ ) {
          for ( int j = i + 1; j < DIM; j++ ) {
              int tmp = arr[i][j];
              arr[i][j] = arr[j][i];
              arr[j][i] = tmp;
          }
      }

      // Swap the columns
      for ( int i = 0; i < DIM; i++ ) {
          for ( int j = 0; j < DIM/2; j++ ) {
              int tmp = arr[i][j];
              arr[i][j] = arr[i][DIM-1-j];
              arr[i][DIM-1-j] = tmp;
          }
      }
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

   // QQmlApplicationEngine engine;
    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    // [DEBUG AREA] //


    init_grid(mat,DIM,DIM);
    random_grid(mat,DIM,DIM);

    puts("Choose action ... 1 for left");

    do
    {
        scanf("%d",&choice);
        print_grid(mat,DIM,DIM);
        switch (choice) {
        case 1:
            leftAction(mat,DIM,DIM);
            random_grid(mat,DIM,DIM);
            print_grid(mat,DIM,DIM);
            break;
        case 2:
            upAction(mat,DIM,DIM);
            random_grid(mat,DIM,DIM);
            print_grid(mat,DIM,DIM);
            break;
        case 3:
            puts("move down!");
            upAction(mat,DIM,DIM);
            random_grid(mat,DIM,DIM);
            rotateGrid(mat);
            rotateGrid(mat);
            print_grid(mat,DIM,DIM);
            break;
        case 4:
            puts("move right!");
            leftAction(mat,DIM,DIM);
            random_grid(mat,DIM,DIM);
            rotateGrid(mat);
            rotateGrid(mat);
            print_grid(mat,DIM,DIM);
            break;
        default:
            break;
        }

    } while (choice != 7);

    // end

return app.exec();
}

