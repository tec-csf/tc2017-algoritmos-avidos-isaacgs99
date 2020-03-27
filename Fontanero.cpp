#include <iostream>
#include <vector>

using namespace std;

class Fontanero{
  public:
    vector<int> clientes;

    void insertCliente(int tiempo){
      clientes.push_back(tiempo);
      sort(clientes.begin(), clientes.end());
    }

    string satis(int tiempo, int i, int acum){
      int total;
      string men;
      total = tiempo - acum;
        if(total == 0){
            men = "bien";
          }else if(total <= 10 && total > 0){
            men = "maso";
          }else{
            men = "malo";
          }
          return men;
        }
        

    void arreglar(){
      int acumulado = clientes[0];
      int i = 0;
      while(i<clientes.size()){
        cout<<"Cliente "<<i+1<<" : "<<satis(clientes[i], i, acumulado)<<endl;
        acumulado = acumulado + clientes[i];
        i++;
          
      }     
    }
};

int main(){
  Fontanero f;

  int Isaac = 10;
  int Vicente = 5;
  int Ana = 30;

  f.insertCliente(Isaac);
  f.insertCliente(Vicente);
  f.insertCliente(Ana);

  f.arreglar();

}