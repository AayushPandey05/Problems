//!..3 time faster solution for prime check...
//--- Time Complexity: O(sqrt(n))..
//--- Auxillary Space O(1)...
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 0){
        return false;
    }
    if(n == 2 || n == 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for(int i = 5; i*i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Value: ";
    cin >> n;
    int res = isPrime(n);
    if(res == true){
        cout<<"It is Prime"<<endl;
    }
    else{
        cout<<"It is not Prime"<<endl;
    }
}