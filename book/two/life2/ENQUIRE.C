 
/* Enquire: TRUE if user wants to continue execution  */
Boolean_type Enquire(void)
{
    int  c;

    do {
        printf("Continue (y,n)?");
        while ((c = getchar()) == '')
            ;                        /* ignore new line char. */
    } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
    if (c == 'y' || c == 'Y')
        return TRUE;
    else
        return FALSE;
}
