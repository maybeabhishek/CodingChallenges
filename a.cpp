// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */

//     int n;
//     cin >> n;
//     vector<pair<long, long>> points(n);
//     for(int i = 0; i<n; i++){
//         cin >> points[i].first >> points[i].second;
//     }
//     vector<pair<long,long>> flips(n);
//     long rangeX, rangeY, numOp;
//     char op;
//     cin >> numOp;
//     for(int i = 0; i < numOp; i++){
//         cin >> op >> rangeX >> rangeY;
//         switch(op){
//             case 'X':
// 					for(int j = rangeX -1 ; j <rangeY; j++){
// 						flips[j].second +=1;
// 					}
// 					break;
// 			case 'Y':
// 					for(int j = rangeX -1; j <rangeY; j++){
// 						flips[j].first +=1;
// 					}
// 					break;
// 			case 'C':
// 					int first = 0,second = 0,third = 0,fourth =0;
// 					for(int j = rangeX-1; j <rangeY; j++){
// 						long flipX = flips[j].first % 2;
// 						long flipY = flips[j].second % 2;
// 						long currX = flipX !=0 ? -points[j].first : points[j].first;
// 						long currY = flipY !=0 ? -points[j].second : points[j].second;

// 						if(currX> 0 && currY > 0) first++;
// 						else if(currX< 0 && currY > 0) second++;
// 						else if(currX< 0 && currY < 0) third++;
// 						else fourth++;
// 						// cout << currX <<" "<<currY <<"\n";

// 					}
// 						cout << first << " "<< second << " "<< third << " "<< fourth<<endl;
// 					break;

//         }
//     }
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

long solve(int *arr, long n)
{
	if (n == 1)
		return 1;
	sort(arr, arr + n);
	//   arr[n] = arr[n-1] + 10;
	//  for(int i=0; i<n; i++){
	// cout<<arr[i]<<" ";

	// cout << endl;

	long maxSize = 1e+9;
	long j = 0;
	long i = 1;
	for (; i < n; i++)
	{
		if (arr[i - 1] + 1 != arr[i])
		{
			//   cout<<j<<" "<<i<<endl;
			maxSize = min(maxSize, i - j);
			j = i;
		}
	}
	maxSize = min(maxSize, i - j);
	
	// cout<<"SIZE: "<<maxSize<<endl;
	if (i == j)
		return 1;
	else if (maxSize == 1e+9)
		return n;
	else
		return maxSize;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long n;
		cin >> n;
		int arr[n + 1];
		for (long i = 0; i < n; i++)
			cin >> arr[i];

		long res = solve(arr, n);
		cout << res << endl;
	}
}

//  for(int i=0; i<n; i++){
//     // cout<<arr[i]<<" ";
//   }
//   cout<<endl;

//   long maxSize = 1e+9;
//   long j = 0;
//   long i = 1;
//   for(; i<n; i++){
//     if(arr[i-1] + 1 != arr[i]){
//     //   cout<<j<<" "<<i<<endl;
//       maxSize = min(maxSize, i - j);
//       j = i;
//     }
//   }

//   // cout<<"SIZE: "<<maxSize<<endl;
//   if(i==j)
//     return 1;
//   else if(maxSize == 1e+9)
//     return n;
//   else
//     return maxSize;
/*
8
1 -4
7 1 -2 -4 2 0 -3 -1
4 1 2 3 3
5 1 2 3 3 4
5 2 4 5 6 7
5 1 1 1 1 1
4 1 2 3 5
5 5 4 2 3 1
*/

// 1
// 7
// 1
// 2
// 1
// 1
// 1
// 5