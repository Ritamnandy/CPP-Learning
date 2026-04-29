//reverse in a groups
#include<iostream>
#include<vector>

using namespace std;
void reverseingroup(vector<int>&arr,int k){
    int size = arr.size(),i;
    for (i = 0; i < size;i+=k)
    {
      int  left = i;
      int right = min(i + k - 1, size - 1);
        while (left<right)
        {
            swap(arr[left++], arr[right--]);
        }
        
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    reverseingroup(arr, 3);
    cout << "\nAfter reverse:- " << endl;
    for (int i : arr)
    {
        cout << i << " ";
    }
    
    return 0;
}