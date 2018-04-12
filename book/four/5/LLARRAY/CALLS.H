 extern  void Error(char *s); 
 extern  void FreeNode(int *head,int *avail,int *next,int n); 
 extern  void Initialize(int *head,int *avail,int *lastnode); 
 extern  void InsertNode(char c,int *head,int *avail,int *lastnode,int *next); 
 extern  void main(void ); 
 extern  int NewNode(int *avail,int *lastnode,int *next); 
 extern  void Traverse(int head,int *next,void (*Visit)(int )); 
 extern  void Visit(int n); 
