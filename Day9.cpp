#include<iostream>
using namespace std;
int main(){
    
    // Pattern 1
    // int i,j;
    // for(j=1;j<=6;j++){
    //     for(i=1;i<=j;i++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int j = 1; j <= 6; j++) {
    //     cout << j << " ";
    // }

    // Pattern 2
    // int j,i;
    // for(j=0;j<5;j++){
    //     for(i=0;i<=j;i++){
    //         cout<<char('A'+i)<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern 3
    // int i,j;
    // for(j=0;j<=5;j++){
    //     for(i=10;i<=10+j;i++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // Pattern 4
    // int i,j;
    // // for(j=0;j<=5;j++){
    // //     for(i=10;i<=10+j;i++){
    // //         cout<<i<<" ";
    // //     }
    // //     cout<<endl;
    // // }

    // Pattern 5
    int j;
    char i;
    for(j=4;j>=1;j--){
        for(i=0;i<j;i++){
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
}