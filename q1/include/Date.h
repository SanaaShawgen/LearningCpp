#pragma once

class Date  
{
private:
    int m_day;
    int m_month;
    int m_year;
public:
    Date();
    Date(int day, int month, int year);

    int GetDay() {return m_day;}
    int GetMonth() {return m_month;}
    int GetYear() {return m_year;}

    void SetDay(int d);
    void SetMonth(int m);
    void SetYear(int y);

    void print();

    void copy(Date &d);
};