//CRUZ LLICA, Luis David

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int b, c;
    float a;
    cout<<"Ingrese los catetos del triangulo: ";cin>>b>>c;
    a = sqrt(pow(b, 2)+pow(c, 2));
    cout<<"La hipotenusa es de: "<<a<<endl;
    return 0;
}