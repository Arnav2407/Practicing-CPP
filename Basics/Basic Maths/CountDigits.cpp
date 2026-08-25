#include<iostream>
#include<string>
using namespace std;
int count_digits(int n){
    return to_string(n).length();
}
int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << count_digits(n) << endl;
    return 0;
}
