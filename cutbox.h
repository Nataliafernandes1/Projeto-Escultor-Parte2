#ifndef CUTBOX_H
#define CUTBOX_H
#include <figurageometrica.h>
/**
    * @brief Classe herdeira de FiguraGeometrica, remove caixas na escultura.
    */
class CutBox
{
protected:
    int x0,x1,y0,y1,z0,z1;
    float r,g,b,a;

 public:
    CutBox(int x_0, int x_1, int y_0, int y_1, int z_0, int z_1);

    ~CutBox();

    void draw(Sculptor &s);
};

#endif // CUTBOX_H
