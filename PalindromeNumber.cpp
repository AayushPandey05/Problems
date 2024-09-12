#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int rev = 0;
    int temp = n;
    while (temp != 0) {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp /= 10;
    }
    return(rev == n);
}
int main() {
    int n;
    cin>>n;
    int result = isPalindrome(n);
    if(result) {
        cout<< "Yes" << endl;
    }
    else {
        cout<< "No" << endl;
    }
}