// Example 2: Input Format: arr[] = {4,1,2,1,2} Result: 4
#include <iostream>

using namespace std;

int findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            return arr[i]; // Found the element that appears only once
    }
    return -1; // Return -1 if no unique element is found
}

int main()
{
    int arr[] = {1, 1, 4, 2, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findUnique(arr, size) << endl; // Output: 4
    return 0;
}
