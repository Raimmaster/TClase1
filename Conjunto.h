#ifndef CONJUNTO_H
#define CONJUNTO_H

#include "NLegisladores.h"

class Conjunto
{
public:
    NLegisladores* actual;
    NLegisladores* inicio;
    Conjunto();
    bool insertar(NLegisladores* n);
    bool suprimir(int id);
    bool isMiembro(int id);
};

#endif // CONJUNTO_H
