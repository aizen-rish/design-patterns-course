#include <iostream>
using namespace std;
#include "mystr.h"

int  main()
{
	MyStr s1("pesu");
	cout << s1 << "\n";
	{
	MyStr s2(s1);
	cout << s2 << "\n";
	MyStr s3("pesit");
	s3 =  s1;
	cout << s3 << "\n";
	}
	cout << s1 << "\n";


}
