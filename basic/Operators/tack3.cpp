#include<iostream>

using namespace std;

int main()
{
    int cups;
    cout << "Enter the number of cups you have:- ";
    cin >> cups;
    if (cups>=20)
    {
        cout << "You will get \"Gold Badge\""<<endl;
    }else if(cups>=10&&cups<20)
    {
        cout << "You will get \"Silver Badge\""<<endl;
    }else{
        
        cout << "You will get \"Brong Badge\""<<endl;
    }
    return 0;
}