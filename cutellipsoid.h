#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include"figurageometrica.h"

/** @brief Classe herdeira de FiguraGeometrica, remove elipsoides na escultura.
*/
class CutEllipsoid
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
public:
     CutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);

    ~CutEllipsoid();

    void draw(Sculptor &s);
};

#endif // CUTELLIPSOID_H
