#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev2 = 0, prev1 = 1, current;
    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Fibonacci numbers are defined for non-negative integers." << endl;
    } else {
        cout << "F(" << n << ") = " << fibonacci(n) << endl;
    }
    return 0;
}