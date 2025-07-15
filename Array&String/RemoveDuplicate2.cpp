#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &nums)
{

    int k = 2;

    if (nums.size() <= 2)
        return nums.size();

    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] != nums[k - 2])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}

int main()
{

    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};

    int n = removeDuplicate(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}