 
#define HASHSIZE 101

typedef int Key_type;

/* Hash: hash function for numerals */
int Hash(Key_type key)
{
    int h;

    h = key/11 + key/13 + key/97 + 2003 - key + key/100 % 2 + key/10;
    return h % HASHSIZE;
}
