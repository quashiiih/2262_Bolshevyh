#include <iostream>
using namespace std;

int main() {
    {
    int x = 1, y = 2;
    int *p = &y, *q = &x;
    if (p < q)
        std::cout << "Yes ";
    else
        std::cout << "No ";
    }

    {
    int y = 1, x = 2;
    int *p = &y, *q = &x;
    if (p < q)
        std::cout << "Yes ";
    else
        std::cout << "No ";
    }

    {
    static int x = 1, y = 2;
    int *p = &y, *q = &x;
    if (p < q)
        std::cout << "Yes ";
    else
        std::cout << "No ";
    }

}
