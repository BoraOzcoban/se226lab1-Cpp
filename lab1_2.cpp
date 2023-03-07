#include <iostream>

int main2() {
    int var1, var2;
    std::cout << "Enter the value of var1: ";
    std::cin >> var1;
    std::cout << "Enter the value of var2: ";
    std::cin >> var2;

    int sum = var1 + var2;
    int diff = var1 - var2;
    if(diff < 0){
        diff = - diff;
    }
    int prod = var1 * var2;

    std::cout << "var1 = " << var1 << std::endl;
    std::cout << "var2 = " << var2 << std::endl;
    std::cout << "sum = " << sum << std::endl;
    std::cout << "diff = " << diff << std::endl;
    std::cout << "prod = " << prod << std::endl;

    return 0;
}
