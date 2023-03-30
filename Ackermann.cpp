//
// Created by Maik Schmidt on 31.03.23.
//
#include "Ackermann.h"
#include "stdexcept"

unsigned int ackermann (unsigned int n,unsigned int m)
{
        if(n < 0 || m < 0)
            throw std::domain_error("Oopsie, something went wrong!");

    if (n == 0)
        return m + 1;

    else if (m == 0)
        return ackermann(n -1, 1);

    else
        return ackermann(n - 1, ackermann(n, m - 1));
}