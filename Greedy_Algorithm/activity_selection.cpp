// Given n activities with start and finish times, select the maximum number of activities that do not overlap.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateActivities(vector<int> &start, vector<int> &finish)
{
    int n = start.size();
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = start[i];
        arr[i][1] = finish[i];
    }
    for (int i = 0; i < arr.size();i++){
        // cout
    }
}

int main()
{
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> finish = {2, 4, 6, 7, 9, 9};

    return 0;
}