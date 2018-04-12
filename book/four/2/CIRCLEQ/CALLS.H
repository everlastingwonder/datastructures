extern  struct node_tag *MakeNode(char item);
extern  void AddNode(char item,struct queue_tag *queue_ptr);
extern  void DeleteNode(char *item,struct queue_tag *queue_ptr);
extern  void Error(char *s);
extern  void Initialize(struct queue_tag *queue_ptr);
extern  void main(void );
