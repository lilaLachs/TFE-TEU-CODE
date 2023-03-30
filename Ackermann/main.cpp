#include <iostream>
#include "Ackermann.h"

int main() {
unsigned int result, m , n;

std::cin >> m >> n;

result = ackermann(n, m);

std::cout << result;
}
