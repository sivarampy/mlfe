#include <iostream>
#include <vector>

#include "lafe/structures.hpp"

template <typename T>
void swap(T &a, T &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    std::cout << "Solving Equation!\n";

    std::vector<std::vector<int>> data = {{1, 2, 3}, {3, 4, 5}};
    LAFECPP::Matrix<int> m(data);
    unsigned int rows = m.matrixRows();
    std::cout << rows << '\n';
    unsigned int cols = m.matrixClos();
    std::cout << cols << '\n';

    int a = 5;
    int b = 4;
    swap(a, b);
    std::cout << a << '\t' << b << '\n';

    return 0;
}