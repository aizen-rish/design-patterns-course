#ifndef MYSTR_H
#define MYSTR_H
class MyStr;
struct RC
{
    private:
    int count;
    char s[1];
    RC(const char *);
    // ~RC();
    friend class MyStr;
    friend ostream& operator<<(ostream&, const MyStr&);
};

class MyStr
{
    private:
    RC *pRC;
    public:
    MyStr(const char *);
    MyStr(const MyStr&);
    MyStr& operator=(const MyStr&);
    ~MyStr();
    friend ostream& operator<<(ostream&, const MyStr&);
};
#endif

