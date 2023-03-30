#include "iostream"
#include "fibonacci.h"

int main(){
    int n;
    std::cin >> n ;
    std::cout << fibonacci_iterative(n);
}