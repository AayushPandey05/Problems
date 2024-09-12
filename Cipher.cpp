#include<iostream>
#include<string>
using namespace std;

//Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that 
//concatenates two strings and returns the result. Test the function with various input strings.

// string concatenateStrings(const string &str1, const string &str2) {
//     return str1 + str2;
// }

// int main() {
//     string str1;
//     cout << "Enter Str1: ";
//     getline(cin, str1);
//     string str2;
//     cout << "Enter Str2: ";
//     getline(cin, str2);
//     cout << "Concatenated string is: " << concatenateStrings(str1, str2);
//     return 0;
// }

//!...Pointer_Arithmetic....
//Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the 
//array. Use pointer arithmetic to print all the elements of the array.

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int* ptr = arr;

//     for (int i = 0; i < 5; i++) {
//         cout<<"Element " << i <<" : "<<*ptr<<endl;
//         ptr++;
//     }
//     return 0;
// }

//!..Pointer To Pointer....
//Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, 
//a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.

// int main() {
//     int var = 10;
//     int* ptr = &var;
//     int** pttr = &ptr;
//     cout << var << endl;
//     cout << *ptr <<" "<<ptr<<endl;
//     cout << **pttr <<" "<<pttr<<endl;
// }

//!..MAX VALUE..
//Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an
//integer array. Test your function with various arrays in the main() function.

// int Max_Element(int arr[], int n) {
//     int max = arr[0];
//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     return max;
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result = Max_Element(arr, n);
//     cout << "Max Element is: " << result <<endl;
// }

//Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a
// palindrome (a word, phrase, or sequence that reads the same backward as forward). 
//The function should ignore spaces, punctuation, and case sensitivity. Test your function with various 
//strings in the main() function.

bool isPalindrome(const string &str) {
    
}
int main() {

}