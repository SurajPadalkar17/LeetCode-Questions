#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>& nums,int k){
    int count = 0;    
    for(int i = 0;i<nums.size();i++){
        int sum = 0;
        for(int j = i;j<nums.size();j++){
            sum = sum + nums[j];
            if(sum == k){
                count++;
            }
        }
    }
    return count;
}
int sumsub(vector<int>&nums,int k){
    unordered_map<int,int>prefixsumcount ;
    int sum = 0;
    int count = 0;
    prefixsumcount[0] = 1;
    for(int num : nums){
        sum += num;
        if(prefixsumcount.find(sum - k) != prefixsumcount.end()){
            count += prefixsumcount[sum - k];
        }
        prefixsumcount[sum]++;
    }
    return count;
}
int main(){
    vector<int>nums = {1,2,3};
    int k = 3;

    cout<<subarray(nums,k);
    cout<<endl;
    cout<<sumsub(nums,k);
        
return 0;
}