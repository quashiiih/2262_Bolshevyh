#include <iostream>
using namespace std;

int main() {
    int a = 6;
    int b = 3;

    int *p = &a;
    int &ref = a;

    int product = a * b;
    int resultAnd = a & b;

    *p = 10;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;
    cout << "product = " << product << endl;
    cout << "bitwise AND = " << resultAnd << endl;
    cout << "address of a = " << &a << endl;

    return 0;
}
