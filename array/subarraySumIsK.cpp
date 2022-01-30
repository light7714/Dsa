// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // map<sum, occurences>
        unordered_map<int, int> m;
        // m[0] = 1;
        int sum = 0, count = 0;
        
        for(int i=0; i<n; i++) {
            m[sum]++;
            sum += nums[i];
            // m[sum]++;
            count += m[sum - k];
        }
        return count;
    }
};