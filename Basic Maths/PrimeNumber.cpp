#include<iostream>
using namespace std;
bool isPrime(int n){
    int count = 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool Prime = isPrime(n);
    if(Prime){
        cout<<"Prime"<<" ";
    }
    else{
        cout<<"Non Prime"<<" ";
    }
}
