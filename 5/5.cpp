// Check if an Array is Sorted
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: True.

#include <iostream>
#include <vector>
using namespace std;
bool Check(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr;
    arr = {3, 7, 6};
    if (Check(arr))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}