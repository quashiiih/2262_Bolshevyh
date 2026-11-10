#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int &e : v) std::cin >> e;

    int last = v.back();
    int posit = 0, negat = 0;

    for (int &e : v) {
        e += last;
        if (e > 0) posit++;
        if (e < 0) negat++;
    }

    std::cout << posit << " " << negat << std::endl;
}
