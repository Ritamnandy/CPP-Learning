
#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int roll;
    char grade;

public:
    Student(int r, char g, string n)
    {
        name = n;
        grade = g;
        roll = r;
    }
    void display()
    {
        cout << "Name: " << this->name << " Roll: " << this->roll << " Grade: " << this->grade;
    }
};

int main()
{

    Student s1(10, 'C', "Ritam Nandy");

    s1.display();

    return 0;
}