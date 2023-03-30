//
// Created by Stefan Schoch on 10.02.23.
//


#include "BS.hpp"


void bsort(int *arr)
{
    for(int i = 0; *(arr+i+1); ++i )
    {
        for(int j = i+1; *(arr + j); ++j)
        {
            if(*(arr + i) > *(arr + j))
            {
                //std::swap(*(arr+i), *(arr+j));
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}


void bsort(std::vector<int>& rec)
{
    for (int i = 0; i < rec.size() - 1; ++i)
    {
        for (int j = i+1 ; j < rec.size() ; ++j)
        {
            if(rec.at(i) > rec.at(j))
            {
                int temp = rec.at(i);
                rec.at(i) = rec.at(j);
                rec.at(j) = temp;
                // std::swap(rec.at(i), rec.at(j));
            }
        }
    }
}


void bsort(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    for (std::vector<int>::iterator IT = begin ; IT < end ; ++IT)
    {
        for (std::vector<int>::iterator JT = begin ; JT < IT; ++JT)
        {
            if(*IT < *JT)
                std::iter_swap(IT,JT);
        }
    }
}