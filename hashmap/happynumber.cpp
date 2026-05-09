#include <bits/stdc++.h>
using namespace std;

int sum_of_square(int num) {
        long sum = 0;
        while (num > 0) {
            int d = num % 10;
            sum += d * d;
            num = num / 10;
        }
        return sum;
    }
    bool isHappy(int n) {

        unordered_map<int, int> mp;

        while (n != 1) {
            if (mp[n] > 0) {
                return false;
            }

            mp[n]++;
            n = sum_of_square(n);
        }

        return true;
    }