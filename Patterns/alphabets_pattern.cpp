#include <iostream>

int main(){
    int n;
    char c = 65;
    std::cout << "Enter size of alphabets square: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cout << c;
            c++;
        }
        std::cout << "\n";
    }
}    

