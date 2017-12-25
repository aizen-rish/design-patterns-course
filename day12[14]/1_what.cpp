#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

#if 0
int acc(int *first, int *last)
{
	int total = 0;
	while(first != last)
	{
		total += *first++;
	}
	return total;
}
#endif
// ptr_t :
//	++
//	*
//	!=
#if 1
template<typename ptr_t>
int acc(ptr_t first, ptr_t last)		//Sum from first to last
{
	int total = 0;
	while(first != last)
	{
		total += *first++;
	}
	return total;
}
#endif
template<typename ptr_t, typename T>
T acc(ptr_t first, ptr_t last, T init)		//Sum from first to last with initial value
{
	while(first != last)
	{
		init += *first++;
	}
	return init;
}

template<typename ptr_t, typename T, typename op_t>
T acc(ptr_t first, ptr_t last, T init, op_t op)			//Operation from first to last with initial value
{
	while(first != last)
	{
		init = op(init, *first++);
	}
	return init;
}
int add(int x, int y) { return x + y; }		//Some operations
int mul(int x, int y) { return x * y; }



// terrible
class Add1
{
public:
	Add1(int z) : z_(z) { }
	int operator()(int x, int y) { return x + y + z_; }
private:
	int z_;
};

template<typename ptr_t>
void disp(ptr_t first, ptr_t last)
{
	while(first != last)
	{
		cout << *first++ << "\t";
	}
	cout << "\n";
} 

bool mycmp(int x, int y)
{
	return y < x;
}
// 	it = find_if(b, b + 5, mybind(greater<int>(), 33));

class mybind
{
public:
	mybind(greater<int> cmp, int x) : cmp_(cmp), x_(x) { } 
	bool operator()(int y) { return cmp_(y, x_); }
private:
	greater<int> cmp_;
	int x_;
};


class What
{
public:
	What(int, int) { cout << "ctor\n"; }
	void operator()(int, int) { cout << "functor\n"; }
};

class Add
{
public:
	int operator()(int x, int y) { return x + y; }
};

int main()
{
#if 0
	//What w(5, 6);
	//What(3, 4);
	//w(7, 8);  
	//w.operator()(7, 8);
	//cout << "test\n";
	//What(11, 22)(33, 44);
	Add d;
	cout<<d(2,3)<<" "<<add(-1,1);
	Add1 s(2);
	cout<<s(2,3)<<" "<<s(-1,1);
#endif


	int a[] = {1, 5, 2, 3, 4};
/*
	cout << "res : " << acc(a, a + 5) << "\n";
	vector<int> v(a, a + 5);
	cout << "res : " << acc(v.begin(), v.end()) << "\n";
	
	cout << "res : " << acc(a, a + 5, 0) << "\n";
	cout << "res : " << acc(v.begin(), v.end(), 25) << "\n";

	cout << "res : " << acc(a, a + 5, 0, add) << "\n";
	cout << "res : " << acc(a, a + 5, 1, mul) << "\n";
	cout << "res : " << acc(v.begin(), v.end(), 25, mul) << "\n";
	
	cout << "res : " << acc(a, a + 5, 0, Add()) << "\n";
	cout << "res : " << acc(a, a + 5, 0, Add1(10)) << "\n";
*/
#if 1
	sort(a, a + 5);
	disp(a, a + 5);
	
//	sort(a, a + 5, mycmp);
	sort(a, a + 5, greater<int>());
	disp(a, a + 5);

	int b[] = {11, 33, 20, 22, 44};
	auto it = find(b, b + 5, 11); // type detection
	// not safe
	cout << "val : " << *it << "\n";
	//auto it = find_if(b, b + 5, // functor taking one argumet ); // type detection
	//it = find_if(b, b + 5, mybind(greater<int>(), 33));
	//cout << "val : " << *it << "\n";
#endif
}






















