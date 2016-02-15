#ifndef TYPES_H
#define TYPES_H

// c libraries
#include <stdio.h>
#include <stdlib.h>

#define DIM 4

static int mat[DIM][DIM];
int temp1[DIM];
int temp2[DIM];
int temp3[DIM];
int temp4[DIM];
int choice = 0;
int grid[DIM][DIM];


// basic furctions of the game -> to connect with proper callbacks
void init_grid(int arr[][DIM], int M, int N);
void print_grid(int arr[][DIM], int M, int N);
void random_grid(int arr[][DIM], int M, int N);
void leftAction(int arr[][DIM], int M, int N);
void upAction(int arr[][DIM], int M, int N);
void mergeArray(int arr[][DIM], int M, int N);
int collapseArray(int a[],int max_num);
int moveArray(int a[],int max_num);
#endif // TYPES_H
