#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    bool inValley;
    int count = 0;
    int res=0;
    for(int i = 0; i<n; i++){
        if(count<0)
            inValley = true;
        else
            inValley = false;
        if(s[i]=='D'){
            count-=1;
        }
        else{
            count+=1;
        }
        if(inValley && count==0){
            res+=1;
        }
        
        
    }
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
