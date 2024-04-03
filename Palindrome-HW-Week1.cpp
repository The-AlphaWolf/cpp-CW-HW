//Entered no. is Palindrome no. or not ( add logic to reverse no. code)

#include<iostream>
using namespace std;
int main() {
    int n,num,rn=0,rem;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    while (n!= 0) {
        rem = n % 10;
        rn = rn * 10 + rem;
        n /= 10;
    }
    if (num == rn) {
        cout << "The number is a palindrome.";
    } else {
        cout << "The number is not a palindrome.";
    }
    return 0;
}