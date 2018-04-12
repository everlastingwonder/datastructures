 
/* declarations for a hash table with open addressing */

#define HASHSIZE 997

typedef char *Key_type;

typedef struct item_tag {
    Key_type key;
} Item_type;

typedef Item_type Hashtable_type[HASHSIZE];
