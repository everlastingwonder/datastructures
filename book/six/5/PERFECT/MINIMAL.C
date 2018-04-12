 
#define HASHSIZE 101

typedef int Key_type;

/* Hash: hash function for numerals */
int Hash(Key_type key)
{
    int h;

    h = 7*(key / 200)-(key / 400)+4*(key / 100)+(key % 7) +(key % HASHSIZE);
    return h % HASHSIZE;
}
