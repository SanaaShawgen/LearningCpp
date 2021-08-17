#include "co.h"
#include <iostream>
#include <string>

Ball::Ball()
{
    m_color = "black";
    m_radius = 10;
};
Ball::Ball(std::string color)
{
    m_color = color;
    m_radius = 10;
};
Ball::Ball(double radius)
{
    m_color = "black";
    m_radius = radius;
};
Ball::Ball(std::string color, double radius)
{
    m_color = color;
    m_radius = radius;
};
void Ball::print()
{
        std::cout << "color: " << m_color << ", radius: " << m_radius << std::endl;
};