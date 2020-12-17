#include "cutbox.h"
#include <sculptor.h>

CutBox::CutBox(int x_0, int x_1, int y_0, int y_1, int z_0, int z_1)
{
     this->x0 = x_0;
     this->x1 = x_1;
     this->y0 = y_0;
     this->y1 = y_1;
     this->z0 = z_0;
     this->z1 = z_1;

}

CutBox::~CutBox(){}

void CutBox::CutBox::draw(Sculptor &s)
{
           for (int i = x0; i<x1; i++){
             for (int j = y0; j<y1; j++){
                 for (int k = z0; k<z1; k++){
                     s.cutVoxel(i,j,k);
                 }
             }
         }
}
