#include <iostream>
using namespace std;

// Addition
int add(int a, int b) {
    return a + b;
}

// Multiplication table
void printTable(int n) {
    for (int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;
}

// Number pattern
void pattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

// Sum of digits
int sumDigits(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

// GCD
int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

// LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Missing number
int missingNum(int arr[], int n) {
    int total = n * (n + 1) / 2, sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return total - sum;
}

int main() {
    cout << "Addition(5,7): " << add(5,7) << endl;
    printTable(5);
    cout << "Pattern:" << endl;
    pattern(4);
    cout << "Sum of digits(1234): " << sumDigits(1234) << endl;
    cout << "GCD(12,18): " << gcd(12,18) << ", LCM: " << lcm(12,18) << endl;

    int arr[] = {0, 1, 2, 4, 5}; // missing 3
    cout << "Missing number: " << missingNum(arr, 5) << endl;
    return 0;
}
