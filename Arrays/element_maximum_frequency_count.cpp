// Approach: Sort the array and count the frequency of each element. Keep track of the maximum frequency and the sum of frequencies of elements that have the maximum frequency.
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
// Time Complexity: O(n log n) due to sorting
// Space Complexity: O(1) 
