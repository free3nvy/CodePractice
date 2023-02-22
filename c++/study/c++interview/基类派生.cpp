
#include <iostream>

using namespace std;



class Animal{
      public:
          virtual void eat()
          {
          	cout<<"能吃什么就吃什么"<<endl;
          }
          // 纯虚函数
          virtual void run(){}
      private:
          int name;
 };
 class Dog  : public Animal{
      public:
          virtual void eat(){
          	cout<<"吃狗粮"<<endl;
          }
          virtual void shout(){}
      private:
      	int age;
 };
 int main()
 {
 	Dog dog;
 	Animal& animal1 = dog;
    Animal* animal2 = &dog;
    Animal* animal3 = new Dog();
    // 派生类直接赋值给基类 则产生类型问题 gcc就会回避多态操作
    Animal animal4 = dog;

    // 把派生的东西放到基类里面去 这才是派生的实现
    animal1.eat();
    animal2->eat();



    // 这个样子不能实现多态 
    animal4.eat();

    // 派生能否等于base？ 不能


 	// Animal* animal2 = new Dog();
 	// Animal animal3 = dog;
 	
 	// animal1.eat();
 	// animal2->eat();
 	// animal3.eat();
 }