/* Read input from STDIN. Print your output to STDOUT*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <bits/stdc++.h>

using namespace std;


int main(int argc, char *a[])
{
    long long n;
    cin >> n;

    long long arr[n];
    long long qua[n];
    long long temp;
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr[i] = temp;
    }
    for(int i = 0; i < n; i++){
        cin>>temp;
        qua[i] = temp;
    }
    int flag = 0;
    long long count = 0;
    // printf("dsdfdfgsdfg");
    while(true){
        for(int i = 0; i < n; i++){
            temp = qua[i]-arr[i];
            // cout << temp <<" ";
            if(temp<0){
                flag= 1;
                break;
            }
            else{
                qua[i] = temp;
            }
        }
        cout<<"\n";
        if(flag){
            cout<<count<<"\n";
            return 0;
        }
        count++;
    }
    //Write code here
}
