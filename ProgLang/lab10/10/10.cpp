#include <iostream>
using namespace std;

int main() {
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = x + 5;
    int *q = &x[5];

    cout << "p == q: " << (p == q) << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;

    return 0;
}
