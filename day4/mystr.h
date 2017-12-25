#ifndef MYSTR_H
#define MYSTR_H
// #if 0
// class MyStr
// {
// 	private:
// 	char *s;
// 	public:
// 	MyStr(const char *); //Initialisation
// 	MyStr(const MyStr&);	//Copy constructor
// 	MyStr& operator=(const MyStr& rhs);
// 	~MyStr();
// 	friend ostream& operator<<(ostream&, const MyStr&);
// };
// #endif
// Reference counted class
class MyStr;
class RC
{
	private:
	char *s;
	int count;
	RC(const char *);
	~RC();
	friend class MyStr; // implementation concept
	friend ostream& operator<<(ostream&, const MyStr&);
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
	friend ostream& operator<<(ostream&, const MyStr&);
};

#endif
