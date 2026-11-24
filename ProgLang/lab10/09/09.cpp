#include <iostream>
using namespace std;

int main() {
    int a[10];

    cout << &a[8] - &a[3] << endl;

    return 0;
}
