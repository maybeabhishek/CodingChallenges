// // #include <cmath>
// // #include <cstdio>
// // #include <vector>
// // #include <bits/stdc++.h>
// // #include <algorithm>
// // using namespace std;

// // void countSmallerRight(int A[], int len)
// // {
// //     multiset<int> s;
// //     int countSmaller[len];
// //     for (int i = len - 1; i >= 0; i--) {
// //         s.insert(A[i]);
// //         auto it = s.lower_bound(A[i]);
// //         countSmaller[i] = distance(s.begin(), it);
// //     }

// //     for (int i = 0; i < len; i++)
// //         cout << countSmaller[i] << " ";
// // }

// // int main() {
// //     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// //     int T;
// //     cin >> T;
// //     while(T--){
// //         int n;
// //         cin >> n;
// //         int arr[n];

// //         for(int i = 0; i<n; i++){
// //             cin >> arr[i];
// //         }
// //         reverse(arr, arr +n);
// //         countSmallerRight(arr, n);
// //         cout << "\n";
// //     }
// //     return 0;
// // }

// #include <cstdio>
// #include <bits/stdc++.h>
// using namespace std;



// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     const int MX_RANGE = 100000, MX_SIZE = 100000;
//     int tree[MX_RANGE] = {0}, a[MX_SIZE];
//     int n, mn = MX_RANGE, shift = 0;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//       scanf("%d", &a[i]);
//       if (a[i] < mn)
//         mn = a[i];
//     }

//     shift = 1 - mn; // we need to remap all values to start from 1
//     long max = 0;
//     for (int i = 0; i < n; i++)
//     {
//       // Read answer
//       int sum = 0, idx = a[i] + shift - 1;
//       while (idx > 0)
//       {
//         sum += tree[idx];
//         idx -= (idx & -idx);
//       }

//       // printf("%d ", sum);
//       max +=sum;
//       // Update tree
//       idx = a[i] + shift;
//       while (idx <= MX_RANGE)
//       {
//         tree[idx] += a[i];
//         idx += (idx & -idx);
//       }
//     }
//     cout << "\n" << max<<endl;
//   }
// }