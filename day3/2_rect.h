#ifndef RECT
#define RECT
struct Rect
{
	private:
	int length;
	int breadth;
	// add an implementation field
	// can be changed in const fn as well
	// does not break the abstraction from the client point of view
	// client does not know any thing about it
	mutable int area_;
	mutable bool is_changed_;
	public:
	Rect(int l, int b) : length(l), breadth(b), is_changed_(true)  { }
	void disp() const; // object thro which the call is made cannot be changed
	int find_area() const;
	void change_length(int l); 
	void change_breadth(int b);
	
};
#endif

