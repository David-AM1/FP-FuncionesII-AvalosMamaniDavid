#include <iostream>
#include <cmath>
using namespace std;

double areaCirculo(double r){
	double area=M_PI*pow(r,2);
	return area;
}

int main(){
	double radio;
	cout<<"Ingrese el radio del circulo: ";
	cin>>radio;
	cout<<"El area del circulo es: "<<areaCirculo(radio);
}