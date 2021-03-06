 extern  void Add(struct polynomial_tag *p,struct polynomial_tag *q, 
 				 struct stack_tag *sp); 
 extern  void Divide(struct polynomial_tag *p,struct polynomial_tag *q, 
 					struct stack_tag *sp); 
 extern  void DoCommand(char cmd,struct stack_tag *sp); 
 extern  enum boolean_tag Empty(struct stack_tag *sp); 
 extern  enum boolean_tag Full(struct stack_tag *sp); 
 extern  enum boolean_tag Enquire(void ); 
 extern  void Erase(struct polynomial_tag *p); 
 extern  void Error(char *s); 
 extern  void Help(void ); 
 extern  void Initialize(struct stack_tag *sp); 
 extern  struct polynomial_tag *InsertTerm(double coef,int exp, 
 										  struct polynomial_tag *tail); 
 extern  void main(void ); 
 extern  struct node_tag *MakeNode(struct polynomial_tag *item); 
 extern  struct polynomial_tag *MakeTerm(double coef,int exp); 
 extern  struct polynomial_tag *MonomialMultiply(struct polynomial_tag *p, 
 												struct polynomial_tag *q); 
 extern  void Multiply(struct polynomial_tag *p,struct polynomial_tag *q, 
 					  struct stack_tag *sp); 
 extern  void Pop(struct polynomial_tag * *item,struct stack_tag *sp); 
 extern  void PopNode(struct node_tag * *p,struct stack_tag *sp); 
 extern  void Prompt(void ); 
 extern  void Push(struct polynomial_tag *item,struct stack_tag *sp); 
 extern  void PushNode(struct node_tag *p,struct stack_tag *sp); 
 extern  int ReadCommand(char *command); 
 extern  void Geteol(int c); 
 extern  struct polynomial_tag *ReadPolynomial(void ); 
 extern  void Subtract(struct polynomial_tag *p,struct polynomial_tag *q, 
 					  struct stack_tag *sp); 
 extern  void TopStack(struct polynomial_tag * *item,struct stack_tag *sp); 
 extern  void WritePolynomial(struct polynomial_tag *p); 
