#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findSeLargest(vector<int> &arr)
{
    int smallest = INT_MAX;
    int Ssmallest = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            Ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < Ssmallest) {
            Ssmallest = arr[i];
        }
    }
    return Ssmallest;
}

int main()
{
    vector<int> arr;
    arr = {2, 4, 6, 8};
    int result = findSeLargest(arr);
    cout << "Second Smallest no is :" << result << endl;
    return 0;
}