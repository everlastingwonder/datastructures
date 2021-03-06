extern  void AddFront(struct deque_tag *deque_ptr,char item);
extern  void AddRear(struct deque_tag *deque_ptr,char item);
extern  void DeleteFront(struct deque_tag *deque_ptr,char *item);
extern  void DeleteRear(struct deque_tag *deque_ptr,char *item);
extern  void Error(char *s);
extern  void Initialize(struct stack_tag *stack_ptr);
extern  void main(void );
extern  enum boolean Empty(struct stack_tag *stack_ptr);
extern  enum boolean Full(struct stack_tag *stack_ptr);
extern  void Push(struct stack_tag *stack_ptr,char item);
extern  void Pop(struct stack_tag *stack_ptr,char *item);
extern  void SplitStack(struct stack_tag *ap,struct stack_tag *bp);
