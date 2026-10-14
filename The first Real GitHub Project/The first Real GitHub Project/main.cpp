#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    std::cout << "Calculator App" << std::endl;
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;

    return 0;
}