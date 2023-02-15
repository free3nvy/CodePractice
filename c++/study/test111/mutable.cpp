#include <iostream>
using namespace std;

//mutable int test;//编译出错

class Student
{
	string name;
	mutable int getNum;
	// 原本为只读变量
	// int getNum;
	// mutable 不能改const static啥的
	//mutable const int test;    //编译出错
	//mutable static int static1;//编译出错
public:
	Student(char* name)
	{
		this->name=name;
		getNum=0;
	}
	// 首先这是一个const函数 他不可以修改其类成员
	// 但是我们这里的类成员定义成了mutable 所以可以修改
	string getName() const
	{
		++getNum;
		return name;
	}
	void pintTimes() const
	{
		cout<<getNum<<endl;
	}
};

int main(int argc, char* argv[])
{
	const Student s("张三");
	cout<<s.getName().c_str()<<endl;
	s.pintTimes();
	cout<<s.getName().c_str()<<endl;
	s.pintTimes();
	return 0;
}