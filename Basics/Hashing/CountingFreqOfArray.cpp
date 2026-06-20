#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<vector<int>> countFrequency(vector<int>& nums){
    unordered_map<int, int> freq;
    for(int num: nums){
        freq[num]++;
    }
    vector<vector<int>> ans;
    for (auto it : freq) {
        ans.push_back({it.first, it.second});
    }

    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = countFrequency(nums);

    for (auto pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }

    return 0;
}