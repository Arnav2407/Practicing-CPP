class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int max_1=INT_MIN,max_2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_1){
                max_1 = max(nums[i],max_1);
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max_2 && nums[i] != max_1) {
                max_2 = nums[i];
            }
        }
        if (max_2 == INT_MIN) return -1;
        return max_2;
    }
};