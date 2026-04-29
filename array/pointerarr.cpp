
#include<iostream>

using namespace std;

int *preparechaioders(int cups){
   int *order= new int[cups];
   for (int i = 0; i < cups;i++)
   {
       order[i] = (i+1)*10;
   }
   return order;
}




int main(){

    int a = 5;
    int *b;
    b = preparechaioders(a);
    cout << "Cups: " << b<<endl;
    for ( int i = 0; i < a; i++)
    {
        cout << "Cups: " << b[i]<<endl;
    }
    delete[] b;
    return 0;
}