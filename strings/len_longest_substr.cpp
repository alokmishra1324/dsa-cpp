 #include <bits/stdc++.h>
using namespace std;
 
 int lengthOfLongestSubstring(string s) {
        int low = 0 ;
        int high = 0;
        int count[256]  = {0};
        int windowcnt = 0;

        while(low < s.length())
        {
           count[s[low]]++;

           while(count[s[low]] > 1)
           {
             count[s[high]]--;
             high++;
           }
           windowcnt = max(windowcnt , low-high+1);
           low++;
        }
        return windowcnt;
    }