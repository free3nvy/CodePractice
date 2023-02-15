#include<iostream>
using namespace std;

// 抽象类
class Base{
    public:
        virtual void show() = 0;
        int getX(){return x;}
        Base(int i ){x = i;}
    protected:
        int x;
};

// 继承 派生类
class Derived : public Base{
    int y;
    public:
        void show(){ cout << "Derived\n";}
        Derived(int i, int j) : Base(i) {y = j;} // 上面有构造函数的时候 派生类也要有构造函数
        void func() {cout << x << y << endl;}
};


class A{
    private:
        int a;

    public:
        // 一个类只能有一个抽象类
        // virtual void show() = 0;
        virtual void f() = 0;

        // 函数g调用这个函数f 妙啊
        void g(){ this-> f(); }
        A(){}

};

class B: public A{
    public:
        void f(){cout << "B:f()" << endl;}
};

int main(){
    // 抽象类类型创建要用指针形式
    Base *bp = new Derived(1, 2);
    // 上面是指针 如果我们要访问其中的成员 则需要使用->
    bp->show();;


    B b;
    b.g();
    return 0;
    
    // A a; //抽象类不能创建对象
    // A *a1; // 可定义指针
    // A *a2 = new A(); //不能创建对象 
}