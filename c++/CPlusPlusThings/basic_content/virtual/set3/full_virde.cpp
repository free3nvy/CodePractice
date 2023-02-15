/**
 * @file full_virde.cpp
 * @brief 将基类的析构函数声明为虚函数
 * 输出结果：
 *      Constructing base
 *      Constructing derived
 *      Destructing derived
 *      Destructing base
 * @author 光城
 * @version v1
 * @date 2019-07-24
 */
#include<iostream> 

using namespace std; 

class base { 
    public: 
        base()      
        { cout<<"Constructing base \n"; } 
        virtual ~base() 
        { cout<<"Destructing base \n"; }      
}; 

class derived: public base { 
    public: 
        derived()      
        { cout<<"Constructing derived \n"; } 
        ~derived() 
        { cout<<"Destructing derived \n"; } 
}; 

int main(void) 
{ 
    // 先调用基类 再调用派生类
    derived *d = new derived();   
    base *b = d; 
    // 调用destruct时候 派生类嵌套在基类里面
    delete b; 
    return 0; 
} 
