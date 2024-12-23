#include <bits/stdc++.h>
using namespace std;

int recur_sum(int n) {
    if (n == 0)
        return 0;
    return n + recur_sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Number out of constraints. Please enter a non-negative number." << endl;
        return 1;
    }

    cout << "The sum of the first " << n << " natural numbers is: " << recur_sum(n) << endl;
    return 0;
}
