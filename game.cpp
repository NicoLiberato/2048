#include "game.h"


game::game(QObject *parent) : QObject(parent)
{

    init_grid(mat,DIM,DIM);
    random_grid(mat);
    print_grid(mat,DIM,DIM);

    puts("---------------- 2048-------------------------------------------------");
    puts("press 'a'' for left move, 'd' for rigth move, 'w' for up, 'x' for down ");
    puts("press 'q' for quit ");

    do
    {


        choice = getchar();

        switch (choice) {
        case 'a':
            leftAction(mat,DIM,DIM);
            print_grid(mat,DIM,DIM);
            random_grid(mat);
            print_grid(mat,DIM,DIM);
            break;
        case 'd':
            leftAction(mat,DIM,DIM);
            random_grid(mat);
            rotateGrid(mat);
            rotateGrid(mat);
            print_grid(mat,DIM,DIM);
            break;
        case 'w':
            upAction(mat,DIM,DIM);
            random_grid(mat);
            print_grid(mat,DIM,DIM);
            break;
        case 'x':
            upAction(mat,DIM,DIM);
            random_grid(mat);
            rotateGrid(mat);
            rotateGrid(mat);
            print_grid(mat,DIM,DIM);
            break;
        default:
            break;
        }

    } while (choice != 'q');
    exit(0);

}
/*
 *    Function name : swap
 *       description: boring function for swap two positions in an array
 *                    TODO: see if some alternative is feasible
*/
void game::swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b   = *a;
    *a   = temp;
}

/*
 *    Function name : moveArray
 *       description: move the elements on the left top of the array
 *                    moving zeroes on the rigth
*/
int game::moveArray(int a[],int max_num){
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

/*
 *    Function name : collapseArray
 *       description: sum elements with same value
 *
*/
int game::collapseArray(int a[],int max_num){

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

/*
 *    Function name : init_grid
 *       description: zeroes in all positions.
 *                    will be replaced with the constructor initialization
 *
*/
void game::init_grid(int arr[][DIM], int M, int N){
    qDebug("[DEBUG]: init_grid called");
    int i, j;

    for(i=0; i< M ; i++)
    {
        for ( j=0; j < N; j++)
        {
            arr[i][j] = 0;
        }
    }
}

/*
 *    Function name : print_grid
 *       description: print the grid (text menu)
 *
*/
void game::print_grid(int arr[][DIM], int M, int N){
    qDebug("[DEBUG]: print_grid called");
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


/*
 *    Function name : leftAction
 *       description: apply moveArray for all the rows in the grid
 *                    is boring, a new version with a optimized algorithm
 *                    is on the way
*/
void game::leftAction(int arr[][DIM], int M, int N){
     qDebug("leftAction called");
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


/*
 *    Function name : upAction
 *       description: same as leftAction, but for the top of the grid
 *                     TODO : these functions are computation expensive,
 *                            let's find out  a better solution
*/
void game::upAction(int arr[][DIM], int M, int N){

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

/*
 *    Function name : random_grid
 *       description: randomize the board-
 *
*/
void game::random_grid(int arr[][DIM]) {
    static bool initialized = false;
    int x,y;
    int r,len=0;
    int n,list[DIM*DIM][DIM];

    if (!initialized) {
        srand(time(NULL));
        initialized = true;
    }

    for (x=0;x<DIM;x++) {
        for (y=0;y<DIM;y++) {
            if (arr[x][y]==0) {
                list[len][0]=x;
                list[len][1]=y;
                len++;
            }
        }
    }

    if (len>0) {
        r = rand()%len;
        x = list[r][0];
        y = list[r][1];
        n = (rand()%10)/9+1;
        arr[x][y]=2;
    }
}

/*
 *    Function name : rotateGrid
 *       description: rotate the board  90 degrees
 *
*/
void game::rotateGrid(int arr[][DIM]) {
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
