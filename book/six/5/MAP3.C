 
#define HASHSIZE 101

typedef char *Key_type;

/* Hash: hash function for 3 letter words   */
int Hash(Key_type key)
{
    int h;

    h = 2 * (*key) + *(key+1) + 3 * *(key+2);
    return h % HASHSIZE;
}
