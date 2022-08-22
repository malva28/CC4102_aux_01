#ifndef COMMON_AUX_01_H
#define COMMON_AUX_01_H

#include <iostream>
#include <random>
#include <vector>

struct resultadoBusqueda
{
    int index;
    int paso;
};

void printInfo()
{
    std::cout << "******************************\n" <<
    "En estos ejemplos, nosotros haremos el papel del adversario frente al algoritmo. La única regla del juego es que no podemos colocar un input invalido; Por ejemplo, no podemos poner que el target está en la posición 0 de la búsqueda lineal si vamos en el index 2.\n"
    << "******************************\n\n";
}


#endif COMMON_AUX_01_H