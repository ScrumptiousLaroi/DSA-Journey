#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) { // printing spaces
            cout<< " ";
        }
        for (int j = 1; j <= i; j++ ) { // first half
            cout<< j;
        }
        for (int j = i - 1; j > 0; j-- ) { // second half
            cout << j;
        }
        cout << "\n";
    }
}