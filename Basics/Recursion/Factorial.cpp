#include<iostream>
using namespace std;
long long Fact(int n){
    long long fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<Fact(n);
    return 0;
}