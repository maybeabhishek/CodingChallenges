#include <climits>
#include <cmath>
#include <iostream>
#include <map>
#include <stack>
#include <vector>

using namespace std;

string solve(long n, map<long, int>& dp) {
  if (dp[n] == 1) return "Yes";

  // Otherwise result will go negetive
  long temp = n;
  if (n > 9) {
    // get digit of n which is not zero
    while (temp >= 1) {
      long digit = temp % 10;
      temp /= 10;
      if (digit == 0) continue;
      if(solve(n - (digit * digit), dp)!="No")
        return "Yes";
    }
  }
  return "No";
}

int main() {
  long t, n;
  cin >> t;
  map<long, int> dp;

  for (long i = 1;; i++) {
    long num = pow(i, i);
    if (num > 10000000) break;

    // number is satanic
    dp[num] = 1;
  }

  while (t--) {
    cin >> n;
    string res = solve(n, dp);
    cout << res << endl;
  }

  return 0;
}