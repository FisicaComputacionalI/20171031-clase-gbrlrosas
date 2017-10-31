//Rosas Galicia Jose Gabriel
//el programa hace un promedio de esdad a la que se graduaran los alumnos de esta clase
//arreglo en edad de 16
#include <iostream>
using namespace std;

int main(){
  int sum=0;
  int edad[16];
  for(int i=0; i<16; i++){cout<<"¿que edad tienes?"<<endl;
    cin>>edad[i];}
  for(int j=0; j<16; j++){sum+=(edad[j]+3);}
  for(int j=0; j<16; j++)
    {cout<<edad[j]<<",";}
  cout<<endl;
  cout<<"el promedio de edad a la que se graduaran este grupo es"<<sum/16<<endl;
  return 0;
}
