#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin >> n;
    set <long> s;
    long temp;
    for(long i = 0; i<n;i++){
        cin >> temp;
        s.insert(temp);
    }
    long sum = 0;
    long count = 0;
    for(auto i: s){
        sum+=i;
        cout << sum<<" ";
        if(sum<=10000000){
            count++;
        }
        else{
            // count++;
            break;
        }
            
    }
    cout << count;
    return 0;
}