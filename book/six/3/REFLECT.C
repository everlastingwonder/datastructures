 
void Reflect(Triangle_type T)
{
    int i, j, k;
    int tmp;

    for (i = 0; i <= n; i++) {  /* n is the number of rows    */
        k = i * (i + 1);        /* the index of column 0    */
 
        for (j = 1; j <= i; j++) {
            tmp = T[k+j];
            T[k+j] = T[k-j];
            T[k-j] = tmp;
        }
    }
}
