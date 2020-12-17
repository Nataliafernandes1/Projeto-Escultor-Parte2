#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include <figurageometrica.h>
/** @brief Classe herdeira de FiguraGeometrica, remove esferas na escultura.
*/
class CutSphere
{
protected:
    int xcenter,ycenter,zcenter,radius;

public:
    CutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_);

    ~CutSphere();

    void draw(Sculptor &s);
};

#endif // CUTSPHERE_H
