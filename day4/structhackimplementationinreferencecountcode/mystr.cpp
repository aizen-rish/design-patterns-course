using namespace std;
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "mystr.h"
#include <new>


RC::RC(const char* str)
: count(1)  
{
    strcpy(this->s,str);
}


MyStr::MyStr(const char* s)
: pRC(new (malloc(sizeof(int) + sizeof(char) * strlen(s) ))  RC(s))
{
}

MyStr::MyStr(const MyStr& rhs):
pRC(rhs.pRC) {
    ++pRC->count;
 }

MyStr& MyStr::operator=(const MyStr& rhs){
    if(this->pRC != rhs.pRC) {
        if(--this->pRC->count == 0)
            delete this->pRC;
        this->pRC = rhs.pRC;
        ++this->pRC->count;
    }
    return *this;
}

MyStr::~MyStr(){
    if(--this->pRC->count == 0)
        free(this->pRC);
}
ostream& operator<<(ostream& o,const MyStr& rhs){
    return o << rhs.pRC->s <<  " count " << rhs.pRC->count << "\n";
}

