#include <bits/stdc++.h>
using namespace std;

void printGreeting(const string& firstName, const string& lastName) {
    cout << "Hello " << firstName << " " << lastName << "! You just delved into function." << endl;
}

int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    printGreeting(firstName, lastName);

    return 0;
}
