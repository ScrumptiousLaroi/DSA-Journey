#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(25); // appends a value
    vec.push_back(30);
    vec.push_back(35);

    cout << vec.size() << endl; 

    cout << vec.capacity() << endl;

    cout << "Size: " << vec.size() << endl;
    for (int i : vec){ // syntax for "for each loop"
        cout << i << endl;
    }

    vec.pop_back();

    cout << "Size after pop back : " << vec.size() << endl;

    for (int i : vec){ // syntax for "for each loop"
        cout << i << endl;
    }
}