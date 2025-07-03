#include <iostream>
#include <vector>
using namespace std;

int findSeLargest(vector<int> &arr)
{
    int largest = arr[0];
    int Slargest = arr[-1];
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            Slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && Slargest > arr[i])
        {
            Slargest = arr[i];
        }
    }
    return Slargest;
}

int main()
{
    vector<int> arr;
    arr = { 2, 4, 6, 8};
    int result = findSeLargest(arr);
    cout << "Second Largest no is :" << result << endl;
    return 0;
}