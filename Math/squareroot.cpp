#include <bits/stdc++.h>
using namespace std;


int mySqrt(int x) {
        int low =1 , high = x;
        int res =0;

        while(low <= high)
        {
            int mid  = low + (high - low)/2;
            if((double) mid*mid <= x)
            {
                res =mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }

        return res;
    }