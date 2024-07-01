//CRUZ LLICA, Luis David

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int intento, numeroMagico=rand()%100+1;
    cout<<"Adivina el numero magico (entre 1 y 100): ";
    while(true){
        cin>>intento;
        if(intento>numeroMagico){
            cout<<"Muy alto, intenta de nuevo: ";
        }
        else if(intento<numeroMagico){
            cout<<"Muy bajo, intente de nuevo: ";
        }
        else{
            cout<<"Correcto, el numero Magico es: "<<numeroMagico<<endl;
            break;
        }
    }
    return 0;
}