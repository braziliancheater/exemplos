#ifndef ESTADO_HPP
#define ESTADO_HPP

#include <list>

class Estado {
public:
    virtual bool eObjetivo() = 0;
    virtual std::list<Estado *> expandir() = 0;
};

#endif