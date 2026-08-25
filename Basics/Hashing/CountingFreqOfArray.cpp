#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int count=1;
        while(i+1<n && arr[i]==arr[i+1]){
            count++;
            i++;
        }
        cout<<"["<<arr[i]<<", "<<count<<"] ";
    }
    return 0;
}
