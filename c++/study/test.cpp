#include <iostream>
#include <set>
#include <functional>

using namespace std;

class UnNameLocalFunction{
    private:
        int localVar;
    public:
        UnNameLocalFunction(int var): localVar(var){
            cout << "1111";
            cout << "1112";
            cout << "11";

        }


        // reload bool type?? maybe
        bool operator()(int val) {
            return val == localVar;
        }
};

class Person{
    public:
        string firstname;
        string lastname;
};

class LambdaFunctor{
    public:
        LambdaFunctor(int a, int b): m_a(a), m_b(b){}

    bool operator()(int n) const {
        return m_a < n && n < m_b;
    }

    private:
    int m_a;
    int m_b;
};

class X{
    private:
        int __x, __y;

    public:
        X(int x, int y): __x(x), __y(y){}

        int operator()(int a)
        {
            return a;
        }

        int f()
        {
            return [&]() -> int{
                return operator()(this->__x + __y);
            }();
        }

        int ff()
        {
            return [this](){
                return this->__x;
            }();
        }
};

int main()
{
    int x{0};
    auto f1 = [=]() mutable {x = 42;};  // okay, 创建了一个函数类型的实例
    // auto f2 = [=]()         {x = 42;};

    [] {
        cout << "hello_quchao" << endl;
    }();

    auto I = []{
        cout << "he~~~~" << endl;
    };
    I();
    int id = 0;

    auto f = [id]()  mutable{
        cout << "id=" << id << endl;
        ++id;
    };
    id = 42;
    f();
    f();
    f();
    cout << id << endl;

    int id99 = 0;
    auto f99 = [&id99]() {
        cout << "id99=" << id99 << endl;
        ++id99;
    };
    id99 = 42;
    f99();
    f99();
    f99();

    int id2 = 0;
    auto f2 = [&id2](int &param)
    {
        cout << "id2=" << id2<< endl;
        ++id2;
        ++param;
        cout << "函数内param="<< param<< endl;
        static int x = 5;
        return id2;
    };
    int param = 1;
    f2(param);
    cout << "param=" <<param << endl;

    auto f3 = [&]()
    {
        cout << "id=" << id << endl;
        cout << "id99=" << id99 << endl;
        cout << "id2=" << id2 << endl;
        cout << "param=" << param << endl;
    };
    f3();

    cout << "id=" << id << endl;
    cout << "------------" << endl;
    auto f5 = [&, id](){
        cout << "id=" << id << endl;
        cout << "id99=" << id99 << endl;
        cout << "id2=" << id2 << endl;
        cout << "param=" << param << endl;
    };
    f5();
    
    cout << "X函数!";
    X x_(1, 2);
    cout << x_.f() << endl;
    cout << x_.ff() << endl;
    cout << "-----------";
    
    X c(1 ,2);
    if(c(2))
    {
        cout << "duide";
    }
    UnNameLocalFunction a(44);
    // after use operator bool
    if(a(44))
    {
        cout << "666"<< endl;
    }
    Person *p = new Person();
    LambdaFunctor b(1, 10);
    if(b(11)){
        cout << "print!!!";
    }

    int tobefount = 5;
    auto lambda1 = [tobefount](int val){
        return val == tobefount;
    };

    bool b1 = lambda1(6);
    UnNameLocalFunction lambda2(tobefount);
    bool b2 = lambda2(5);

    
    cout << b1;
    cout << b2;

    auto ll1 = [](int x) -> int{
        return x + 10;
    };
    
    cout << ll1(5) << endl;


    function<int(int x)> ll = [](int x) -> float{
        return x + 10.0;
    };

    cout << ll(1.1) << endl;

}