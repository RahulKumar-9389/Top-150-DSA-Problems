#include <iostream>
using namespace std;

int removeElement(int nums[], int val, int n)
{

    int i = 0;

    for (int j = 0; j < n; j++)
    {
        if (nums[j] != val)
        {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;
}

int main()
{
    int n = 8;
    int nums[8] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;

    removeElement(nums, val, n);
    for (int elem : nums)
    {
        cout << elem << " ";
    }
    return 0;
}