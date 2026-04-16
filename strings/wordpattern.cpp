#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    vector<string> words;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (temp != "")
            {
                words.push_back(temp);
                temp = "";
            }
        }
        else
        {
            temp += s[i];
        }
    }
    if (temp != "")
    {
        words.push_back(temp);
    }
    if (pattern.length() != words.size())
    {
        return false;
    }
    unordered_map<char, string> mps;
    unordered_map<string, char> mpt;
    for (int i = 0; i < pattern.size(); i++)
    {
        char ch = pattern[i];
        string w = words[i];

        if (mps.count(ch))
        {
            if (mps[ch] != w)
                return false;
        }
        else
        {
            mps[ch] = w;
        }

        if (mpt.count(w))
        {
            if (mpt[w] != ch)
                return false;
        }
        else
        {
            mpt[w] = ch;
        }
    }
    return true;
}