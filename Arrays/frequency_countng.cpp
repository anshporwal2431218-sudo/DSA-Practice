class Solution {
  public:
    
    vector<int> frequencyCount(vector<int>& arr) 
    {
        int n = arr.size();

        vector<int> hash(n + 1, 0);

        // count frequency
        for(int i = 0; i < n; i++)
        {
            hash[arr[i]]++;
        }

        vector<int> ans;

        // frequencies from 1 to N
        for(int i = 1; i <= n; i++)
        {
            ans.push_back(hash[i]);
        }

        return ans;
    }
};