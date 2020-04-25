#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m, x, y ,z;
    cin >> n >> m;
    cin >> x >> y >>z;
    int blue[x], yellow[y], no[z];
    for(int i = 0 ; i < x; i++){
        cin >> blue[i];
    }
    for(int i = 0 ; i < y; i++){
        cin >> yellow[i];
    }
    for(int i = 0 ; i < z; i++){
        cin >> no[i];
    }

    sort(blue, blue + x, greater<int>());
    sort(yellow, yellow+y, greater<int>());
    sort(no, no+z, greater<int>());

    int cost=0;
    int currBlue = 0, currYellow = 0, currNo = 0;

    multiset<int> sell;
    for(int i = 0;i < n; i++){
        sell.insert(blue[i]);
    }
    for(int i = 0;i < m; i++){
        sell.insert(yellow[i]);
    }

    for(auto i: sell){
        if(currNo==z){
            cost+=i;
        }
        else{
            if(i > no[currNo]){
                cost+=i;
            }
            else{
                cost+=no[currNo++];
            }
        }
    }




    // while(n!=0 || m!=0){
        
    //     if(m==0){
    //         n--;
    //         if(currNo==z || blue[currBlue]>no[currNo]){
    //             cost+=blue[currBlue++];
    //         }
    //         else{
    //             cost += no[currNo++];
    //         }
    //     }
    //     else if(n==0){
    //         m--;
    //         if(currNo==z || yellow[currYellow]>no[currNo]){
    //             cost+=yellow[currYellow++];
    //         }
    //         else{
    //             cost += no[currNo++];
    //         }
    //     }
    //     else{
    //         if(currNo==z){
    //             if(blue[currBlue]> yellow[currYellow]){
    //                 cost+=blue[currBlue++];
    //                 n--;
    //             }
    //             else{
    //                 cost+=yellow[currYellow++];
    //                 m--;
    //             }
    //         }
    //         else{
    //             if(blue[currBlue]> yellow[currYellow]){
    //                 if(blue[currBlue]> no[currNo]){
    //                     cost+=blue[currBlue++];
                        
    //                 }
    //                 else{
    //                     cost += no[currNo++];
    //                 }
    //                 n--;
    //             }
    //             else{
    //                 if(yellow[currYellow]> no[currNo]){
    //                     cost+=yellow[currYellow++];
                        
    //                 }
    //                 else{
    //                     cost += no[currNo++];
    //                 }
    //                 m--;
    //             }
    //         }
    //     }
    // // cout << currBlue<<" "<< currNo<<"  "<< currYellow<<endl;
    // }
    cout << cost<<endl;
    

    return 0;
}