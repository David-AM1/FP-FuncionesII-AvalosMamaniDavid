#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

double areaCirculo(double r){
	double area=M_PI*pow(r,2);
	return area;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double radio;
	cout<<"--- Calculo del área de un Circulo ---"<<endl;
	cout<<"Ingrese el radio del circulo: ";
	cin>>radio;
	cout<<"El área del circulo es: "<<areaCirculo(radio);
}