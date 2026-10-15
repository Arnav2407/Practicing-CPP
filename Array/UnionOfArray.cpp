class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s(nums1.begin(),nums1.end());
        s.insert(nums2.begin(),nums2.end());
        return vector<int>(s.begin(),s.end());
    }
};