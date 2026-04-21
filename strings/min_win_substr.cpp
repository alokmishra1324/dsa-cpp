#include <bits/stdc++.h>
using namespace std;
 
 string minWindow(string s, string t) {
        int l = 0, r = 0;
        int mini = INT_MAX;
        int n = s.length();
        int m = t.length();
        int sInd =-1;
        vector<int> mp(256, 0);
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            mp[t[i]]++;
        }
        while (r < n) {
            if (mp[s[r]] > 0) {
                cnt++;
            }
            mp[s[r]]--;

            while(cnt == m)
            {
                if(r-l+1 < mini)
                {
                    mini = r-l+1;
                    sInd = l; 
                }
                mp[s[l]]++;
                if(mp[s[l]] > 0) cnt--;
                l++;
            }
            r++;
        }

        return sInd == -1 ? "" : s.substr(sInd , mini);
    }