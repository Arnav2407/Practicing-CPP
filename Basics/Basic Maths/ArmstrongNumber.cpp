#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int original = n;
    int temp = n;
    int count= 0;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    while(n>0){
        int lastdigit = n % 10;
        sum += pow(lastdigit,count);
        n = n/10;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}