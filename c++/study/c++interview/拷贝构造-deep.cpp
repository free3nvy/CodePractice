#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    Student(string name = "", int age = 0, float score = 0.0f);
    Student(const Student &stu);

public:
    Student &operator=(const Student &stu);
    void display();

private:
    string m_name;
    int m_age;
    float m_score;

    

};

Student::Student(string name, int age, float score) : m_name(name), m_age(age),m_score(score) {}

// 拷贝构造函数~~
Student::Student(const Student &stu)
{
    this->m_name = stu.m_name;
    this->m_age = stu.m_age;
    this->m_score = stu.m_score;
    cout << "拷贝构造函数了！！" << endl;

}

// 试试重载=运算符？？
Student &Student::operator=(const Student &stu)
{
    this->m_name = stu.m_name;
    this->m_age = stu.m_age;
    this->m_score = stu.m_score;
    cout << "operator = was recalled!!" << endl;

    return *this;
}

void fun(Student stu)
{

}


int main()
{
    Student stu1("aaa", 16, 85.5);
    Student stu2("stu2", 16, 85.5);

    // 其他对象传入其中 作为参数
    Student stu3(stu2);

    Student stu4 = stu1;
    // 当俩初始化的类=类时 会触发操作符重载函数
    stu4 = stu2;
    stu4 = stu1;

    // 实例化的东西传到别的实例化的地方 就会触发拷贝构造函数
    Student stu5("fasf",0, 14.4);
    fun(stu5);




}