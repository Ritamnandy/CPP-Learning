//default constructor
#include<iostream>
#include<vector>

using namespace std;

class Student{
    public:
    //default constructor
        Student(){
            cout << "Class called" << endl;
            name = "ram";
            age = 20;
            subjects = {"math", "cs", "english"};
        };
        string name;
        int age;
        vector<string> subjects;
        void display(){
            cout << "Student name " << name << endl;
            cout << "Student age " << age << endl;
            cout << "Student subjects:- " ;
            for(string sub:subjects){
                cout << sub << " ";
            }
            cout << endl;
        }
};

int main(){

    Student mystudent;
    mystudent.display();
    return 0;
}