#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int> &arr, int left, int right)
{

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void rotate(vector<int> &arr, int k)
{

    // size of the array
    int n = arr.size();

    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rotate(arr, 3);

    for (int elem : arr)
    {
        cout << elem << " ";
    }
    return 0;
}