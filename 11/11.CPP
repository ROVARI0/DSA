// Given an array that contains only 1 and 0 return
// the count of maximum consecutive ones in the array.
// input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3

#include <iostream>
#include <vector>

using namespace std;
int maxOne(vector<int> arr, int size)
{
    int cnt = 0, maximum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maximum = max(maximum, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maximum;
}
int main()
{
    vector<int> arr = {1, 1, 0, 0, 0, 1,1, 1, 1};
    int size = arr.size();
    int res = maxOne(arr, size);
    cout << res << endl;
    return 0;
}


