#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current = arr[i];
        int previous = i-1;
        while(previous>=0 && arr[previous]>current){
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous+1] = current;
    }
    for(int x : arr){
            cout<<x<<" ";
    }
}