#include <iostream>
#include <vector>
#include <algorithm> // Needed for sort
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    sort(nums.begin(), nums.end()); // <-- Important!
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue; // Skip duplicate elements for 'i'
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                // Skip duplicates for 'j' and 'k'
                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
                while (j < k && nums[k] == nums[k + 1])
                {
                    k--;
                }
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
