extern  struct node_tag *MakeNode(char item);
extern  void AddNode(char item,struct queue_tag *queue_ptr);
extern  void Concatenate(struct queue_tag *first,struct queue_tag *second);
extern  void Error(char *s);
extern  void Initialize(struct queue_tag *queue_ptr);
extern  void main(void );
extern  void Split(struct node_tag *p,struct queue_tag *oldlist,struct queue_tag *newlist);
extern  void Traverse(struct queue_tag *queue_ptr,void (*Visit)(struct node_tag *));
extern  void Visit(struct node_tag *p);
