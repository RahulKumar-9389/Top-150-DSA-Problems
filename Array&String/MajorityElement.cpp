#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{

    int ans = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {
            ans = arr[i];
        }

        if (arr[i] == ans)
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }

    return ans;
}

int main()
{

    int arr[7] = {2, 2, 1, 1, 1, 2, 2};

    cout << "Element that appeares more than n/2 times is: " << majorityElement(arr, 7);
    return 0;
}