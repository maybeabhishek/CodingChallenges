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
        int arr[n], s = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }
        int sum = n * (n + 1) / 2;
        cout << sum - s << "\n";
    }
    return 0;
}