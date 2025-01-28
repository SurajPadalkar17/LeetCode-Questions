#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MaxWater(vector<int> &height)
    {
        int n = height.size();
        int MaxWater = 0;
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int width = end - start;
            int water = min(height[start], height[end]);
            int result = width * water;
            MaxWater = max(MaxWater, result);
            if (height[start] < height[end])
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return MaxWater;
    }
};

int main()
{
    Solution ans;

    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = ans.MaxWater(height);
    cout << result;

    return 0;
}