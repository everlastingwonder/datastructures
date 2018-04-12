 
#define SIZE    13

typedef int Matrix_type[SIZE];

/* Transpose: transpose matrix    */
void Transpose(Matrix_type matrix)
{
    int x = 1;
    int tmp;

    while (x < SIZE) {
        tmp = matrix[x];    /* swap elements    */
        matrix[x] = matrix[x+1];
        matrix[x+1] = tmp;
        x += 3;
    }
}
