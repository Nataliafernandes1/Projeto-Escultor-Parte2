#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include <figurageometrica.h>
/** @brief Classe herdeira de FiguraGeometrica, adiciona esferas na escultura.
*/
class PutSphere
{
protected:
    int xcenter,ycenter,zcenter,radius;
    float r,g,b,a;

public:
    PutSphere(int xcenter_, int ycenter_, int zcenter_, int radius_,float r_,float g_,float b_,float a_);

    ~PutSphere();

    void draw(Sculptor &s);
};

#endif // PUTSPHERE_H
