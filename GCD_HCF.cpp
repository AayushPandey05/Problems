//!..Time Complexity: O(log(min(a,b))........
#include<iostream>
using namespace std;
int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    else {
        return GCD(b, a % b);
    }
}
int main(){
    int a;
    cout<<"Enter First Value a: ";
    cin>>a;
    int b;
    cout<<"Enter Second Value b: ";
    cin>>b;
    int result = GCD(a, b);
    cout<<"GDC OR HCF of a and b is: "<<result<<endl;
}