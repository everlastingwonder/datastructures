 
#include "lower.h"

void ReadLower(Triangle_type *);
void PrintLower(Triangle_type);
void TestTriangle(Triangle_type);
void InitAccess(int []);

int A[MAX];

void main(void)
{
    Triangle_type T;

    InitAccess(A);
    ReadLower(&T);
    PrintLower(T);
    TestTriangle(T);
}

void InitAccess(int A[])
{
    int i;

    for (i = 0; i < MAX; i++)
        A[i] = i * (i + 1) / 2;
}
