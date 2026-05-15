#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        
        for(int j = 0;j<m-n+1;j++)
        {
            if(haystack.substr(j,n) == needle)
            {
                return j;
            }
        }

        return -1;
    }