#include <iostream>
using namespace std;


// 类模板







template <typename T>

int compare(const T &v1, const T &v2){
    if (v1 < v2) return 1;
    if (v2 < v1) return -1;
    return 0;
}

int main(){

    const int v1 = 3;
    const int v2 = 2;

    cout << compare(v1, v2) << endl;

}