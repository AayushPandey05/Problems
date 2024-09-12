#include<iostream>
using namespace std;
//!..Itrative Implementation........
// int fact(int n){
//     int res = 1;
//     for(int i=2; i<=n; i++){
//         res *= i;
//     }
//     return res;
// }
// int main(){
//     int n;
//     cin>>n;
//     int res = fact(n);
//     cout<<res<<endl;
// }

//!...Recursive Method.............
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int res = fact(n);
    cout<<res<<endl;
}
