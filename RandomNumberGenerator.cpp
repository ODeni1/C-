#include <iostream>

int main()
{

    srand(time(NULL));

    int num1 = (rand() % 100) + 1;
    int num2 = (rand() % 1000) + 2;
    int num3 = (rand() % 3);

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}