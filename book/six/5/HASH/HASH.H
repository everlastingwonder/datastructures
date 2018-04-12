 
/* declarations for a chained hash table */

#define HASHSIZE    997
 
typedef char *Key_type;

typedef struct item_tag {
    Key_type key;
} Item_type;

typedef struct node_tag {
    Item_type info;         /* information to store in table    */
    struct node_tag *next;  /* next item in the linked list     */
} Node_type;

typedef Node_type *List_type;
typedef List_type Hashtable_type[HASHSIZE];
