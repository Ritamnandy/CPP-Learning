
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2)
{
    int k = arr1.size() - 1;
    int i = k / 2;
    int j = arr2.size() - 1;
    while (j >= 0)
    {
        if (arr2[j] > arr1[i])
        {
            swap(arr2[j], arr1[k]);
            j--;
        }
        else
        {
            swap(arr1[i], arr1[k]);
            i--;
        }
        k--;
    }
}

int main()
{
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    merge(nums1, nums2);
    cout << "After sort: ";
    for (int i : nums1)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}