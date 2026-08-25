#include<iostream>
using namespace std;
int gcd(int x, int y){
    while(y!=0){
        int rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y)<<endl;
    return 0;                                   
}
