#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++) {// for printing spaces
            cout << " ";
        }
        for (int j = 0; j < n-i; j++) { // for printing numbers
            cout << i+1;
        }
        cout << "\n";
    }
}