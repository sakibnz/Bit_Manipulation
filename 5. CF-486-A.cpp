#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    long long n, x, y, noOdd, noEven;
    cin >> n;
    if((n & 1) == 0) { // n % 2 == 0
        x = n;                // No of odd numbers = noOdd 
        y = n -1;             // No of even numbers = noEven
        noOdd = noEven = (n >> 1); // n >> 1 = n / 2
    }
    else {
        x = n - 1;
        y = n;
        noEven = n >> 1;
        noOdd = n - noEven;
    }
    long long evenSum = ((2 + x) >> 1) * noEven; // (2+x)/2 * noEven
    long long oddSum = ((1 + y) >> 1) * noOdd;

    cout << evenSum - oddSum << endl;

    return 0; 
}