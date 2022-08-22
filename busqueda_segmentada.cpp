#include <common.h>

resultadoBusqueda busqSegmentada(std::vector<int> lista)
{
    int paso{ };
    int i = 0;
    int j = lista.size()-1;
    int target{ };

    std::mt19937 mt{ std::random_device{}() };

    while(i<j)
    {
        ++paso;
        std::uniform_int_distribution rangeij{ i,j };
        int k{ rangeij(mt) };

        std::cout << "k == " << k << "; " << k-i << ">= " << j-k << '\n';
        std::cout << "si k-i>= j-k, entonces: target < k, si no: target > k\n";
        std::cin >> target;
        
        if(lista[k] < target)
        {
            i = k+1;
        } else if(lista[k] > target)
        {
            j = k-1;
        } else
        {
            return resultadoBusqueda{ k, paso };
        }
    }

    if(i == j && lista[i] == target)
    {
        std::cout << "k == " << i << '\n';
        return resultadoBusqueda{ i, paso+1 };
    }
    return resultadoBusqueda{ -1, paso };
}

int main() {
    // std::array<int,6> A{ {0,1,2,3,4,5} };
    printInfo();
    std::cout << "BÚSQUEDA SEGMENTADA\n\n";
    std::vector<int> A{ {0,1,2,3,4,5} };


    resultadoBusqueda res{ busqSegmentada(A) };
    std::cout << "encontrado en la posición " << res.index << " al realizar " << res.paso << " pasos\n";


    return res.index < 0;
}