#include <iostream>

class IntPair
{
public:
    int m_a {};
    int m_b {};

    void set(int x, int y)
    {
        m_a=x;
        m_b=y;
    }
    void print()
    {
        std::cout << "Pair (" << m_a << ", " << m_b << ")" << std::endl;
    }
};
int main()
{
    IntPair p1;
    p1.set(1, 1);

    IntPair p2 {2,2};

    p1.print();
    p2.print();

    return 0;
}