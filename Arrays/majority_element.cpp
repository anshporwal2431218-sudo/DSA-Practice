class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       int n = nums.size();
       unordered_map<int,int>mp;

       for(int i=0;i<n;i++)
       {
          mp[nums[i]]++;
       }

       for(int j=0;j<n;j++)
       {
          if(mp[nums[j]]>(n/2))
            return nums[j];
       }

       return -1;
    }
};
// Time complexity: O(n)
// Space compleity: O(n)
