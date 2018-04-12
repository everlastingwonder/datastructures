 
#include "general.h"

#define N       5
#define SIZE    13
#define ABS(x)  ((x) < 0 ? -(x) : (x))

typedef int Matrix_type[SIZE];

void Transpose(Matrix_type);
void printmat(Matrix_type);

void main(void)
{
    Matrix_type a;
    int i;

    for (i = 0; i < SIZE; i++)
        a[i] = i;

    printmat(a);
    Transpose(a);
    printf("\nTransposed\n");
    printmat(a);
}

void printmat(Matrix_type a)
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            if (ABS(i-j) <= 1)
                printf("%3d ", a[2*i+j]);
            else
                printf("%3d ", 0);
        printf("\n");
    }
}
