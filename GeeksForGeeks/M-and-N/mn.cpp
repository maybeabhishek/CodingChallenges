#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	//code
	int n,a,b;
	cin >> n;
	for(int i = 0; i < n;i++){
	    cin>>a>>b;
	    int sum = a+b;
	    int d = floor(log10(sum));
	    int d2 = floor(log10(b));
	    if(d==d2)
	        cout << b<<"\n";
	   else
	        cout << sum << "\n";
	}
	return 0;
}