#include <iostream> 
using namespace std;

int linear_search(int arr[], int target, int size);

int main(){
    int array[] = {1, 2 , 5, 8, 9};
    int size = sizeof(array);
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    cout << "The Target value is at: " << linear_search(array, target, size) << endl;



}

int linear_search(int arr[], int target, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}