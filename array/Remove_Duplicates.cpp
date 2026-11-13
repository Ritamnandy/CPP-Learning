
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    // {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[k - 1])
        {
            swap(nums[i], nums[k]);
            k++;
        }
    }
    
    cout << "After removing duplicates: ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "\nAfter removing duplicates new array length: " << k << endl;

    return 0;
}