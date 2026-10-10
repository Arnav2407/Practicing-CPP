#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[minIndex]){
                minIndex = j;
            }
        }
        swap(nums[i],nums[minIndex]);
    }
    for(auto i : nums){
        cout<<i<<" ";
    }
    return 0;
}
