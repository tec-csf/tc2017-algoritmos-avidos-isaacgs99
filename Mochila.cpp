#include <iostream>

using namespace std;

#define maxElem 10 

class Mochila {
  public:
  
    void meterCosas(float *e, int n, float M, float *mochila ){
        float pesoCurso;
        int i;
        for (int i = 1; i < maxElem; ++i)
        {
          mochila[i] = 0.0;
        }

        pesoCurso = 0.0;
        i = 1;

        while ((pesoCurso<M) && (i<=n))
        {
          if((e[i]+pesoCurso) <=  M){
            mochila[i] = 1.0;
          }else{
            mochila[i] = (M-pesoCurso)/e[i];
          }
          pesoCurso = pesoCurso + (mochila[i] * e[i]);
          ++i;
        }
        cout<<"peso: "<<pesoCurso<<endl;
          for (int i = 1; i < maxElem; i++)
          {
            cout<<i<<": "<<mochila[i]<<endl;

          }
          
    }



};

int main(){
  Mochila m;

  float elementos[maxElem] = {1.0,1.0,1.0,1.7,1.8,6.9};

  float pesoMax = 15.0;

  int cantElementos = 10;

  float mochilaIsaac[maxElem];

  m.meterCosas(elementos,cantElementos,pesoMax,mochilaIsaac);



}



