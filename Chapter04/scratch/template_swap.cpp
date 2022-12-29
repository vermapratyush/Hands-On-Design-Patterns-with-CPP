#include <iostream>
#include <utility>

using namespace std;

template<typename U, typename V> pair<V, U> swap(pair<U, V> p) {
    return pair<V, U>{p.second, p.first};
}
int main() {
    pair<string, int> p1 = make_pair<string, int>("two", 2);
    cout<<p1.first << " " << p1.second<<endl;
    pair<int, string> p2 = swap<string, int>(p1);
    cout<<p2.first << " " << p2.second<<endl;
    return 0;
}