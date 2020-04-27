#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
  int n;
  cin>>n;

  // x and t
  vector<pair<long, long>> items(n+1);
  for(int i=1; i<=n; i++)
    cin>>items[i].second>>items[i].first;

  sort(items.begin(), items.end());

  for(auto i: items){
      if(i.second ==0){

      }
  }

  long long sum = 0;
  long res=0;
  int i=1;
  int j =items.size(); 
  while(i<j){
    pair<long, long> item = items[i];
    res+=item.first;
    // sum+=item.second;
    // cout<<item.first<<" ";
    // cout<<sum<<endl;
    j-=item.second;
    i++;
  }
  cout<<res<<endl;
}