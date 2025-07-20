class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int i = 0; i < k; i++) {
            freq[arr[i]]++;
        }

        result.push_back(freq.size());

        for (int i = k; i < arr.size(); i++) {
            int out = arr[i - k];
            int in = arr[i];

            freq[out]--;
            if (freq[out] == 0)
                freq.erase(out);

            freq[in]++;
            result.push_back(freq.size());
        }

        return result;
    }
};
