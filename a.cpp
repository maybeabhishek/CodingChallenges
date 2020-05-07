  #include <cmath>
  #include <cstdio>
  #include <vector>
  #include <iostream>
  #include <algorithm>
  using namespace std;

  char returnChar(char c, char next){
      if(c == 'a'){
          if(next == 'z'){
              return 'b';
          }
          else{
              return 'z';
          }
      }
      else if(c == 'z'){
          if(next == 'a'){
              return 'b';
          }
          else
              return 'a';
      }

      if(next == 'a'){
          return 'z';
      }
      else 
          return 'a';
          
  }

  int main() {
      /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      string s;
      cin >> s;
      int n = s.length();
      long k;
      cin >> k;
      char start = s[0];
      long count = 0;
      if(n==1){
        cout <<  floor(k/2);
        return 0;
      }
      for(int i = 1; i < n -1 ; i++){
          if(s[i]==start){
              // cout <<"Curr :" <<s[i] <<"  Next:"<< s[i+1]<<endl;
              s[i] = returnChar(s[i], s[i+1]);
              // cout << "Changed to " << s << endl;
              count++;
          }
          start = s[i];
      }
      if(s[n-1] == s[n-2]){
        count++;
        s[n-1] = returnChar(s[n-1], s[n-2]);
      }

      // cout << count << endl;
      if(s[0] == s[n-1] && k!=1)
          count++;
      // cout << s << endl;
      cout << count*k;
      return 0;
  }