#include <iostream>
using namespace std;

// Check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

// Generate primes up to n
void printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            cout << i << " ";
    cout << endl;
}

// Factorial of n
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Fibonacci up to n terms
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// Even or Odd
void evenOdd(int n)
{
    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
}

// Longest string length
int longestString(string arr[], int n)
{
    int maxLen = 0;
    for (int i = 0; i < n; i++)
        if (arr[i].length() > maxLen)
            maxLen = arr[i].length();
    return maxLen;
}

int main()
{
    cout << boolalpha;
    cout << "isPrime(29): " << isPrime(29) << endl;
    cout << "Primes up to 20: ";
    printPrimes(20);
    cout << "Factorial(5): " << factorial(5) << endl;
    cout << "Fibonacci(7): ";
    fibonacci(7);
    evenOdd(9);
    string arr[] = {"hello", "world", "C++", "programming"};
    cout << "Longest string length: " << longestString(arr, 4) << endl;
    return 0;
}