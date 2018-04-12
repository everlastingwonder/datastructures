 extern  void AddNode(struct node_tag *node_ptr,struct queue_tag *queue_ptr); 
 extern  void DeleteNode(struct node_tag * *node_ptr,struct queue_tag *queue_ptr); 
 extern  enum boolean_tag Empty(struct queue_tag *queue_ptr); 
 extern  enum boolean_tag Full(struct queue_tag *queue_ptr); 
 extern  void Error(char *s); 
 extern  void Initialize(struct queue_tag *queue_ptr); 
 extern  void main(void ); 
 extern  struct node_tag *Makenode(char item); 
