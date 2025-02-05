#include<bits/stdc++.h>
using namespace std;
int singleNo(vector<int>&nums){
    unordered_map<int,int> frequency;
    for(int num : nums){
        frequency[num]++;
    }
    for(auto it : frequency){
        if(it.second == 1){
            return it.first;
        }
    }
//     for(unordered_map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it){
//     if(it->second == 1){
//         return it->first;
//     }
// }

    return 0;
}

int main(){
    vector<int>nums = {2,2,3,3,1,4,1};
    cout<<singleNo(nums);

return 0;
}