
#include<iostream>
// #include<string>
#include<vector>

using namespace std;

class Chai{
    public:
        //data members
        string teaName;
        int servings;
        vector<string> ingredients;

        //data methods(member function)

        void displayChaidetails(){
            
            cout << "Tea Name: " << teaName << endl;
            cout << "Serving: " << servings << endl;
            cout << "Ingredients: ";
            for (string ingredient : ingredients)
            {
                cout << ingredient << " ";
            }
            cout<<endl;
        }  

};

int main(){

    Chai chai1,chai2;
    chai1.teaName="lemon tea";
    chai1.servings = 20;
    chai1.ingredients = {"water", "lemon", "suger", "tea"};
    chai1.displayChaidetails();
    chai2.teaName = "Massia tea";
    chai2.servings = 20;
    chai2.ingredients = {"water", "massia", "suger", "tea"};
    chai2.displayChaidetails();
    return 0;
}