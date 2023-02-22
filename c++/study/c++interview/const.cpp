# include <iostream>
using namespace std;

class A
{
    private:
        const int a;

    public:
    A() : a(0){};
    A(int x) : a(x){};

    int getValue();
    int getValue() const;
    // const int getValue();
};

void function()
{
    // 对象
    A b;
    const A a;
    const A *p = &a;
    const A &q = a;

    // 指针
    char greeting[] = "Hello";
    // (typename*) 命名风格

    // p1 p2均为常量
    char* p1 = greeting;
    const char* p2 = greeting;

    // 指针不可改变 为常量
    char* const p3 = greeting;
    const char* const p4 = greeting;

}

// const typename var_name 都是这么设计得
void function1(const int Var);
void function2(const char* Var);
void function3(char* const Var);

// 引用应该不能在等式左边 但可以作为值给传进去
void function4(const int& Var);

// 返回一个常数

const int function5();


// 下面俩如何使用呢？？？ 照抄就完事了
// 返回一个指向常量得指针 const int* p = function6();
const int* function6();


// 返回一个常指针 int* const p = function7();
int* const function7();




int main()
{
    function();




}