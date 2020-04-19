#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {
    int n = arr.size();
    map<long long,long long> m;
    for(int i = 0; i<n; i++){
        if(m.find(arr[i])!=m.end())
            m[arr[i]]+=1;
        else
            m[arr[i]]=1;
    }
    if(r==1){

    }
    long count = 0;
    map<long long,long long>::iterator i; 
    // for(i = m.begin(); i != m.end(); i++){
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    for(i = m.begin(); i != m.end(); i++){
        long long a=i->first*r;
        long long b = a*r;
        // cout << i->second<<"  "<<(m.find(a)->second)<<"  "<<(m.find(b)->second)<<endl;
        if(m.find(a)!=m.end() && m.find(b)!=m.end())
            count+=i->second*(m.find(a)->second)*(m.find(b)->second);
    }
    return count;
    
    
    // long count = 0;
    // for(int i = 0; i< n; i++){
    //     for(int j = i+1; j < n; j++){
    //         for(int k = j+1; k<n; k++){
    //             if(arr[k] == r*arr[j] && arr[j]==r*arr[i])
    //                 count++;
    //         }

    //     }
    // }
    // return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nr_temp;
    getline(cin, nr_temp);

    vector<string> nr = split(rtrim(nr_temp));

    int n = stoi(nr[0]);

    long r = stol(nr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long> arr(n);

    for (int i = 0; i < n; i++) {
        long arr_item = stol(arr_temp[i]);

        arr[i] = arr_item;
    }

    long ans = countTriplets(arr, r);

    fout << ans << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
