#include <iostream>

int main()
{
    int num;
    int sum = 0;
    while(std::cin >> num)
    {
        sum += num;
    }

    std::cout << "The sum of the numbers is " << sum << std::endl;
}