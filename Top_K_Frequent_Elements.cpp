#include<bits/stdc++.h>
using namespace std;

vector<int> findk(vector<int> & nums,int k){
        unordered_map<int,int>frequency ;
        for(int num : nums){
                frequency[num]++;
                // cout<<frequency[num]<<endl;
        }  
        vector<int>freq ;
        for(auto& it : frequency){
            freq.push_back(it.second);
            cout<<it.first<<" ";     
        }
        cout<<endl;
        for(int f : freq){  
            cout<<f<<" ";
        }  
        return {};
}

int main(){          
    vector<int>nums = {1,1,1,1,2,2,2,3,4};   
    int k = 2;
    findk(nums,k);

return 0;
}