#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
        int n = s.length();
        int cnt = 0;
        while( n > 0)
        {
            if(s[--n] != ' ')
            {
                cnt++;
            }else if(cnt > 0)
            {

                return cnt;
            }
        }

        return cnt;
    }