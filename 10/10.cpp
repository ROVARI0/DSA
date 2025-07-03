// Find the missing number in an array
// Input Format: N = 5, array[] = {1,2,4,5}
// Result: 3

#include <iostream>
#include <vector>

using namespace std;
int misssinInt(vector<int> &arr, int size)
{
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= size; i++)
    {
        sum1 += i;
    }
    for (int j = 0; j < arr.size(); j++)
    {
        sum2 += arr[j];
    }

    return sum1 - sum2;
}
int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int size = 5;
    int res = misssinInt(arr, size);
    cout << res;
    return 0;
}