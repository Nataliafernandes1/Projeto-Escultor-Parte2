#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

/** @brief Classe abstrata FiguraGeometrica, torna o metódo draw virtual, e em seguida ser implementado pelas subclasses (classes herdeiras).
*/

class FiguraGeometrica
{
protected:
    float r, g, b, a;
public:
    virtual ~FiguraGeometrica(){};
    virtual void draw(Sculptor &s)=0;
};

#endif // FIGURAGEOMETRICA_H
