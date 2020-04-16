#include <bits/stdc++.h>

using namespace std;

bool check_anagram(char a[], char b[])
{
    int first[26] = {0}, second[26] = {0}, c = 0;

    while (a[c] != '\0')
    {
        first[a[c] - 'a']++;
        c++;
    }
    c = 0;
    while (b[c] != '\0')
    {
        second[b[c] - 'a']++;
        c++;
    }

    for (c = 0; c < 26; c++)
    {
        if (first[c] != second[c])
            return false;
    }

    return true;
}

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s)
{

    char sub1[100] = {0};
    char sub2[100] = {0};

    int count = 0;
    for (int len = 1; len < (int)s.length(); len++)
    {
        memset(sub1, 0, len);
        for (int i = 0; i < (int)s.length() - len; i++)
        {
            strncpy(sub1, &s[i], len);
            memset(sub2, 0, len);
            for (int j = i + 1; j < (int)s.length() - len + 1; j++)
            {
                strncpy(sub2, &s[j], len);
                if (check_anagram(sub1, sub2))
                {
                    count++;
                }
            }
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

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
