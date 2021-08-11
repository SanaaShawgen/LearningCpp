#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string m_name{};
    double m_hp{};
    int m_level;
public:
    string Getname()
    {
        return m_name;
    }
    void Setname(string name)
    {
        string error1 (",");
        string error2 ("'");
        string error3 (";");
        size_t found1 = name.find(error1);
        size_t found2 = name.find(error2);
        size_t found3 = name.find(error3);      
        if (found1!=string::npos)
        {
            cout << "error, there is , in the name" << endl;
        }
        if (found2!=string::npos)
        {
            cout << "error, there is ' in the name" << endl;
        }
        if(found3!=string::npos)
        {
            cout << "error, there is ; in the name" << endl;
        }
        else
        {
            m_name=name;
        }
    }
    double Gethp()
    {
        return m_hp;
    }
    void Sethp(double hp)
    {
        if(hp>0 && hp<=100)
        {
            m_hp=hp;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    int Getlevel()
    {
        return m_level;
    }
    void Setlevel(int level)
    {
        if(level>=1)
        {
            m_level=level;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    void print()
    {
        cout << "The name: " << m_name << endl;
        cout << "The hp: " << m_hp << endl;
        cout << "The level: " << m_level << endl;
    }
};

int main()
{
    Player p;
    p.Setname("sa,na;a");
    p.Sethp(90);
    p.Setlevel(55);
    p.print();
}