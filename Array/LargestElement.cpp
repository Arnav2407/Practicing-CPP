class Solution {
public:
    int largestElement(vector<int>& nums) {
        int max_1=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_1){
                max_1 = max(nums[i],max_1);
            }
        }
        return max_1;
    }
};