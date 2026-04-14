#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, char> mps;
        unordered_map<char, char> mpt;

        for (int i = 0; i < s.length(); i++) {

            char ch = s[i];
            char ch2 = t[i];
            if (mps.find(ch) != mps.end()) {
                if (mps[ch] != ch2) {
                    return false;
                }
            } else {
                mps[ch] = ch2;
            }

            if (mpt.find(ch2) != mpt.end()) {
                if (mpt[ch2] != ch) {
                    return false;
                }
            } else {
                mpt[ch2] = ch;
            }
        }

        return true;
    }