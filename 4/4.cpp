#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int findSecondLargest(vector<int> &arr)
{
    if (arr.size() < 2)
    {
        cout << "Array must contain at least two elements!" << endl;
        return -1;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int num : arr)
    {
        if (num > largest)
        {
            secondLargest = largest;
            largest = num;
        }
        else if (num > secondLargest && num < largest)
        {
            secondLargest = num;
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main()
{
    vector<int> arr = {-10, -5, -20, -8, -15};
    int result = findSecondLargest(arr);

    if (result != -1)
    {
        cout << "Second largest number is: " << result << endl;
    }
    else
    {
        cout << "No second largest element found." << endl;
    }

    return 0;
}
