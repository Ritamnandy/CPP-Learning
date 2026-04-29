
//parameter constructor
#include<iostream>
#include<vector>

using namespace std;

class Student{
    public:
    //paramter constructor
        Student(string name,int age,vector<string> subs){
            Studentname = name;
            Studentage = age;
            subjects = subs;
        };
        string Studentname;
        int Studentage;
        vector<string> subjects;
        void display(){
            cout << "Student name " << Studentname << endl;
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
    mystudent.display();
    return 0;
}