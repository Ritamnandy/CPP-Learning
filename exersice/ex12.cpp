

#include<iostream>

using namespace std;

int main(){

    int a = 10, b = 15, c = 18;

    int result = (a > b && a > c) ? a : (b > c) ? b
                                                : c;

    cout << "Highest number:- " << result<<endl;

    return 0;
}