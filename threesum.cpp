#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threesum(vector<int> &nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); // Sorting the array
        int n = nums.size();

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) // Skip duplicates
                continue;

            int l = i + 1, r = n - 1;
            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0)
                {
                    result.push_back({nums[i], nums[l], nums[r]});

                    l++; 
                    r--; 

                    // Skip duplicates for l and r
                    while (l < r && nums[l] == nums[l - 1])
                        l++;
                    while (l < r && nums[r] == nums[r + 1])
                        r--;
                }
                else if (sum < 0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution ans;
    vector<vector<int>> res = ans.threesum(nums);

    for (auto &triplet : res)
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i] << (i < triplet.size() - 1 ? ", " : "");
        }
        cout << "]\n";
    }

    return 0;
}
