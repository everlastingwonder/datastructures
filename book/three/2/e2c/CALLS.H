extern  void Error(char *s);
extern  void Initialize(struct stack_tag *stack_ptr);
extern  char LastElem(struct stack_tag *stack_ptr);
extern  void main(void );
extern  enum boolean_tag Empty(struct stack_tag *stack_ptr);
extern  enum boolean_tag Full(struct stack_tag *stack_ptr);
extern  void Push(char item,struct stack_tag *stack_ptr);
extern  void Pop(char *item_ptr,struct stack_tag *stack_ptr);
extern  int Size(struct stack_tag *stack_ptr);
