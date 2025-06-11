#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double a, b, c, x1, x2,discriminante;
	cout<<"--- Cálculo de Raíces de una Ecuación Cuadrática ---"<<endl;
	cout<<"Ingrese el valor del coeficiente 'a': ";
	cin>>a;
	cout<<"Ingrese el valor del coeficiente 'b': ";
	cin>>b;
	cout<<"Ingrese el valor del coeficiente 'c': ";
	cin>>c;
	discriminante=pow(b,2)-(4*a*c);
	if(discriminante<0){
		cout<<"--- Raíces complejas: ---"<<endl;
		cout<<"Raíz 1 (X1): "<<((-b)/(2*a))<<" + "<<sqrt(-discriminante)/(2*a)<<"i"<<endl;
		cout<<"Raíz 2 (X2): "<<((-b)/(2*a))<<" - "<<sqrt(-discriminante)/(2*a)<<"i"<<endl;
	}else{
		cout<<"--- Raíces reales: ---"<<endl;
		x1=((-b)+sqrt(discriminante))/(2*a);
		x2=((-b)-sqrt(discriminante))/(2*a);
		cout<<"Raíz 1 (X1): "<<x1<<endl;
		cout<<"Raíz 2 (X2): "<<x2;
	}
}