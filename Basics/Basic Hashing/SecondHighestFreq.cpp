class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        map<int, int> freq;
        for (int x : nums) freq[x]++;

        vector<pair<int, int>> v; // {count, -value}
        for (auto [val, count] : freq) {
            v.push_back({count, -val});
        }

        sort(v.rbegin(), v.rend());

        int max_count = v[0].first;
        for (auto [count, neg_val] : v) {
            if (count < max_count) {
                return -neg_val;
            }
        }

        return -1;
    }
};