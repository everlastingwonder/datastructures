 extern  void Error(char *s); 
 extern  int InsertNode(char item,int tail,struct node_tag *list); 
 extern  void main(void ); 
 extern  void Traverse(int head,int tail,struct node_tag *list, 
                       void (*Visit)(struct node_tag *)); 
 extern  void Visit(struct node_tag *p); 
