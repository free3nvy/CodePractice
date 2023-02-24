#include <iostream>
using namespace std;

class Flyable
{
    public:
        virtual void takeoff() = 0;
        virtual void land() = 0;
};

class Bird : public Flyable
{
    // 没有...的写法！ 就是做点啥的意思
    public:
        void foraging() {}
        virtual void takeoff() {}
        virtual void land() {}
        virtual ~Bird(){}
};

class Plane: public Flyable
{
    public:
        void carry(){}
        virtual void takeoff(){}
        virtual void land() {}
};

class type_info
{
    public:
        const char* name() const;
        bool operator == (const type_info & rhs) const;
        bool operator != (const type_info & rhs) const;
        int before(const type_info & rhs) const;
        virtual ~type_info();

    private:
};


void doSomething(Flyable *obj)
{
    obj->takeoff();

    cout << typeid(*obj).name() << endl;
    
    if(typeid(*obj) == typeid(Bird))
    {
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }

    obj->land();
}

int main(){
    Bird *b = new Bird();
    doSomething(b);
    delete b;
    b = nullptr;
    return 0;
}