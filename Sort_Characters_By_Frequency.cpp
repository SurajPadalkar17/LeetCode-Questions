#include<iostream>
#include<algorithm>
#include<map>  
#include<queue>

using namespace std;

string sortchar(string s){
    map<char,int> freq;
    for(char ch : s){  
        freq[ch]++;
    }
    priority_queue<pair<int,char>>maxheap;
    for(auto & it : freq){
      maxheap.push({it.second,it.first});
    }            
    string ans = "";
    while(!maxheap.empty()){
      int freq = maxheap.top().first;
      char c = maxheap.top().second;
      maxheap.pop();
      ans.append(freq,c);
    }
 return ans;
    
}
int main(){
  string s = "tree";
  cout<<sortchar(s);
return 0;
}