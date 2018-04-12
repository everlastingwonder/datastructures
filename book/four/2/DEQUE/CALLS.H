extern  void AddNodeHead(char item,struct deque_tag *deque_ptr);
extern  void AddNodeTail(char item,struct deque_tag *deque_ptr);
extern  void DeleteNodeHead(struct node_tag * *node_ptr,struct deque_tag *deque_ptr);
extern  void DeleteNodeTail(struct node_tag * *node_ptr,struct deque_tag *deque_ptr);
extern  void Error(char *s);
extern  void Initialize(struct deque_tag *deque_ptr);
extern  void main(void );
extern  struct node_tag *MakeNode(char item);
