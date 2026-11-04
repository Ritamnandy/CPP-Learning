
#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int *b = &a;
    int **c = &b;
    cout << "a value " << a<<endl;
    cout << "a value " << **c<<endl;
    return 0;
}