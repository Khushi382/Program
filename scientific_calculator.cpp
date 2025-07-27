#include <iostream>
using namespace std;

const double PI = 3.14159;
int totalCalculations = 0;
int cacheHits = 0;
int primeChecks = 0;

int power(int base, int exp) {
    totalCalculations++;
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int factorial(int n) {
    totalCalculations++;
    static int lastN = -1;
    static int lastFact = 1;

    if (n == lastN) {
        cacheHits++;
        return lastFact;
    }

    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }

    lastN = n;
    lastFact = fact;
    return fact;
}
int gcd(int a, int b) {
    totalCalculations++;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isPrime(int n) {
    totalCalculations++;
    primeChecks++;
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Simple Scientific Calculator\n";
    cout << "Using global constant PI = " << PI << "\n";

    int base, exp, factNum, gcdA, gcdB, primeNum;
    cout << "Enter base for power: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << "Enter number for factorial: ";
    cin >> factNum;

    cout << "Enter two numbers for GCD:\n";
    cin >> gcdA >> gcdB;

    cout << "Enter number to check prime: ";
    cin >> primeNum;

    cout << "\nCalculating expression:\n";
    int p = power(base, exp);
    int f = factorial(factNum);
    int g = gcd(gcdA, gcdB);
    int prime = isPrime(primeNum) ? 1 : 0;

    cout << base << "^" << exp << " = " << p << "\n";
    cout << factNum << "! = " << f << (cacheHits > 0 ? " (cached)" : "") << "\n";
    cout << "gcd(" << gcdA << ", " << gcdB << ") = " << g << "\n";
    cout << primeNum << " is " << (prime ? "prime" : "not prime") << "\n";

    int result = (p & 31) | (f >> 2) ^ (g * prime);

    cout << "Result = (" << p << " & 31) | (" << f << " >> 2) ^ (" << g << " * " << prime << ") = " << result << "\n";

    cout << "\nStatistics:\n";
    cout << "Total calculations: " << totalCalculations << "\n";
    cout << "Cache hits for factorial: " << cacheHits << "\n";
    cout << "Prime checks: " << primeChecks << "\n";

    return 0;
}
