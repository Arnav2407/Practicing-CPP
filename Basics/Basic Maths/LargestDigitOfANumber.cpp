#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int digit;
        int largest=0;
        for(int i=0;i<n;i++){
            digit = n%10;
            n/=10;
            largest = max(digit,largest);
        }
        return largest;
    }
};