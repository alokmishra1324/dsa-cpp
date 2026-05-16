#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> mp;
        for(string str : strs)
        {
            string temp = str;
            sort(temp.begin() , temp.end());

            mp[temp].push_back(str);
        } 

        vector<vector<string>> res;

        for(auto it : mp)
        {
            res.push_back(it.second);
        }
        return res;
    }