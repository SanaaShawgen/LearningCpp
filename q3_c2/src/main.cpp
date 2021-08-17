#include "io.h"
#include <iostream>

int main()
{
    int number1 = readNumber();
    int number2 = readNumber();
    int sum;
    sum = number1 + number2;
    writeAnswer(sum);
    return 0;
}
