#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "cutbox.h"
#include "cutellipsoid.h"
#include "cutsphere.h"
#include "figurageometrica.h"
#include "putbox.h"
#include "putellipsoid.h"
#include "putsphere.h"
#include "putvoxel.h"
#include "sculptor.h"
#include <vector.h>

using namespace std;

int main()
{
    vector <FiguraGeometrica*> v;

    int dx = 0, dy = 0, dz = 0;
    ifstream arquivo;
    arquivo.open("fig.txt");
    string s="0", comando;
            while(s!=""){
                 getline(arquivo,s);
                 stringstream ss(s);
                if(arquivo.good()){
                    ss>>comando;
                        if(comando.compare("dim")==0){
                        ss>>dx>>dy>>dz;
                        Sculptor(dx,dy,dz);
                    }else if(comando.compare("putvoxel")==0){
                        int x_,y_,z_;
                        float r_,g_,b_,a_;
                        ss >> x_ >> y_ >> z_;
                        ss >> r_ >> g_ >> b_ >> a_;
                        v.push_back(new Putvoxel(x_,y_,z_,r_,g_,b_,a_) );
                    }else if(comando.compare("cutvoxel")==0){
                        int x_, y_, z_;
                        ss>>x_>>y_>>z_;
                        v.push_back(new cutVoxel(x_,y_,z_));
                    }else if(comando.compare("putbox")==0){
                        int x_0,x_1,y_0,y_1,z_0,z_1;
                        float r_,g_,b_,a_;
                        ss>>x_0>>x_1>>y_0>>y_1>>z_0>>z_1;
                        ss>>r_>>g_>>b_>>a_;
                        v.push_back(new PutBox(x_0,x_1,y_0,y_1,z_0,z_1,r_,g_,b_,a_));
                    }else if(comando.compare("cutbox")==0){
                        int x_0,x_1,y_0,y_1,z_0,z_1;
                       ss>>x_0>>x_1>>y_0>>y_1>>z_0>>z_1;
                        v.push_back(new CutBox(x_0,x_1,y_0,y_1,z_0,z_1));
                    }else if(comando.compare("putsphere")==0){
                        int xcenter_,ycenter_,zcenter_,radius_;
                        float r_,g_,b_,a_;
                        ss>>xcenter_>>ycenter_>>zcenter_>>radius_;
                        ss>>r_>>g_>>b_>>a_;
                        v.push_back(new PutSphere(xcenter_,ycenter_,zcenter_,radius_,r_,g_,b_,a_));
                    }else if(comando.compare("cutsphere")==0){
                        int xcenter_,ycenter_,zcenter_,radius_;
                         ss>>xcenter_>>ycenter_>>zcenter_>>radius_;
                        v.push_back(new CutSphere(xcenter_,ycenter_,zcenter_,radius_));
                    }else if(comando.compare("putellipsoid")==0){
                       int xcenter_,ycenter_,zcenter_,rx_,ry_,rz_;
                        float r_,g_,b_,a_;
                        ss>>xcenter_>>ycenter_>>zcenter_>>rx_>>ry_>>rz_;
                        ss>>r_>>g_>>b_>>a_;
                        v.push_back(new PutEllipsoid(xcenter_,ycenter_,zcenter_,rx_,ry_,rz_,r_,g_,b_,a_));
                    }else if(comando.compare("cutellipsoid")==0){
                        int xcenter_,ycenter_,zcenter_,rx_,ry_,rz_;
                        ss>>xcenter_>>ycenter_>>zcenter_>>rx_>>ry_>>rz_;;
                        v.push_back(new CutEllipsoid(xcenter_,ycenter_,zcenter_,rx_,ry_,rz_));
                    }else{
                        cout<<"comando nao encontrado"<<endl;
                        break;
                    }
                }
            }
             Sculptor d(dx,dy,dz);
             for(int i=0;i<v.size();i++){
                 v[i]->draw(d);
             }

             cout << "\nArquivo.txt Interpretado!" << endl;
             desenho.writeOFF("Arquivointerpretado.OFF");
        }


    return 0;
}
