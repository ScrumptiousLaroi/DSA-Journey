#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    char c = 65; // intializing pattern to 1

    for (int i = 1; i <= n; i++) {
        for (int j =1 ; j <= i; j++) {
            cout << c;
        }
        c++;
        cout << "\n";
    }
}