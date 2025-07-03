// Input: arr[]= 1 2 3 4 5, num = 3
// Output: 2

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int size = arr.size();
    int n = 6;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << i << endl;
        }
    }
    return 0;
}
