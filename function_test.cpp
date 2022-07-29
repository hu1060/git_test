#include <iostream>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}


int main()
{
    int a = 5, b = 4;
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    return 0;
}
