#include <iostream>
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
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            // left[i]=i-1>-1?left[i-1]+arr[i]:arr[i];
        }
        int leftSum = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            sum -= arr[i];
            if (leftSum == sum)
            {
                cout << i + 1 << "\n";
                flag = 1;
                break;
            }
            leftSum += arr[i];
        }
        if (flag == 0)
            cout << -1 << "\n";
    }
    return 0;
}