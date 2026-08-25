#include<iostream>
#include<vector>
using namespace std;
void RevArray(vector<int> &arr){
    int p1 = 0;
    int p2 = arr.size()-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RevArray(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}