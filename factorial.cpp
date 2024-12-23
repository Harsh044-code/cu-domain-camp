#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0 || n > 15) {
        cout << "Number out of constraints. Please enter a number between 0 and 15." << endl;
        return 1;
    }

    cout << "The factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
