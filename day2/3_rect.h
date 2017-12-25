#ifndef RECT
#define RECT
struct Rect
{
private:
	int length;
	int breadth;
public:
	Rect(int l, int b) : length(l), breadth(b)  { }
	void disp();
	int find_area();
	void change_length(int l);
	void change_breadth(int b);
	
};
#endif
// avoid multiple inclusion in the same translation

