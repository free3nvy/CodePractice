//
// Created by light on 19-12-9.
//

#include <iostream>

using namespace std;
// 在创建枚举时，将它们放在名称空间中，以便可以使用有意义的名称访问它们:
// 如果要使用以下 前面得指明namespace
namespace EntityType {
    enum Enum {
        Ground = 0,
        Human,
        Aerial,
        Total
    };
}

void foo(EntityType::Enum entityType)
{
    if (entityType == EntityType::Ground) {
        /*code*/
        cout << "l'm in!!";
    }
}

// enum class
enum class EntityType1 {
    Ground = 0,
    Human,
    Aerial,
    Total
};

void foo(EntityType1 entityType)
{
    if (entityType == EntityType1::Ground) {
        /*code*/
        cout << "enum class in!!";
    }
}

int main() {
    EntityType::Enum abc = EntityType::Aerial;
    foo(abc);

    EntityType1 aaa = EntityType1::Ground;
    foo(aaa);

    return 0;
}
