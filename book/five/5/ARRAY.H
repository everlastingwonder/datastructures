 
#define MAX 1000

typedef int Key_type;

typedef struct item_tag {
    Key_type key;
} Item_type;

typedef struct list_tag {
    int count;
    Item_type entry[MAX];
} List_type;
