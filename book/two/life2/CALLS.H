 
void Copy(List_type *, List_type *);
int  Enquire(void);
void Initialize(List_type *, List_type *, List_type *, List_type *,
    Grid_type, Gridcount_type);
void WriteMap(Grid_type);
void ReadMap(List_type *, Grid_type);
void Vivify(List_type *, Grid_type, Gridcount_type);
void Kill(List_type *, Grid_type, Gridcount_type);
 
void AddNeighbors(List_type *, List_type *, List_type *,
    Gridcount_type, Grid_type);
 
void SubtractNeighbors(List_type *, List_type *, List_type *,
    Gridcount_type, Grid_type);
void Add(List_type *, Coord_type);
