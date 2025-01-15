#include <iostream>
#include <vector>
using namespace std;

void reverse_array (vector<int> &vec); t// function declaration

int main(){
    vector<int> arr = {1, 3, 5, 7, 9};
    reverse_array(arr);
    for (int val: arr){
        cout << val << endl;
    }
    return 0;
}

void reverse_array (vector<int> &vec){
    int start = 0;
    int end = vec.size() - 1;

    while(start <= end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

}