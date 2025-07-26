// Count Maximum Consecutive One's in the array
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3

#include <iostream>
#include <vector>
using namespace std;

int maximumConsecutive(vector<int> &arr, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
    }
    int maximum = max(count, maximum);
    return maximum;
}
int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    int size = arr.size();
    int result = maximumConsecutive(arr, size);
    cout << result << endl;
    return 0;
}