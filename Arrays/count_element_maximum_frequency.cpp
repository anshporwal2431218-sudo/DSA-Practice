// LeetCode 3005 - Count Elements With Maximum Frequency
// Time Complexity: O(n log n)
// Space Complexity: O(1)
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int freq = 0;
        int maxfreq = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++)
        {
            freq++;

            if(i == n - 1 || nums[i] != nums[i + 1])
            {
                if(freq > maxfreq)
                {
                    maxfreq = freq;
                    ans = freq;
                }
                else if(freq == maxfreq)
                {
                    ans += freq;
                }

                freq = 0;
            }
        }

        return ans;
    }
};

