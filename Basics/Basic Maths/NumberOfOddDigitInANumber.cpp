class Solution {
public:
    int countOddDigit(int n) {
        int digit,count=0;
        while(n>0){
            digit=n%10;
            if(digit%2!=0){
                count++;
            }
            n/=10;
        }
        return count;
    }
};