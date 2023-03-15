/* 到底什么时候会调用拷贝构造函数？ */

/* 明白 初始化 和 赋值 的区别：
    初始化：定义(第一次出现)的同时赋值(也可以不赋值 默认初始化)  只有一次
    赋值：定义完成以后再赋值（不管在定义的时候有没有赋值）就叫做赋值 有多次*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    Student(string name = "", int age = 0, float score = 0.0f); //普通构造函数
    Student(const Student &stu);                                //拷贝构造函数
public:
    Student &operator=(const Student &stu); //重载=运算符
    void display();

private:
    string m_name;
    int m_age;
    float m_score;
};
Student::Student(string name, int age, float score) : m_name(name), m_age(age), m_score(score) {}
//拷贝构造函数
Student::Student(const Student &stu)
{
    this->m_name = stu.m_name;
    this->m_age = stu.m_age;
    this->m_score = stu.m_score;
    cout << "Copy constructor was called." << endl;
}
// //重载=运算符
Student &Student::operator=(const Student &stu)
{
    this->m_name = stu.m_name;
    this->m_age = stu.m_age;
    this->m_score = stu.m_score;
    cout << "operator=() was called." << endl;

    return *this;
}
void Student::display()
{
    cout << m_name << "的年龄是" << m_age << "，成绩是" << m_score << endl;
}
//3.函数的形参为类类型
void fun(Student stu)
{
}
//4.函数返回值为类类型
Student fun()
{
    Student stu("八戒", 26, 45.6);
    return stu;
}
int main()
{
    //stu1、stu2 都会调用普通构造函数Student(string name, int age, float score)
    Student stu1("赵云", 16, 90.5);
    Student stu2("鲁班七号", 17, 89.0);

    // //1.将其它对象作为参数
    Student stu3(stu2); //调用拷贝构造函数Student(const Student &stu)

    // //2.创建对象的同时进行初始化
    Student stu4 = stu1; //调用拷贝构造函数Student(const Student &stu) C语言 struct 风格！
    stu4 = stu2;         //调用operator=()
    stu4 = stu3;         //调用operator=()

    //3.函数的形参为类类型
    Student stu5("安琪拉", 18, 56.3);
    fun(stu5); //相当于 Student stu = stu5 复制构造产生的局部对象(函数调用完成后,对象被销毁！)

    //4.函数返回值为类类型
    Student stu6 = fun(); //两次调用拷贝构造函数，一次是返回 stu 对象时(不希望局部对象被销毁,复制构造产生中间对象(匿名对象)接收)，另外一次是创建 stu6 对象时
    return 0;
}
