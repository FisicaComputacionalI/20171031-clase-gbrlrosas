//Rosas Galicia Jose Gabriel
//el programa hace un promedio de esdad a la que se graduaran los alumnos de esta clase
//arreglo en edad de los que sean necesarios en talla se espesifica 
// este programa pregunta cuantos alumnos introduciras antes de comenzar para hacer un promedio con ese numero de alumnos
#include <iostream>
using namespace std;

int main(){
  size_t talla=16;
  int sum=0;
  cout<<"cuantos alumnos introduciras"<<endl;
  int *edad=new int[talla];
  cin>>talla;
  for(int i=0; i<talla; i++){cout<<"¿que edad tienes?"<<endl;
    cin>>edad[i];}
  for(int j=0; j<talla; j++){sum+=(edad[j]+3);}
  for(int j=0; j<talla; j++)
    {cout<<edad[j]<<",";}
  cout<<endl;
  cout<<"el promedio de edad a la que se graduaran este grupo es"<<sum/talla<<endl;
  return 0;
}
