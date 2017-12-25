#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstring>
#include "mystr.h"

#if 0
MyStr::MyStr(const char *s)
: s(new char[strlen(s) + 1])
{
	strcpy(this->s, s);
}
MyStr::MyStr(const MyStr& rhs)
: s(new char[strlen(rhs.s) + 1])
{
	strcpy(this->s, rhs.s);
}
MyStr& MyStr::operator=(const MyStr& rhs) 
{
	if(this != &rhs)
	{
		delete [] s;
		s = new char[strlen(rhs.s) + 1];
		strcpy(this->s, rhs.s);
	}
	return *this;
}

MyStr::~MyStr()
{
	delete [] s;
}	
ostream& operator<<(ostream& o, const MyStr& rhs)
{
	return o << rhs.s <<  "addr : " << (void*)rhs.s << "\n";
}
#endif

RC::RC(const char *s)
: s(new char[strlen(s) + 1]), count(1)
{
	strcpy(this->s, s);
}

RC::~RC()
{
	delete [] s;
}

MyStr::MyStr(const char *s)
: pRC(new RC(s))
{
}
MyStr::MyStr(const MyStr& rhs)
: pRC(rhs.pRC)
{
	++pRC->count;
}


MyStr& MyStr::operator=(const MyStr& rhs) 
{
	if(this->pRC != rhs.pRC)
	{
		if(--this->pRC->count == 0)
			delete this->pRC;
		this->pRC = rhs.pRC;
		++this->pRC->count;
	}
	return *this;
}

MyStr::~MyStr()
{
	if(--this->pRC->count == 0)
		delete this->pRC;

}	
ostream& operator<<(ostream& o, const MyStr& rhs)
{
	return o << rhs.pRC->s <<  "count " << rhs.pRC->count << "\n";
}


