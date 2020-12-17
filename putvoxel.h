#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include <figurageometrica.h>
/**
    * @brief adiciona pontos na escultura.
    */
class Putvoxel : public FiguraGeometrica
{
    protected:
    int x,y,z;
    float r, g, b, a;
    public:
    Putvoxel(int x_,int y_,int z_, float r_,float g_,float b_,float a_);

    ~Putvoxel();

    void draw(Sculptor &s);
};
#endif // PUTVOXEL_H
