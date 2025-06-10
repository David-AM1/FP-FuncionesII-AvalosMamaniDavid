#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int nMaximo, cantidad, aleatorio;
	cout<<"Ingrese la cantidad de numeros aleatorios a generar: ";
	cin>>cantidad;
	cout<<"Ingrese el valor maximo permitido: ";
	cin>>nMaximo;
	for(int i=1;i<=cantidad;i++){
		aleatorio= rand()%nMaximo;
		cout<<aleatorio<<endl;
	}
}