#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int sum = 0;
        while(left < right)
        {
            sum =  nums[left] + nums[right];
            if(sum == target)
            {
                return {left , right};
            }
            else if(sum < target)
            {
                left += 1;
            }else
            {
                right -= 1;
            }
        }

        return {-1 , -1};
    }