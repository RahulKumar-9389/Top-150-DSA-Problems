#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();

    vector<int> ans(n);
    ans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        ans[i] = nums[i - 1] * ans[i - 1];
    }

    int right_product = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = right_product * ans[i];
        right_product *= nums[i];
    }

    return ans;
}

int main()
{

    vector<int> arr = {2, 4, 5, 1, 6};
    vector<int> res = productExceptSelf(arr);
    for (int item : res)
    {
        cout << item << " ";
    }
    return 0;
}