#include <iostream>


/*
The point of this script is to test different operators in CPP.
*/

int main() {
    long long num;
    long long input;
    // testing operators
    while (true) {       
       std::cin >> input;
       num = input / 2;
       std::cout << num;
       if (input == 0){
           break;
       }
    }
    return num;
}

