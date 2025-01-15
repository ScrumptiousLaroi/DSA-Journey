#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int x;
    cin >> x;
    int rev = 0, digits = 0, power = 0;
    int temp = x;
    while (temp > 1){
        temp = temp / 10;
        digits += 1;
    }
    temp = x;
    for (int i = 1; i <= digits; i++){
        power = pow(10, (digits - i));
        rev += (temp % 10) * power;
    }
    if (rev == x){
        cout << "True";
    }
    else{
        cout << "False";
    }
}