//
// Created by Maik Schmidt on 31.03.23.
//
#include "fibonacci.h"

int fibonacci_recursive(int nth_number)
{
    if (nth_number < 2)
    {
        // f(n) = n //f�r n == 1 oder n == 0
        return nth_number;
    }
    //f(n) =       f(n-1)                      +          f(n-2)
    return fibonacci_recursive(nth_number - 1) + fibonacci_recursive(nth_number - 2);
}

int fibonacci_iterative(int nth_number)
{
    if (nth_number < 2)
    {
        return nth_number;
    }
    int fib_n_minus_2 = 0;
    int fib_n_minus_1 = 1;
    for (int i = 2; i <= nth_number; ++i)
    {
        auto current = fib_n_minus_2 + fib_n_minus_1;
        fib_n_minus_2 = fib_n_minus_1;
        fib_n_minus_1 = current;
    }
    return fib_n_minus_1;
}

int fibonacci(int nth_number)
{
    return fibonacci_recursive(nth_number);
}

bool check_fibonacci(int nth_number, int expected)
{
    if (fibonacci(nth_number) == expected)
    {
        return true;
    }
    else {
        return false;
    }
}

