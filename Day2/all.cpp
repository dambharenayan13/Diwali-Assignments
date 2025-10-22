#include <iostream>
#include <cmath>
using namespace std;

// Sum of first n even numbers
int sumEven(int n) {
    return n * (n + 1);
}

// Sum of first n odd numbers
int sumOdd(int n) {
    return n * n;
}

// Check palindrome
bool isPalindrome(int n) {
    int rev = 0, temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

// Armstrong number
bool isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

// Reverse number
int reverseNum(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    cout << "Sum of first 5 even numbers: " << sumEven(5) << endl;
    cout << "Sum of first 5 odd numbers: " << sumOdd(5) << endl;
    cout << "Palindrome(121): " << isPalindrome(121) << endl;
    cout << "Armstrong(153): " << isArmstrong(153) << endl;
    cout << "Reverse(1200): " << reverseNum(1200) << endl;
    return 0;
}
