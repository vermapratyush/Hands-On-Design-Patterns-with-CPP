#include <iostream>
#include <string>
#include <cstring>
#include <utility>
#include <algorithm> 

using namespace std;

template<typename U, typename V>
struct custom_pair {
    U first;
    V second;
    int three;
    custom_pair(U f, V s) {
        this->first = f;
        this->second = s;
    }
};

template<typename U, typename V> auto swap(pair<U, V> p) {
    return make_pair(p.second, p.first);
}

template<typename T> auto swap_auto(T p) {
    return make_pair(p.second, p.first);
}

template<> auto swap_auto<string>(string p) {
    reverse(p.begin(), p.end());
    return p;
}

int main() {
    auto p1 = make_pair<string, int>("two", 2);
    cout<<p1.first << " " << p1.second<<endl;
    auto p2 = swap(p1);
    cout<<p2.first << " " << p2.second<<endl;

    auto p3 = make_pair<string, int>("three", 3);
    cout<<p3.first << " " << p3.second<<endl;
    auto p4 = swap_auto(p3);
    cout<<p4.first << " " << p4.second<<endl;

    auto p5 = custom_pair<string, int>("four", 4);
    cout<<p5.first << " " << p5.second<<endl;
    auto p6 = swap_auto(p5);
    cout<<p6.first << " " << p6.second<<endl;

    string s = "abcdef";
    cout << swap_auto(s) <<endl;
    return 0;
}