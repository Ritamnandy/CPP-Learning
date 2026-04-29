
//copy constructor
#include<iostream>
#include<vector>

using namespace std;

class Student{
    public:
    //copy constructor
        Student(string name,int age,vector<string> subs){
            Studentname =new string(name);
            Studentage = age;
            subjects = subs;
        };
        string *Studentname;
        int Studentage;
        vector<string> subjects;
        Student(const Student &s){
            Studentname =new string(*s.Studentname);
            Studentage = s.Studentage;
            subjects = s.subjects;
            cout << "\nCopy constructer called" << endl;
        }
        //destructor called
        ~Student(){
            delete Studentname;
            cout << "\ndistructer called";
        }
        void display(){
            cout << "Student name " << *Studentname << endl;
            cout << "Student age " << Studentage << endl;
            cout << "Student subjects:- " ;
            for(string sub:subjects){
                cout << sub << " ";
            }
            cout << endl;
        }
};

int main(){

    Student mystudent("Ram",20,{"math","english"});
    Student s = mystudent;
    mystudent.display();
    cout << endl;
    *mystudent.Studentname = "sam";
    cout << "After value change" << endl;
    mystudent.display();
    s.display();
    return 0;
}