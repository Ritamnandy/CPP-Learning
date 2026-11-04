#include<iostream>

using namespace std;

int main()
{
    int teabags;
    cout << "Enter the number of bags:- ";
    cin >> teabags;
    if (teabags<10)
    {
        teabags += 5;
    }
    cout << "Total tea bags are:- "<<teabags<<endl;
    
    return 0;
}