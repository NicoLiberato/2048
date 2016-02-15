#ifndef TYPES_H
#define TYPES_H

// c libraries
#include <stdio.h>
#include <stdlib.h>

#define DIM 4 // 4x4 grid

static int mat[DIM][DIM];
static int choice;

static int temp1[DIM];
static int temp2[DIM];
static int temp3[DIM];
static int temp4[DIM];


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
