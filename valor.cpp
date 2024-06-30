//CRUZ LLICA, Luis David

#include<iostream>
using namespace std;

void porValor(int a);
void porRefencia(int &a);

int main(){
    int num=5;
    cout<<"Antes de pasar por valor, num = "<<num<<endl;
    porValor(num);
    cout<<"Luego de pasar de valor, num = "<<num<<endl;

    
    return 0;
}