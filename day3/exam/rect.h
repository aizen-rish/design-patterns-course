#ifndef RECT
#define RECT
class Rect
{
	private:
	int length;
	int breadth;
	mutable int area_;
	mutable bool is_changed_;
	public:
	Rect(int l,int b) : length(l),breadth(b),is_changed_(true) { }
	void disp() const;
	int getarea() const;
	void setLen(int x);
	void setBrt(int y);
};
#endif

