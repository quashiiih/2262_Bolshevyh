#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(10, 1);
    int count1 = 0;
    {
        int __i = 0, __n = v.size();
        for (const int &i = __i; i < __n; __i++) {
            v.push_back(i);
            count1++;
        }
    }
    cout << "forc: итераций " << count1 << ", размер вектора " << v.size() << endl;

    vector<int> w(10, 1);
    int count2 = 0;
    for (int i = 0; i < w.size(); i++) {
        w.push_back(i);
        count2++;
        if (count2 == 1000) {
            cout << "for: остановлен принудительно на 1000 итерациях" << endl;
            break;
        }
    }
    cout << "for: итераций " << count2 << ", размер вектора " << w.size() << endl;

    {
        int __i = 0, __n = 3;
        for (const int &i = __i; i < __n; __i++)
            cout << i << " ";
    }
    {
        int __i = 5, __n = 8;
        for (const int &k = __i; k < __n; __i++)
            cout << k << " ";
    }
    cout << endl;
    return 0;
}
