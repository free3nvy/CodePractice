// friend 可以访问private

#include <iostream>
using namespace std;

class A{
    public:
        // 类函数里面的东西可以使用_前缀
        // c++ 特性 将_a 赋值给a 后面的大括号也是需要的!
        A(int _a):a(_a){};
        friend int geta(A &ca); 
        // friend类
        friend class B;
    private:
        int a;
};

class B{
    public:
        int getb(A ca){
            return ca.a;
        };
};




int geta(A &ca){
    // 可直接访问私有成员a
    return ca.a;

}

int main(){
    A a(3);
    cout << geta(a) << endl;
    B b;
    cout << b.getb(a) << endl;
    return 0;
}
