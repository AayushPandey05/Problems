//!>..LCM of two number...
//..Time Complexity: O(log(min(a,b))........
#include<iostream>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a%b);
}
int lcm(int a, int b) {
    return(a * b) / gcd (a, b);
}
int main() {
    int a;
    cout << "First Value: ";
    cin>>a;
    int b;
    cout << "Second Value: ";
    cin>>b;
    cout<<"GCD is: "<<gcd(a,b)<<endl;
    cout<<"LCM is: "<<lcm(a,b)<<endl;
}