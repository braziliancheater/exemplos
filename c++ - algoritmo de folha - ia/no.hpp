#include "estado.hpp"
#include <cstdlib>

class No {
private:
    Estado * estado;
    No * pai;
public:
    // Raiz não tem pai
    No(Estado * estado);
    No(Estado * estado, No * pai);

    // Getters
    Estado * getEstado();
    No * getPai();
};