#include<iostream>

using namespace std;

int main()
{
    bool isStudent;
    int cups;
    cout << "Are you a student or not(1 for yes and 0 for no):- ";
    cin >> isStudent;
    cout << "How many cups of tea have you purchassed? ";
    cin >> cups;
    if(isStudent||cups>15)
    {
        cout << "discount posiable";
    }else{
        cout << "discount not posiable";

    }
    return 0;
}