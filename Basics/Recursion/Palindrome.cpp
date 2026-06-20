#include<iostream>
using namespace std;
bool isPalindrome(string word){
    int left = 0;
    int right = word.length()-1;
    while(left<right){
        if(word[left]!=word[right]){
            return false;
        }
        else{
            return true;
        }
        left++;
        right--;
    }
}
int main(){
    string word;
    cin>>word;
    if (isPalindrome(word))
        cout << "true";
    else
        cout << "false";

    return 0;
}