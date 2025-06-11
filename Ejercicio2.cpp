#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int GenAleatorio(int max){
	return rand()%(max+1);
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int nMaximo, cantidad, aleatorio;
	cout<<"--- Generador de Números Aleatorios ---"<<endl;
	cout<<"Ingrese la cantidad de números aleatorios a generar: ";
	cin>>cantidad;
	cout<<"Ingrese el valor máximo permitido: ";
	cin>>nMaximo;
	for(int i=1;i<=cantidad;i++){
		cout<<GenAleatorio(nMaximo)<<endl;
	}
}