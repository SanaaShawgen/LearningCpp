#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: ";
    int x;
    std::cin >> x;
    return x;
}
 
void writeAnswer(int sum)
{
    std::cout << "The answer is: " << sum << std::endl;
}