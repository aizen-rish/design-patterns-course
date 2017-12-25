#ifndef RECT_H
#define RECT_H
#if 0
// version 1
// struct Rect
// {
// 	int l_;
// 	int b_;
	
// };
// typedef struct Rect rect_t;
// void init(rect_t *, int , int);
// void disp(rect_t*);
// int area(rect_t*);
#endif
/*
#if 0
// version 2
struct Rect
{
	int l_;
	int b_;
//	void (*init)(struct Rect* , int, int);
	void (*disp)(struct Rect*);
	int (*area)(struct Rect*);
};
typedef struct Rect rect_t;
void init_rect(rect_t *, int , int);

#endif
*/
#if 1
// version 3

struct Rect;
struct vtbl_Rect
{
	void (*disp)(struct Rect*);
	int (*area)(struct Rect*);
};
struct Rect
{
	struct vtbl_Rect *vptr;
	int l_;
	int b_;

};
typedef struct Rect rect_t;
void init_rect(rect_t *, int , int);
void disp(rect_t*);
int area(rect_t*);
#endif

#endif
