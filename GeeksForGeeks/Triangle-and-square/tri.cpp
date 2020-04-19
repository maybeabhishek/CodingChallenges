#include <iostream>
using namespace std;

int main() {
	int T;
	
	cin >> T;
	for(int i = 0; i < T; i++){
	   int b;
	   cin >> b;
	   if(b%2!=0)
	      b-=1;
	   b=b/2 - 1;
	   b = b*(b+1)/2;
	   cout << b<<"\n";
	}
	return 0;
}