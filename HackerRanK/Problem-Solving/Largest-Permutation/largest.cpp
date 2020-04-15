#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


// Complete the largestPermutation function below.
vector<int> largestPermutation(int k, vector<int> arr) {
    vector<int> h(arr);
    int n = arr.size();
    int s = n;
    map<int, int> index;
    int j = 0;
    for(auto i: arr){
        index[i] = j++;
    }
    
    for (int i = 0; i < n && k > 0; i++) {
        if (arr[i] == n - i) {
            continue;
        }
        arr[index[n - i]] = arr[i];
        index[arr[i]] = index[n - i];
        arr[i] = n - i;
        index[n - i] = i;
        k--; 
    }

    // for(int i = 0; i < k; i++){
    //     if(arr[i]==n){
    //         i--;
    //         continue;
    //     }
    //     int curr = arr[i];
    //     arr[m[n]] = curr;
    //     swap(m[curr],m[n]);
    //     arr[i] = n--;
    //     for(int i = 0 ; i< s; i++)
    //         cout << arr[i] << " ";
    //     cout<<endl;
    // }
    // make_heap(h.begin(), h.end());
    // for(int i = 0; i < k; i++){
    //     int num = h.front();
    //     // if(num==arr[i])
    //     //     continue;
    //     h.pop_back();
    //     swap(arr[m[num]],arr[i]);
    //     swap(m[num],m[i]);
    // }
    return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = largestPermutation(k, arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
