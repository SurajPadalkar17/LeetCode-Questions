#include<bits/stdc++.h>

using namespace std;
bool isvowel(char s){
    char c = tolower(s);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }   
    return false;
}
void solution(string &s) {
    int start = 0;
    int end = s.size() - 1;
    while(start < end){
        if(isvowel(s[start]) && isvowel(s[end])){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        else{
        if(!isvowel(s[start])) start++;
        if(!isvowel(s[end])) end--;
        }
    }
    cout<<s;
}
            
int main(){
    string s = "leetcode";       
    solution(s);

return 0;
}