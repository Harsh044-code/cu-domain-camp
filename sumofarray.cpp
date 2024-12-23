#include <bits/stdc++.h>
using namespace std;

int sumArray(vector<int>& arr, int n) {
    if (n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "The sum of the array elements is: " << sumArray(arr, n) << endl;
    return 0;
}