//CRUZ LLICA, Luis David

#include<iostream>
#include<cmath>
using namespace std;
void calcularRaices(int a, int b, int c, float &r1, float &r2);

int main(){
    int a, b, c;
    float r1, r2;
    cout<<"Ingrese los coeficientes de la ecuacion cuadratica: ";cin>>a>>b>>c;
    calcularRaices(a, b, c, r1, r2);
    return 0;
}

void calcularRaices(int a, int b, int c, float &r1, float &r2){
    float dis;
    dis = pow(b, 2)-4*a*c;
    if(dis>0){
        r1=-b+sqrt(dis)/2*a;
        cout<<"La raiz es de: "<<r1<<endl;
        r2=-b-sqrt(dis)/2*a;
        cout<<"La raiz es de: "<<r2<<endl;
    }
    else if(dis==0){
        r1=-b+sqrt(dis)/2*a;
        cout<<"La raiz es de: "<<r1<<endl;
    }
    else{
        cout<<"Las raices son complejas"<<endl;
    }
}