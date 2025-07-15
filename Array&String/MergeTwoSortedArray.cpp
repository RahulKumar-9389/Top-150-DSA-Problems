#include <iostream>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n)
{

    int i = m - 1;
    int j = n - 1;
    int p = m + n - 1;

    while (p >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[p] = nums1[i];
            i--;
        }
        else
        {
            nums1[p] = nums2[j];
            j--;
        }
        p--;
    }
}

int main()
{

    int m = 3;
    int n = 3;
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};

    merge(nums1, m, nums2, n);

    // print nums1
    for (int elem : nums1)
    {
        cout << elem << " ";
    }
    return 0;
}