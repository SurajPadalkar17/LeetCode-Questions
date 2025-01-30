#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubstring(string s)
    {
        unordered_set<char> set;
        int start = 0;
        int longest = 0;

        for (int i = 0; i < s.length(); i++)
        {
            while (set.find(s[i]) != set.end())
            {
                set.erase(s[start]);
                start++;
            }
            set.insert(s[i]);
            longest = max(longest, i - start + 1);
        }
        return longest;
    }
};

int main()
{
    string s = "abcabcbb";
    Solution ans;
    int result = ans.longestSubstring(s);
    cout<<result;

    return 0;
}