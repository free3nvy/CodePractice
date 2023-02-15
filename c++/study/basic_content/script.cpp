#include <iostream>
#include <malloc.h>
using namespace std;
#define exp(s) printf("test s is:%s\n",s)
#define exp1(s) printf("test s is:%s\n",#s)
#define exp2(s) #s 

#define expA(s) printf("前缀加上后的字符串为:%s\n",gc_##s)  //gc_s必须存在
// 注意事项2
#define expB(s) printf("前缀加上后的字符串为:%s\n",gc_  ##  s)  //gc_s必须存在
// 注意事项1
#define gc_hello1 "I am gc_hello1"

int a = 5;

#define f1() cout<<"f1()"<<endl;
#define f2() cout<<"f2()"<<endl;

#define func() {f1(); f2();}
#define func1() \
    do{\
        f1();\
        f2();\
    }while(0)



int main() {

    func();
    func1();



    
    exp("hello");
    exp1(fhello);

    string str = exp2(   bac );
    cout<<str<<" "<<str.size()<<endl;
    /**
     * 忽略传入参数名前面和后面的空格。
     */
    string str1 = exp2( asda  ba  quchao fuck fxt c );
    /**
     * 当传入参数名间存在空格时，编译器将会自动连接各个子字符串，
     * 用每个子字符串之间以一个空格连接，忽略剩余空格。
     */
    cout<<str1<<" "<<str1.size()<<endl;

    const char * gc_hello = "I am gc_qhello";
    int gc_ = 1;
    int gc_s = 1;
    expA(hello1);


    
    return 0;
}