#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 5, 7, 9, 6};
    int target;
    cout << "Enter target value: ";
    cin >> target;

    for (int i = 0; i < vec.size(); i++){
        if (target == vec[i]){
            cout << "Found at " << i << endl;
            break;
        }
    }
}