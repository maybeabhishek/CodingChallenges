#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long arr[n];
        // vector<long> ans;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int highSoFar = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= highSoFar)
            {
                highSoFar = arr[i];
                cout << arr[i] << "\n";
                // ans.push_back(arr[i]);
            }
        }
        //for(long i = ans.size()-1; i >=0 ; i--)
        //     cout << ans[i]<<" ";
        cout << "\n";
    }
    return 0;
}