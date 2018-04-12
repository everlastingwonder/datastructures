 
void MakeTable(AccessTable_type A)
{
    int i;

    /* MAXROW is the maximum number of rows in the triangle   */
    for (i = 0; i <= MAXROW; i++)
        A[i] = i*i;
}
