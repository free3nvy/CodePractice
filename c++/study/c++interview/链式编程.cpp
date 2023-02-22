// 链子编程
#include <iostream>
#include <vector>

using namespace std;



class Person{
public:
    int age;
    Person& AddAge(int page){
        age+=page;
        return *this;
    }
    Person(){
        cout<<"构造函数执行"<<endl;
    }
    // Person(const Person & p){
        // age=p.age;
        // cout<<"拷贝构造函数执行"<<endl;
    // }
    ~Person(){
        cout<<"析构函数执行"<<endl;
    }
    Person GetPerson(Person & p){
        Person ptmp;
        ptmp.age=p.age+2;
        return ptmp;
    }
};
 
 
 
int main(int argc, const char * argv[]) {
    Person p;
    p.age=20;
    // 因为返回了一个this指针 所以可以进行链式编程
    p.AddAge(1).AddAge(2).AddAge(3); //对自己连续进行链式编程。
    p.AddAge(1);
    cout<<p.age<<endl;
    cout << "Hello, World!\n";
    return 0;
}