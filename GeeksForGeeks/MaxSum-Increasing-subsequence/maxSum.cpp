#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n], dp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            dp[i] = arr[i];
        }
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] > max)
                max = dp[i];
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    dp[j] = std::max(dp[j], dp[i] + arr[j]);
                }
            }
        }
        cout << max << "\n";
    }
    return 0;
}