#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int a,k;
	    cin >> a >> k;
	    int arr[a];
	    for(unsigned int i = 0; i<a; i++){
	        cin >> arr[(i+a-k)%a];
	    }
	    for(unsigned int i = 0; i<a; i++){
	        cout << arr[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}