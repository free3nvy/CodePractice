#include <iostream>
using namespace std;

namespace Color{
    enum Type{
        RED = 15,
        YELLOW,
        BLUE
    };
};


// 作用域不受限 命名冲突
// enum Color {RED, BLUE};
// enum Feeling {EXCITED, BLUE};

int main(){
    return 0;
}