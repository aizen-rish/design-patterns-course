#include <iostream>
using namespace std;
class A
{
	public:
	void todo()
	{
		step1();
		step2();
		step3();
	}
	private:
	virtual void step1() { cout << "Step1\n"; }
	virtual void step2() { cout << "Step2\n"; }
	virtual void step3() { cout << "Step3\n"; }

};
class B : public A
{
	private:
	virtual void step2() { cout << "new Step2\n"; }

};
int main()
{
	A x;
	x.todo();
	cout << "\n\n";
	B y;
	y.todo();

}
