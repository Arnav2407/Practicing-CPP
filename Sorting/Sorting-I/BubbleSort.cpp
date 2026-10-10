#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] =  temp;
            }
        }
    }
    for(auto i : nums){
        cout<<i<<" ";
    }
    return 0;
}
