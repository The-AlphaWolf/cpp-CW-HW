//Check whether entered no. is Armstrong nos. or not  (use sum of digits code, add logic)

#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,n1,num,rn=0,rem,l=0;
    cout << "Enter a number: ";
    cin >> n;
    num = n1 = n;
    while (n!= 0) {
        l++;
        n /= 10;
    }
    while (n1!= 0) {
        rem = n1 % 10;
        rn = pow(rem,l)+rn;
        n1 /= 10;
    }
    if (num == rn) {
        cout << "The Number is an Armstrong Number.";
    } else {
        cout << "The Number is not an Armstrong Number.";
    }
    return 0;
}