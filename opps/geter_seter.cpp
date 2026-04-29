
//Geter and seter 
#include<iostream>
#include<vector>

using namespace std;

class Student{
    private:
        string studentName;
        int Roll;
        vector<string> Subject;
        //getter
        vector<string> getSubject(){
            return Subject;
        }
        string getstudentName( ){
            return studentName;
        }
        int getRoll(){
            return Roll;
        }
    public:
    //setter    
        void setstudentName(string name){
            studentName = name;
        }
        void setRoll(int roll){
            Roll = roll;
        }
        void setSubject(vector<string>sub){
            Subject = sub;
        }
        //class's methods
        void display(){
            cout << " Student name " << studentName << endl;
            cout << " Student roll " << Roll << endl;
            cout << " Students subjects:- ";
            for (string sub : Subject)
            {
                cout << sub << " ";
            }
            cout << endl;
        }
};

int main(){

    Student s1;
    s1.setstudentName("Jhon");
    s1.setRoll(20);
    s1.setSubject({"math", "physic", "computer"});
    s1.display();
    return 0;
}