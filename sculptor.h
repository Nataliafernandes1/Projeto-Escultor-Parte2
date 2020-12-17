#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};
/**
* @brief A classe Sculptor serve para manipular os pixels de uma matriz tridimensional
        */
class Sculptor {
protected:
  Voxel ***v;
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
   * @brief Sculptor Construtor da classe
   * @param _nx valor inicial de nx
   * @param _ny valor inicial de ny
   * @param _nz valor inicial de nz
   */
  Sculptor(int _nx, int _ny, int _nz);
   /**
  * @brief ~Sculptor eh o destrutor da classe
  */
  ~Sculptor();
  /**
   * @brief setColor Define a cor atual do desenho
   * @param r_ Define a cor vermelha
   * @param g_ Define a cor verde
   * @param b_ Define a cor azul
   * @param alpha_ Define se eh opaco
   */
  void setColor(float r_, float g_, float b_, float alpha_);
  /**
    * @brief putVoxel Ativa o voxel na posição (x,y,z) (fazendo isOn = true) e atribui ao mesmo a cor     atual de desenho
    * @param x posição "x"
    * @param y posição "y"
    * @param z posição "z"
    */
  void putVoxel(int x, int y, int z);
  /**
    * @brief cutVoxel Desativa o voxel na posição (x,y,z) (fazendo isOn = false)
    * @param x posição "x"
    * @param y posição "y"
    * @param z posição "z"
    */
  void cutVoxel(int x, int y, int z);
  /**
    * @brief writeOFF grava a escultura no formato OFF no arquivo filename
    */
  void writeOFF(char *filename);
  void limpaVoxels();
};


#endif // SCULPTOR_H
