#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double hipotenusa, cateto1, cateto2;
	cout<<"Ingrese el valor del primer cateto: ";
	cin>>cateto1;
	cout<<"Ingrese el valor del segundo cateto: ";
	cin>>cateto2;
	hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
	cout<<"La hipotenusa es: "<<hipotenusa;
}