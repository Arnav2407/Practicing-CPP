class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        map<int,int>freq;
        for(int x:nums) freq[x]++;
        int max_freq=0;
        int min_freq = INT_MAX;
        for(auto &[val,count]:freq){
            max_freq = max(max_freq,count);
            min_freq = min(min_freq,count);
        }
        return max_freq+min_freq;
    }
};
