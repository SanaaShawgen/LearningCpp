#include <iostream>
#include <string>

class Ball
{
private:
    std::string m_color;
    int m_radius;

public:
    Ball()
    {
        m_color = "black";
        m_radius = 10;
    }
    Ball(std::string color)
    {
        m_color = color;
        m_radius = 10;
    }
    Ball(double radius)
    {
        m_color = "black";
        m_radius = radius;
    }
    Ball(std::string color, double radius)
    {
        m_color = color;
        m_radius = radius;
    }
    
    void print()
    {
        std::cout << "color: " << m_color << ", radius: " << m_radius << std::endl;
    }
};

int main()
{
	Ball def{};
	def.print();
 
	Ball blue{ "blue" };
	blue.print();
	
	Ball twenty{ 20.0 };
	twenty.print();
	
	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();
 
	return 0;
}