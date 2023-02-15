#include <iostream>
#include <cstring>
using namespace std;
struct Person
{ //职工基本信息的结构
    double salary;
    char *name;
};
class SalaryManaege
{
    Person *employ; //存放职工信息的数组
    int max;        //数组下标上界
    int n;          //数组中的实际职工人数
public:
    SalaryManaege(int Max = 0)
    {
        max = Max;
        n = 0;
        // employ 是个Person结构！
        employ = new Person[max];
    }
    //返回引用特性是可以直接在放在左值，直接使用
    double &operator[](char *Name)
    { //重载[]，返回引用
        Person *p;
        for (p = employ; p < employ + n; p++)
            //如果存在处理
            if (strcmp(p->name, Name) == 0)
                return p->salary;
        //不存在情况处理 有点类似init 初始为空的时候
        p = employ + n++;
        p->name = new char[strlen(Name) + 1];
        strcpy(p->name, Name);
        p->salary = 0;
        return p->salary;
    }

    void display()
    {
        for (int i = 0; i < n; i++)
            cout << employ[i].name << "   " << employ[i].salary << endl;
    }
    ~SalaryManaege() {
        delete[] employ;
    }
};
int main()
{
    SalaryManaege s(3);
    // 当类的中括号里面出现string时 进行一系列操作!!牛逼
    s["张三"] = 2188.88;
    s["里斯"] = 1230.07;
    s["王无"] = 3200.97;
    s["王无"] = 2;
    cout << "张三\t" << s["张三"] << endl;
    cout << "里斯\t" << s["里斯"] << endl;
    cout << "王无\t" << s["王无"] << endl;

    cout << "-------下为display的输出--------\n\n";
    s.display();
}
