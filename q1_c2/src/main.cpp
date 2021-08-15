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
 
int main()
{
    int number1 = readNumber();
    int number2 = readNumber();
    writeAnswer(number1 + number2);
    return 0;
}