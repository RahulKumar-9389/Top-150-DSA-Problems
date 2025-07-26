#include <iostream>
#include <vector>

using namespace std;


int maxArea(vector<int>&nums){

    int n = nums.size();

    int str = 0;
    int end = (n-1);

    int ans = -1e9;

    while(str < end){

        int height = min(nums[str], nums[end]);
        int width = (end - str);

        int area = width * height;
        ans = max(area, ans);

        nums[str] < nums[end] ? str++ : end--;
    }

    return ans;
}


int main(){

    vector<int>nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout<<"Area is: "<<maxArea(nums)<<endl;
    return 0;
}