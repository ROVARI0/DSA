// Input Format: N = 3, k = 5, array[] = {2,3,5}
// Result: 2
// Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3};
    int len = arr.size();
    int T = 5;
    int maxlen = 0;
    for (int i = 0; i < len; i++)
    {
        int sum = 0;
        for (int j = i; j < len; j++)
        {
            sum += arr[j];
            if (sum == T)
            {

                maxlen = max(maxlen, j + i - 1);
            }
        }
    }
    cout << "maxlen = " << maxlen;
    return 0;
}