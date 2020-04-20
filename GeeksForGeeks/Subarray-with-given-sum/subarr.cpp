#include <iostream>
using namespace std;
#include <stdio.h>

void subArraySum(long arr[], long n, long sum)
{

    int curr_sum = arr[0], start = 0, i;

    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i - 1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        if (curr_sum == sum)
        {
            cout << start + 1 << " " << i << endl;
            return;
        }

        if (i < n)
            curr_sum = curr_sum + arr[i];
    }

    cout << "-1\n";
    return;
}

int main()
{
    //code
    int T;
    cin >> T;

    while (T--)
    {
        long n, sum;
        cin >> n >> sum;
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        subArraySum(arr, n, sum);
    }
    return 0;
}