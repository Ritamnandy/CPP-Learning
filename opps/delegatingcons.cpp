//delegating constructor
#include<iostream>
#include<vector>

using namespace std;

class Student{
    public:
        string sname;
        int sage;
        Student(string name) : Student(name, 20){};
        Student(string name ,int age){
            cout << "Constructor called" << endl;
            sname = name;
            sage = age;
        };
        void display(){
            cout << "Student name " << sname << endl;
            cout << "Student age " << sage << endl;
            cout << "Student subjects:- " ;
            cout << endl;
        }
};

int main(){

    Student mystudent("jhon");
    mystudent.display();
    return 0;
}