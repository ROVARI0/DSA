#include <iostream>
#include <vector>
using namespace std;

int findLargest(vector<int> &arr)
{
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr;
    arr = {2, 4, 6, 8};
    int result = findLargest(arr);
    cout << "Largest no is :" << result << endl;
    return 0;
}