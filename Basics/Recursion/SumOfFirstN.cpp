#include<iostream>
using namespace std;
void Sum(int n){
    int sum = 0;
    for(int i = 0; i<=n;i++){
        sum = sum + i;
    }
    cout<<sum;
}   
int main(){
    int n;
    cin>>n;
    Sum(n);
    return 0;
}