//CRUZ LLICA, Luis David

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int cdad, maxi;
    cout<<"Ingrese la cantidad de numeros aleatorios: ";cin>>cdad;
    cout<<"Ingrese el maximo entero: ";cin>>maxi;
    cout<<"Numeros aleatorios generados: "<<endl;
    for(int i=0; i<cdad; i++){
        int numal=rand()%maxi+1;
        cout<<numal<<" "<<endl;
    }
    return 0;
}