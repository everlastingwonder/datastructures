typedef struct polynomial_tag {
	double coef;
	int    exp;
	struct polynomial_tag *next;
} Polynomial_type;
