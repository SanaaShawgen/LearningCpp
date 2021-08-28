#pragma once

#include "Student.h"
#include <iostream>

class Classroom
{
private:
    std::string m_id;
    static constexpr int m_class_1_size = 5;
    Student m_students_1[m_class_1_size];
public:
    Classroom(int id, Student students_1[5], int class_1_size);

    double GetClassAvg();

    void copy();
};