//CRUZ LLICA, Luis David

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b, c;
    float dis, r1, r2;
    cout<<"Ingrese los coeficientes de la ecuacion cuadratica: ";cin>>a>>b>>c;
    dis=pow(b, 2)-4*a*c;
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
    return 0;
}