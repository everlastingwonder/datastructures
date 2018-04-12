void CheckBounds(Position_type *p, int choice, int *inbounds, 
	 int maxrow, int maxcol);
void Choose(Position_type *p, int *choice);
void GetInfo(int *maxrow, int *maxcol, int *runs);
int  GetNumber(int low, int high);
void Move(Position_type p, int *moves);
void Randomize(void );
int  RandomNumber(double expectedvalue);
void Results(int runs, int *count, int maxrow, int maxcol);
int  Select(int low, int high);
void Start(int *moves, Position_type *place, int maxcol);
void Title(void);
Boolean_type Enquire(void);
Boolean_type Home(Position_type p, int maxrow);
