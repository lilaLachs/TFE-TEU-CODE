//
// Created by Maik Schmidt on 31.03.23.
//
#include "vector"
#include "stdexcept"

size_t find (const std::vector<int>& data, int search_value){

    if(data.empty())
        throw std::domain_error("Vector is empty");

    size_t pos = 0;
    int low = 0;
    int high = data.size() -1;

    if (data.at(pos) == search_value)
        return pos;
    pos = data.size() / 2 ;

    while(low + 1 != high) {

        if (data.at(pos) > search_value) {

            high = pos;
            pos /= 2;
        }
        else if (data.at(pos) < search_value) {
            low = pos;
            pos = ((data.size() - pos) / 2) + pos;
        }

        if (data.at(pos) == search_value)
            return pos;
    }

    throw std::domain_error("Error");
}

