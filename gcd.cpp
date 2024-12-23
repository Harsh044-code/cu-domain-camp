#include <bits/stdc++.h>
using namespace std;

int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int smallest = *min_element(nums.begin(), nums.end());
    int largest = *max_element(nums.begin(), nums.end());

    int gcd = findGCD(smallest, largest);
    cout << "The GCD of the smallest and largest numbers is: " << gcd << endl;

    return 0;
}
