#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    int n = s.length();
    int count = 0;
    if(n%2!=0)
        return -1;
    string s1 = s.substr(0,n/2);
    string s2 = s.substr(n/2,n);
    for(auto i: s1){
        int index = s2.find(i);
        if(index==string::npos)
            count++;
        else{
            s2 = s2.substr(0,index) + s2.substr(index+1,n/2 - index );
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
