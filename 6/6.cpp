// Remove Duplicates in-place from Sorted Array
// Input: arr[1,1,2,2,2,3,3]
// Output: 3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int uniqueCount = 0;
    for (int i = 0; i < n; i++)
    {
        bool unique = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }
        if (unique)
        {
            uniqueCount++;
        }
    }
    cout << uniqueCount << endl;
    return 0;
}
