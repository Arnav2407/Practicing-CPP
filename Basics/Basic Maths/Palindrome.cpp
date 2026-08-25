#include<iostream>
using namespace std;
int main(){
    int n, rev=0;                                                                                           
    cin>>n;
    int original = n; 
    while(n!=0){
        int digit = n%10;
        rev = (rev * 10) + digit;
        n = n/10;
    }
    cout<<rev<<endl;
    if(rev == original){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;
}