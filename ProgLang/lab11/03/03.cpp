#include <iostream>
#include <vector>

void dosome_1(const std::vector<int> &v){
    int s = 0;
    for (int x: v){
        s += x;
    }
    std::cout << "sum = " << s << std::endl;
}

void dosome_2(std::vector<int> &v){
    int s = 0;
    for (int &x: v){
        s += x;
    }
    std::cout << "sum = " << s << std::endl;
}

void dosome_3(const std::vector<int> v){
    int s = 0;
    for (int x: v){
        s += x;
    }
    std::cout << "sum = " << s << std::endl;
}

void dosome_4(std::vector<int> v){
    int s = 0;
    for (int &x: v){
        s += x;
    }
    std::cout << "sum = " << s << std::endl;
}

int main(){
    std::vector<int> v {1, 2, 3, 4, 5};
    dosome_1(v);
    dosome_2(v);
   // std::cout  << v[0] << v[1] << v[2] << v[3] << v[4] << std::endl;
    //v = {1, 2, 3, 4, 5};
    dosome_3(v);
    dosome_4(v);
   // std::cout  << v[0] << v[1] << v[2] << v[3] << v[4] << std::endl;
    
    dosome_1({1,2,3});
    dosome_3({1,2,3});
    dosome_4({1,2,3});

    return 0;
}