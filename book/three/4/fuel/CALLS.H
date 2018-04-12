
void AddQueue(Plane_type x, Queue_type *qp);
void Conclude(int nplanes, int nland, int ntakeoff, int nrefuse,
	 int landwait, int takeoffwait, int idletime, int endtime,
	 int ncrashed, Queue_type *pt, Queue_type *pl);
void DeleteQueue(Plane_type *plane, Queue_type *qp);
void EmergencyLand(Plane_type p, int curtime, int *nland, int *ncrashed);
void Error(char *s);
void Fly(Plane_type p, int curtime, int *ntakeoff, int *takeoffwait);
void Idle(int curtime, int *idletime);
void Initialize(Queue_type *qp);
void Land(Plane_type p, int curtime, int *nland, int *landwait,
	 int *ncrashed);
void NewPlane(Plane_type *p, int *nplanes, int curtime, Action_type kind,
	 double expectfuel);
void Randomize(void );
int  RandomNumber(double expectedvalue);
void Refuse(Plane_type p, int *nrefuse, Action_type kind);
int  Size(Queue_type *qp);
void Start(int *endtime, int *nplanes, int *nland, int *ntakeoff, 
	 int *nrefuse, int *ncrashed, int *landwait, int *takeoffwait, 
	 int *idletime, double *expectfuel, double *expectarrive, 
	 double *expectdepart);
Boolean_type Empty(Queue_type *qp);
Boolean_type Enquire(void );
Boolean_type Full(Queue_type *qp);
