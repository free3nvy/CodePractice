#include<iostream>
// 成功调用了别的cpp文件函数 有点参考意义的
#include"apple.cpp"
using namespace std;


// 外面的apple.cpp 类里面只是声明 啥都没实现
Apple::Apple(int i)
{
    cout << "给你实现一下!!" << endl;
}
int Apple::add(int num){
    // 定义了take函数
    take(num);
}
int Apple::add(int num) const{
    take(num);
}
void Apple::take(int num) const
{
    cout<<"take func "<<num<<endl;
}
// const函数不能修改成员变量
int Apple::getCount() const
{
    take(1);
//    add(); //error 只是没有定义add() const 罢了 不是不能改 垃圾
    return apple_number;
}
int main(){
    Apple a(2);
    cout<<a.getCount()<<endl;
    a.add(10);
    const Apple b(3);
    b.add(100);
    // return 0;
}
