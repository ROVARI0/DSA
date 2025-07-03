// Example 1:MOVE ZEROS TO END
// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0

#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZero(vector<int> &arr, int size)
{
    int j = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        return arr;
    }
    for (int i = j + 1; i < size; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 0, 1};
    int size = arr.size();

    vector<int> res = moveZero(arr, size);
    for (auto &pt : res)
    {
        cout << pt << " ";
    }
    return 0;
}
