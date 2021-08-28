#include "Student.h"
#include <string>
#include <iostream>

void Student::SetId(int id)
{
    std::string id1 = std::to_string(id);
    if(id1.length() !=5)
    {
        exit(3);
    }
    m_id=id;
};

Student::Student()
{

}
Student::Student(int id, std::string name, Date birth, int grades[], int grades_size)
{
    std::string id1 = std::to_string(id);
    if(id1.length() !=5)
    {
        exit(3);
    }
    m_id = id;
    m_name = name;
    m_birth.copy(birth);
    for(int i=0; i<grades_size; i++)
    {
        m_grades[i] = grades[i];
    }
}
void Student::copy(Student &s)
{
    m_id = s.m_id;
    m_name = s.m_name;
    m_birth.copy(s.m_birth);
    for(int i=0; i<m_grades_size; i++)
    {
        m_grades[i] = s.m_grades[i];
    }
}
double Student::avg()
{
    double average = 0;
    for(int i=0; i<m_grades_size; i++)
    {
        average += m_grades[i];
    }
    average = average/m_grades_size;
    return average;
}
void Student::Print()
{
    std::cout << "Student ID: " << m_id << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Name: " << m_name  << "," << std::endl;
    std::cout << "Birthday: " ;
    m_birth.print(); 
    std::cout << "," << std::endl;
    std::cout << "Average: " << avg() << std::endl;
    std::cout << std::endl;
}



