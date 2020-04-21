#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T;
	cin >> T;
	while(T--){
	    int n;
	    cin >> n;
	    int temp;
	//    vector<int> arr(n);
	   priority_queue<int> p;
	    for(int i = 0; i<n; i++){
	        cin>>temp;            
			p.push(temp);
	    }
	   int k;
	   cin >> k;
		k = n-k;
		while (k-->0)
		{
			p.pop();
		}
		cout<< p.top() << "\n";
	}
	return 0;
}