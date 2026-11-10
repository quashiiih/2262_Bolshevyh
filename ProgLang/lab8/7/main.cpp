#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> x;
    for (int i = 0; i < n; i++) {
        int t;
        std::cin >> t;
        x.push_back(t);
    }

    bool f = false;
    for (int e : x) {
        if (e < 0) {
            std::cout << e << std::endl;
            f = true;
            break;
        }
    }
    if (!f)
        std::cout << "Отрицательных чисел нет" << std::endl;
    return 0;
}
