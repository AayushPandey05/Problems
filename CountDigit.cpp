#include<iostream>
using namespace std;
int CountDigit(int n) {
    int count = 0;
    while(n>0) {
        n = n/10;
        count++;
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    int result = CountDigit(n);
    cout << result << endl;
}