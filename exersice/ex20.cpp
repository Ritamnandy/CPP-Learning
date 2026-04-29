//Q16. Write a Program to Check if Two Arrays Are Equal or Not.


#include <iostream>
#include<algorithm>

using namespace std;

bool isEqual(int a[],int b[],int size_a,int size_b){

   
    if(size_a!=size_b){
        return false;
    }
    sort(a, a+size_a);
    sort(b, b+size_b);
    for (int i = 0; i < size_a;i++)
    {
        if(a[i]!=b[i])
        {
            return false;
        }
    }
    return true;
}


int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {6, 5, 4, 3, 2, 1};
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    if(isEqual(a,b,n,m)){
    cout << "Two arrays are equal" << endl;
    }else{
    cout << "Two arrays are  not equal" << endl;

    }
    return 0;
}