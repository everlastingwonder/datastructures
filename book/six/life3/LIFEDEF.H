 
/* declarations for Life3   */

#define HASHSIZE    997

typedef enum status_tag { ALIVE, DEAD } Status_type;

typedef struct cell_tag {   /* description of one position in the grid  */
    Status_type state;
    int     nbrs;
    int     row, col;
    struct cell_tag *next;
} Cell_type;

typedef struct node_tag {   /* Construct indirect linked lists of cells.    */
    Cell_type *entry;
    struct node_tag *next;
} Node_type;

typedef Cell_type *Hashtable_type[HASHSIZE];
