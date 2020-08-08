#include <iostream>


/*
The point of this script is to test the implemenation of Binary Exponentiation.
This tests both the recursive algorithm along with the alogithm that does not
use recursion.
*/

//rescursive implimentation 
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1; // Goes to zero before propogating back upwards
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

// non recursive implimentation
long long binpow2(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main() {
    long long base;
    long long power;
    std::cout << "\n Enter a base below: " << "\n";
    std::cin >> base;
    std::cout << "\n Enter a power below: " << "\n";
    std::cin >> power; 
    long long output = binpow2(base, power); //change the function here
    std::cout << "\n The result is: " << output << "\n";
    return 0;
}
