//!>..Count Digits in Factorial........
#include<iostream>
using namespace std;
int DigitsCount(int n){
    int res = 1;
    for(int i = 2; i <= n; i++){
        res *= i;
    }
    // return res;
    int count = 0;
    while(res > 0){
        res /= 10;
        count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int result = DigitsCount(n);
    cout<<result << endl;
}