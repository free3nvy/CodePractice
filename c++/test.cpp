#include <iostream>
#include <stdio.h>
using namespace std;

class A{
public:
	int x;
	virtual void b() {}
};

int main()
{
	A* p = new A;
	cout << p << endl;
	cout << &p->x << endl;
	return 0;
}