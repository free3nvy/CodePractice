#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

// 模板函数 连在一起！！ 在下面可声明模板函数！！
template <typename T>
// 里面放数据 而非对象
struct S{
    // 里面放T类型
    vector<T> v;

    // 初始化？？？
    S(initializer_list<T> l) : v(l){
        cout << "con with a " << l.size() << "\n";
    }
    void append(initializer_list<T> l)
    {
        v.insert(v.end(), l.begin(), l.end());
    }
    pair<const T*, size_t> c_arr() const{
        return {&v[0], v.size()};
    }
    

};

template <typename T>
void templated_fn(T){}


int main()
{
    // 这个s就是上面的l
    S<int> s = {1, 2, 3, 4, 5};
    s.append({6, 7 ,8});
    cout << s.c_arr().second ;
    // 字符串形式也可以!!
    S<string> s1 = {"qww", "asf", "fasf", "asf", "fasf"};

    for (auto n : s.v)
    {
        cout << n;
    }
    cout << '\n';
    
    for(int x : {-1, -2, -3})
        cout <<x <<' ';
    cout <<'\n';

    auto al = {10, 11, 12};

    templated_fn<initializer_list<int>>({1, 2, 3});
    templated_fn<vector<int>>({1, 2, 3});
    
}
