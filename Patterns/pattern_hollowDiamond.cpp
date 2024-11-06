#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 0; i < n; i++){ // for upper half of triangle
        for (int j = i; j < n-1; j++){ // for printing spaces in first half left side
        cout << " ";
    }
        cout << "*";
    if (i > 0){
        for (int j = 0; j < 2*i - 1; j++){ // for printing spaces in first half right side
        cout << " ";
    }
    cout <<"*";
    }
    cout << "\n";
    }

    for (int i = 0; i < n - 1; i++ ){// for bottom half of triangle
        for (int j = 0; j < i + 1; j++ ){// for printing spaces in second half left side
            cout<<" ";
        }
        cout<<"*";
        if (i < n - 2){
            for (int j = 0; j < n - 2*i; j++ ){// for printing spaces in second half right side
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
}