#include <iostream>
 
void blowUpWorld()
{
    std::cout << "Kaboom!\n";
} 
 
int main()
{
    std::cout << "Should we blow up the world again? (y/n): ";
    char c{};
    std::cin >> c;
 
    if (c=='y'); // accidental null statement here
        blowUpWorld(); // so this will always execute since it's not part of the if-statement
 
    return 0;
}
