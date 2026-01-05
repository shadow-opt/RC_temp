#include <iostream>
#include "MyAlgorithm.h"

int main()
{
    int x = 0;
    int y = 0;

    std::cout << "输入两个整数：";
    std::cin >> x >> y;

    std::cout << "Max: " << MyMax(x, y) << '\n';
    std::cout << "Min: " << MyMin(x, y) << '\n';
    std::cout << "Average: " << MyAverage(x, y) << '\n';
    std::cout << "Add: " << MyAdd(x, y) << '\n';
    std::cout << "Subtract (x - y): " << MyMinus(x, y) << '\n';
    std::cout << "Multiply: " << MyMultiply(x, y) << '\n';

    return 0;
}
