// Taschenrechner.cpp: Definiert den Einstiegspunkt für die Anwendung.
//
#include <iostream>
#include <vector>
#include "BS.hpp"

int main()
{
    int* arr = new int[11];
    int* tmp = arr;
    for(int i = 0 ; i<11; ++i, ++tmp) {
        *tmp = 20 - i;
    }


    tmp = arr;
    for(int i = 0 ; i<11; ++i, ++tmp)
    {
        std::cout << *tmp << " ";
    }
    std::cout << "\n";


    bsort(arr);

    tmp = arr;
    for(int i = 0 ; i<11; ++i, ++tmp)
    {
        std::cout << *tmp << " ";
    }
    std::cout << "\n\n";


    delete[] arr;

    //__________________________Bis hier 1.BS___________________________________

    std::vector<int> vec ;
    for(int i = 0 ; i<11; ++i, ++tmp) {
        vec.push_back(20-i);
    }
    for(int f:vec){
        std::cout << f << " ";
    }
    std::cout << "\n";

    bsort(vec);

    for(int f:vec){
        std::cout << f << " ";
    }
    std::cout << "\n\n";

    //__________________________Bis hier 1.BS___________________________________


    std::vector<int> vec2 ;
    for(int i = 0 ; i<11; ++i, ++tmp) {
        vec2.push_back(20-i);
    }
    for(int f:vec2){
        std::cout << f << " ";
    }
    std::cout << "\n";

    bsort(vec2.begin() , vec2.end());

    for(int f:vec2){
        std::cout << f << " ";
    }
    std::cout << "\n";

    return 0;
}
 //Das Programm sollte so keine Fehler produziern. Um fehler zu bekommen, einfach die for-Schleife zu weit laufen lassen