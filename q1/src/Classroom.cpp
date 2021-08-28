#include "Classroom.h"
#include <iostream>

Classroom::Classroom(int id, Student students_1[5], int class_1_size)
{
    m_id = id;
    for(int i=0; i<class_1_size; i++)
    {
        m_students_1[i].copy(students_1[i]);
    }
}
double Classroom::GetClassAvg()
{
    double sum=0;
    for(int i=0; i<m_class_1_size; i++)
    {
        sum += m_students_1[i].avg();
    }
    double avg;
    avg = sum/m_class_1_size;
    return avg;
};