#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>

#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n;
    cin >> n;
    string s;
    cin >> s;
    int substrSize = s.length();
    long multFactor = 26;
    set <char> ss(begin(s), end(s));
    if(ss.size() == 1) multFactor = 25;
    
    long len = n - substrSize + 1;
    long long modulo = 1e+9 + 7;
    long long ans;
    if(multFactor==26)
        ans = pow(multFactor,len-1)*len; 
    else
        ans = 26*pow(multFactor,len-2)*len - len +1;
    cout << ans;
    return 0;
}