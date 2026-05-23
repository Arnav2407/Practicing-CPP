#include<iostream>
using namespace std;

int main(){
    
    /*Question 1
    int i;
    for(i=280;i>249;i--){
        cout<<i<<endl;
    }
    */

    /*Question 2
    for(char ch='A';ch<='Z';ch++){
        cout<<ch<<endl;
    }
    */

    /*Question 3
    for(char ch='Z';ch>='A';ch--){
        cout<<ch<<endl;
    }
    */

    /*Question 4
    int i;
    for(i=220;i<731;i=i+7){
        cout<<i<<" ";
    }
    */

    /*Question 5
    int i,n = 10;
    for(i=1;i<n;i++){
        cout<<i*i<<" ";
    }
    */

    /*Question 6
    int i,n = 10;
    for(i=1;i<n;i++){
        cout<<i*i*i<<" ";
    }
    */

    /*Question 7
    int n;
    cout<<"Enter your num ";
    cin>>n;
    int first=0, mid=1, last;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=2;i<=n;i++){
        last = first+mid;
        first = mid;
        mid = last;
    }
    cout<<mid<<endl;
    */
    return 0;
}