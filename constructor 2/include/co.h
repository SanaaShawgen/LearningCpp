#pragma once
#include <string>

class Ball
{
private:
    std::string m_color;
    int m_radius;

public:
    Ball();

    Ball(std::string color);

    Ball(double radius);

    Ball(std::string color, double radius);

    void print();

};