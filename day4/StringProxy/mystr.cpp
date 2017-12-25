#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstring>
#include "mystr.h"

RC::RC(const char *s)
: s(new char[strlen(s) + 1]), count(1) {
	strcpy(this->s, s);
}

RC::~RC() {
	delete [] s;
}

MyStr::MyStr(const char *s)
: pRC(new RC(s)) {}

MyStr::MyStr(const MyStr& rhs)
: pRC(rhs.pRC) {
	++pRC->count;
}


MyStr& MyStr::operator=(const MyStr& rhs) {
	if(this->pRC != rhs.pRC) {
		if(--this->pRC->count == 0)
			delete this->pRC;
		this->pRC = rhs.pRC;
		++this->pRC->count;
	}
	return *this;
}

MyStr::~MyStr() {
	if(--this->pRC->count == 0)
		delete this->pRC;
}

ostream& operator<<(ostream& o, const MyStr& rhs) {
	return o << rhs.pRC->s << " count " << rhs.pRC->count << "!";
}

MyStrIndexer& MyStr::operator[] (int i) {
	return *new MyStrIndexer(*this, i);
}

MyStrIndexer::MyStrIndexer(MyStr& st, int idx) : s(st), i(idx) {}

MyStrIndexer::~MyStrIndexer() {}

MyStrIndexer& MyStrIndexer::operator= (const char ch) {
	// cout << "ch " << ch << "; ";
	if (s.pRC->count > 1) {
		--s.pRC->count;
		s.pRC = new RC(s.pRC->s);
	}
	s.pRC->s[i] = ch;
	// i = ch;
	return *this;
}

MyStrIndexer& MyStrIndexer::operator= (MyStrIndexer& si) {
	// cout << "si ";
	char ch = si;
	this->operator=(ch);
	return *this;
}

MyStrIndexer::operator char() {
	// return i;
	return s.pRC->s[i];
}
