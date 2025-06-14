#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int monedas=100, turno=1, apuesta, n1, n2, n3;
	srand(time(0));
	cout<<"--- Tragamonedas Simple ---"<<endl;
	cout<<"Monedas: "<<monedas<<endl;
	cout<<"Primera ronda ..."<<endl;
	do{
		cout<<"¿Cuantas monedas quiere apostar?: ";
		cin>>apuesta;
		monedas-=apuesta;
		n1=1+rand()%5;
		n2=1+rand()%5;
		n3=1+rand()%5;
		cout<<n1<<", "<<n2<<", "<<n3<<endl;
		if(n1==n2 & n2==n3){		//si son iguales los tres
				apuesta*=10;
				monedas+=apuesta;
				cout<<"GANAS 10 veces tu apuesta: "<<apuesta<<endl;
				cout<<"Monedas: "<<monedas<<endl<<endl;	
		}else if(n1==n2 or n1==n3 or n2==n3){	//si son iguales por lo menos dos
			apuesta*=2;
			monedas+=apuesta;
			cout<<"GANAS 2 veces tu apuesta: "<<apuesta<<endl;
			cout<<"Monedas: "<<monedas<<endl<<endl;
		}else if((n1+1==n2 & n2+1==n3)or(n1+1==n3 & n3+1==n2)or(n2+1==n1 & n1+1==n3)or
        (n3+1==n1 & n1+1==n2)or(n2+1==n3 & n3+1==n1)or(n3+1==n2 & n2+1==n1)) { //en caso de ser una escalera
					apuesta*=5;
					monedas+=apuesta;
					cout<<"GANAS 5 veces tu apuesta: "<<apuesta<<endl;
					cout<<"Monedas: "<<monedas<<endl<<endl;
		}else{
			apuesta=0;			// en cualquier otro caso
			cout<<"PERDISTE tu apuesta. "<<endl;
			cout<<"Monedas: "<<monedas<<endl<<endl;
		}
		cout<<"Siguiente ronda..."<<endl;
	}while(monedas>0);
	cout<<"Te has quedado sin monedas.";
}