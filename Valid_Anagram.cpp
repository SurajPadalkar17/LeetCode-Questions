#include <bits/stdc++.h>
using namespace std;

bool anagram(string &s, string t)
{
    map<int, int> frequency1;
    map<int, int> frequency2;
    if (s.empty() || t.empty())
        return false;
    for (char ch : s)
    {
        frequency1[ch]++;
    }
    for (char c : t)
    {
        frequency2[c]++;
    }
    return frequency1 == frequency2;
}

bool anagram2(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";
    cout << anagram(s, t) << endl;
    cout << anagram2(s, t);

    return 0;
}