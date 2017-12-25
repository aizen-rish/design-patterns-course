#ifndef MYSTR_H
#define MYSTR_H
class MyStr;
class MyStrIndexer;

// Reference counted class
class RC
{
	private:
	char *s;
	int count;
	RC(const char *);
	~RC();
	friend class MyStr; // implementation concept
	friend ostream& operator<<(ostream&, const MyStr&);
	friend class MyStrIndexer;
};

class MyStr
{
	private:
	RC *pRC;
	public:
	MyStr(const char *);
	MyStr(const MyStr&);
	MyStr& operator=(const MyStr& rhs);
	~MyStr();
	MyStrIndexer& operator[](int i);
	friend ostream& operator<<(ostream&, const MyStr&);
	friend class MyStrIndexer;
};

class MyStrIndexer
{
private:
	int i;
	MyStr& s;
public:
	MyStrIndexer(MyStr& s, int idx);
	~MyStrIndexer();
	MyStrIndexer& operator=(const char ch);
	MyStrIndexer& operator=(MyStrIndexer& si);
	operator char();
};

#endif
