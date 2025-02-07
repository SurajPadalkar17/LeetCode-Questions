#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupanagram(vector<string>& str){
    unordered_map<string ,vector<string>> anagram;
    for(string s : str){
        string ori = s;
        sort(ori.begin(),ori.end());
        anagram[ori].push_back(s);
    }
    vector<vector<string>> result;
    for(auto & it : anagram){
        result.push_back(it.second);
    }
    return result;
}

int main(){
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> r = groupanagram(str);

    for (const auto& group : r) { // Iterate over groups
        for (const string& s : group) { // Iterate over words in each group
            cout << s << " ";
        }
        cout << endl; // Newline after each anagram group
    }
return 0;
}