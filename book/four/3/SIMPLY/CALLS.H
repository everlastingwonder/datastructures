 extern  void InsertBetween(struct node_tag *q,struct node_tag * *head, 
 struct node_tag * *r,struct node_tag *p); 
 extern  void Delete(struct node_tag *r,struct node_tag *p); 
 extern  void Error(char *s); 
 extern  void InsertNode(struct node_tag *p,struct node_tag *q); 
 extern  void main(void ); 
 extern  struct node_tag *MakeNode(char item); 
 extern  void Traverse(struct node_tag *head,void (*Visit)(struct node_tag *)); 
 extern  void Visit(struct node_tag *p); 
