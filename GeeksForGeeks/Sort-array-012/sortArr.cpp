#include <iostream>
using namespace std;

#include <stdio.h>

int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n,zero = 0 ,one = 0 ,two = 0;
        cin >> n;
        int temp;
        for(int i = 0; i < n; i++){
            cin>>temp;
            switch(temp){
                case 0: zero++;
                        break;
                case 1: one++;
                        break;
                case 2: two++;
                        break;
            }
        }
        for(int i = 0; i < zero; i++)
            cout<<0<<" ";
        for(int i = 0; i < one; i++)
            cout<<1<<" ";
        for(int i = 0; i < two; i++)
            cout<<2<<" ";
        cout << "\n";
    }
	//code
	return 0;
}s