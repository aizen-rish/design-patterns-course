struct Square
{
	int l_;
	
//	void (*init)(struct Square* , int, int);
	void (*disp)(struct Square*);
	int (*area)(struct Square*);
};
typedef struct Square square_t;
void init_square(square_t *, int);
