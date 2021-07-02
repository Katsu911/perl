#include <iostream>
#include <random>
#include <set>
int main() {
    std::random_device rnd;
    std::mt19937 mt(rnd());
    std::uniform_int_distribution<> rand100(0, 9999999);
    std::set<int> s;
    for (int i = 0; i < 10000000; ++i) {
        s.insert(rand100(mt));
    }
    for(auto itr = s.begin(); itr != s.end();++itr) {
        std::cout << *itr << "\n";
    }
    return 0;
}
