// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 2,3,4,5,1
#include <iostream>
#include <vector>

using namespace std;
void solve(vector<int> &arr, int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " " ;
    }
}
int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int size = arr.size();
    solve(arr, size);
    return 0;
}
