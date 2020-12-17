#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include <figurageometrica.h>

/** @brief Classe herdeira de FiguraGeometrica, adiciona elipsoides na escultura.
*/
class PutEllipsoid
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
    float r,g,b,a;
public:
   PutEllipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_,float r_,float g_,float b_,float a_);

    ~PutEllipsoid();

    void draw(Sculptor &s);
};

#endif // PUTELLIPSOID_H
