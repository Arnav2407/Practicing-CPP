#include<iostream>
using namespace std;
int fibbonacciNumber(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        return fibbonacciNumber(n-1)+fibbonacciNumber(n-2);
    }
int main(){
    int n;
    cin>>n;
    cout<<fibbonacciNumber(n);

    return 0;
}
