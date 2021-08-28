#pragma once

#include "Date.h"
#include <string>

class Student
{
private:
    static constexpr int m_grades_size = 3;
    int m_id;
    std::string m_name;
    Date m_birth;
    int m_grades[m_grades_size];
public:
    Student();
    Student(int id, std::string name, Date birth, int grades[], int grades_size);

    int GetGradesSize() {return m_grades_size;}

    int GetId() {return m_id;}

    void SetId(int id);
    
    void copy(Student &s);

    double avg();

    void Print();

};