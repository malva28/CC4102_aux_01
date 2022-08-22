#include <iostream>
#include <random>
// #include <array>
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

resultadoBusqueda busqLineal(std::vector<int> lista)
{
    int paso{ };

    for(int index{ }; index < lista.size(); ++index)
    {
        ++paso;
        std::cout << "k == " << index << '\n';
        int target{ };
        std::cin >> target;

        if(lista[index] == target)
        {
            return resultadoBusqueda{ index, paso };
        }
    }
    return resultadoBusqueda{ -1, paso };
}

int main() {
    // std::array<int,6> A{ {0,1,2,3,4,5} };
    printInfo();
    std::cout << "BÚSQUEDA LINEAL\n\n";
    std::vector<int> A{ {0,1,2,3,4,5} };


    resultadoBusqueda res{ busqLineal(A) };
    std::cout << "encontrado en la posición " << res.index << " al realizar " << res.paso << " pasos\n";


    return res.index < 0;
}