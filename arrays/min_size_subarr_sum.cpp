#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0;
        int currSum = 0;
        int minLenWindow = INT_MAX;

        while (high < nums.size()) {
            currSum += nums[high];
            high++;

            while (currSum >= target) {
                int currWindowSize = high - low;
                minLenWindow = min(minLenWindow, currWindowSize);

                currSum -= nums[low];
                low++;
            }
        }

        return minLenWindow == INT_MAX ? 0 : minLenWindow;
    }