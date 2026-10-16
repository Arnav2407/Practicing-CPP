class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int>ans;
      int n = nums.size();
      int right = abs(nums[n-1]);
      ans.push_back(right);
      for(int i=n-2;i>=0;i--){
        if(nums[i]>right){
            ans.push_back(nums[i]);
            right = nums[i];
        }
      }
        reverse(ans.begin(),ans.end());
        return ans;
      }
    }
};