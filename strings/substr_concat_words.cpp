#include <bits/stdc++.h>
using namespace std;

vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> freq;

        for (string& word : words) {
            freq[word]++;
        }

        int len = s.size();
        int n = words.size();
        int wordSize = words[0].size();
        int windowSize = wordSize * n;

        vector<int> ans;

        for (int i = 0; i < wordSize; i++) {
            unordered_map<string, int> window;
            int left = i, count = 0;

            for (int right = i; right + wordSize <= len; right += wordSize) {
                string word = s.substr(right, wordSize);

                if (freq.count(word)) {
                    window[word]++;
                    count++;

                    while (window[word] > freq[word]) {
                        string leftWord = s.substr(left, wordSize);
                        window[leftWord]--;
                        left += wordSize;
                        count--;
                    }

                    if (count == n) {
                        ans.push_back(left);
                    }
                } else {
                    window.clear();
                    count = 0;
                    left = right + wordSize;
                }
            }
        }
        return ans;
    }