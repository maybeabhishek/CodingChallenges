#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  int t;
  long a, b;
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    set<long> y;
    set<long> prod;
    long res = 0;
    long p = 1;
    if (a == 1)
      p = a + 1;              // 2
    long q = (a * b) / p - 1; // 5

    y.insert(b);

    while (q > 0)
    {
      if (p * q > a * b)
        break;
      cout << p << " " << q << endl;
      if (find(prod.begin(), prod.end(), p*q) != prod.end())
      {
        // cout << "eliminated   " << p <<"  "<< q<<endl;
        res--;    
      }
      else{
        prod.insert(p * q);
      }
      res++;
      if (p + 1 < a)
        p++;
      if ((a * b) % p == 0)
        q = a * b / p - 1;
      else
        q = floor(a * b) / p;
      while (y.count(q) != 0)
        q--;
      y.insert(q);
      if (q <= 0)
        break;
      
    }
    cout << res << endl;
  }
  return 0;
}

// 10 5 50
// 1 49
// 2 24
// 3 16
// 4 24
// 5 9
// 6 8
// 7 7
// 8 6
// 9 4
// 9 3
// 9 2
// 9 1