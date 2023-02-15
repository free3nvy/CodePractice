#include<iostream>
#include<cstring>


using namespace std;
class Person{
public:
    // boy值为0 girl 为1 依次递增
    typedef enum {
        BOY = 0, 
        GIRL 
    }SexType;
    Person(char *n, int a,SexType s){
        name=new char[strlen(n)+1];
        strcpy(name,n);
        age=a;
        sex=s;
    }
    int get_age() const{
    
        return this->age; 
    }
    // 引用得话 大多返回this指针
    Person& add_age(int a){
        age+=a;
        return *this; 
    }
    ~Person(){
        delete [] name;
    }
private:
    char * name;
    int age;
    SexType sex;
};


int main(){
    char * const name = "zhangsan";
    Person p(name,20,Person::BOY); 
    p.add_age(2);
    cout<<p.get_age()<<endl;

    return 0;
}
