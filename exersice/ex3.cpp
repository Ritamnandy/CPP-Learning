#include<iostream>

using namespace std;

int main()
{
    int number = 10, flag = 0;
    for (int i = 2; i <= number / 2;i++)
    {
        if(number%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout << " Not Prime"<<endl;
    }else{
        cout << "Prime"<<endl;
    }
    int n = 5;
    if(n=1)
    {
        cout << "Hi" <<endl;
    }else if(n==5){
        cout << "Hello" <<endl;
    }else{
        cout << "World" <<endl;
    }
    return 0;
}