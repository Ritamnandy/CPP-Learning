
#include<iostream>
using namespace std;

void printarray(int *size){
    int *b = size;
    *b += 10;
    cout << *b<<endl;
}
int main(){
    int a = 5;
    printarray(&a);
    cout << a;
    return 0;
}