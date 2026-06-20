#include<iostream>
using namespace std;
void printName(string name, int count, int N){
    if(count==N){
        return;
    }
    cout<<name<<" ";
    printName(name, count + 1, N);
}
int main(){
    int n;
    cin>>n;
    string name;
    cin>>name;
    printName(name,0,n);
    return 0;
}