class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        unordered_set<int> nums(arr.begin(), arr.end());
        int longest = 0;

        for (int num : nums) {
            if (nums.find(num - 1) == nums.end()) {
                int current = num;
                int count = 1;

                while (nums.find(current + 1) != nums.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
