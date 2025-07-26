#include <iostream>
#include <vector>
using namespace std;


vector<int>twoSum(vector<int>&nums, int target){

    // size of the array
    int n = nums.size();

    int start = 0;
    int end = n-1;

    while(start < end){

        int sum = nums[start] + nums[end];

        if(sum == target){
            return {start, end};
        }

        if(sum < target){
            start++;
        }else{
            end--;
        }
    }

    return {-1, -1};
}


int main(){

    vector<int>nums = {2, 7, 11, 15};
    int target = 9;

    vector<int>res = twoSum(nums, target);
    cout<<res[0]<<" "<<res[1]<<" ";
    return 0;
}