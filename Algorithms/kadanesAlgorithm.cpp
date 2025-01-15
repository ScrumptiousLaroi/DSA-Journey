#include <iostream>
using namespace std;

int main(){
    int subArr[7] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < 7; i ++){
        currSum += subArr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0){
            currSum = 0;
        }

    }

    cout << maxSum << endl;
}