#include <iostream>
using namespace std;
#include "mystr.h"

int  main()
{
	MyStr s1("pesu");
	{
		MyStr s2(s1);
		cout << "s1: " << s1 << "\n";
		cout << "s2: " << s2 << "\n";
		
		cout << "s1[0]: " << s1[0] << "\n";
		cout << "s2[0]: " << s2[0] << "\n";

		s2[0] = 'z';

		cout << "s2: " << s2 << "\n";

		s1[0] = s2[0];

		cout << "s1: " << s1 << "\n";

		s2[0] = s2[1] = 'a';

		cout << "s2: " << s2 << "\n";

		cout << "s1: " << s1 << "\n";
		cout << "s2: " << s2 << "\n";
		
		cout << "s1[0]: " << s1[0] << "\n";
		cout << "s2[0]: " << s2[0] << "\n";

		// MyStr s3("pesit");
		// s3 = s1;
		cout << "s1: " << s1 << "\n";
		cout << "s2: " << s2 << "\n";
	}
	 cout << "s1: " << s1 << "\n";
}
