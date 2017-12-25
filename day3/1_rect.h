#ifndef RECT
#define RECT
struct Rect
{
private:
	int length;
	int breadth;
	// add an implementation field
	int area_;
public:
	Rect(int l, int b) : length(l), breadth(b), area_(l * b)  { }
	void disp() const; // object thru which the call is made cannot be changed
	int find_area() const;
	void change_length(int l); 
	void change_breadth(int b);
	
};
#endif

