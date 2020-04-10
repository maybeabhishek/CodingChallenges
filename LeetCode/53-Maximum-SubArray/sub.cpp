#include <iostream>

using namespace std;

int maxSubArray(int A[], int n)
{
    int ans = A[0], i,j, sum = 0;
    int finI = 0, finJ=0;
    
    for (i = 0; i < n; i++)
    {
        sum += A[i];
        
        if(sum>ans){
            ans = sum;
            finJ = i;
        }
        if(sum<0){
            sum=0;
            finI = i+1;
        }
        
    }
    cout << finI<<" "<<finJ<<endl;
    return ans;
}

int main(){
    int a[] = {-1, 2, 3, -4, 5, 10};
    int n = sizeof(a)/sizeof(a[0]);
    for(int i =0; i< n; i++)
    cout<<a[i]<<" ";
    cout <<endl<< maxSubArray(a,n) << endl;
    return 0;
}