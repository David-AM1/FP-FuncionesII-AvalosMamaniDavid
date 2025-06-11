#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

double CalculoHipotenusa(double a, double b){
	return sqrt(pow(a,2)+pow(b,2));
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double hipotenusa, cateto1, cateto2;
	cout<<"--- Cálculo de la Hipotenusa ---"<<endl;
	cout<<"Ingrese el valor del primer cateto: ";
	cin>>cateto1;
	cout<<"Ingrese el valor del segundo cateto: ";
	cin>>cateto2;
	cout<<"La hipotenusa es: "<<CalculoHipotenusa(cateto1, cateto2);
}