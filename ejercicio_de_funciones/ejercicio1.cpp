#include<iostream>
#include<cmath>
using namespace std;

float area(float a);

int main(){
    float r, res;
    cout<<"Ingrese longitud del radio: ";cin>>r;
    res= area(r);
    cout<<"El area es de: "<<res<<endl;
    return 0;
}

//definimos la funcion area:
float area(float a){
    return M_PI*pow(a, 2);
}