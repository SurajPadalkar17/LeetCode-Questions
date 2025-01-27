#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i = 0;
        int j = 0;
        while (i < nums.size())
        {
            if (j > nums.size())
            { // if j is going out of bound
                i++;
                j = i + 1;
            }
            if (i < nums.size() && j < nums.size() && nums[i] + nums[j] == target)
            {
                return {i, j};
            }
            j++;
        }
        return {};
    }
};

int main()
{
    Solution ans;
    vector<int> nums = {2,7,11,15};
    
    vector<int>result =ans.twoSum(nums, 9);

    // Print the result
    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found!" << endl;
    }


    return 0;
}