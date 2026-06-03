// LeetCode 242. Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// time complexity: O(n)
// space complexity: O(n)
class Solution {
public:
    bool isAnagram(string s, string t)
    {
       unordered_map<char,int>mp;
       if(s.size()!=t.size())
            return false;
       for(int i=0;i<s.size();i++)
       {
            mp[s[i]]++;
       }
       int j=0;
       while(j<t.size())
       {
            if(mp.find(t[j])==mp.end())
            {
                return false;
            }
            mp[t[j]]--;
            if(mp[t[j]]<0)
            {
                return false;
            }
            j++;
       }
     return true;
    }
};