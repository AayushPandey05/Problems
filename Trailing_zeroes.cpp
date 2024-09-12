//!...Trailing Zeroes in Factorial...
#include<iostream>
using namespace std;
int countTrailingZero(int n) {
    int res = 0;
    for(int i = 5;i <= n; i *= 5){
        res = res + n/i;
    }
    return res;
}
int main() {
    int n;
    cin >> n ;
    int result = countTrailingZero(n);
    cout << "Trailing zeroes: " <<result << endl;
}