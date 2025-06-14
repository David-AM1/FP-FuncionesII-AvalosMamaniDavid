#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int nAleatorio(){
	int a=1+rand()%5;
	return a;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int monedas=100, apuesta, n1, n2, n3;
	srand(time(0));
	cout<<"--- Tragamonedas Simple ---"<<endl;
	cout<<"Reglas: "<<endl<<"1. Solo puede apostar entre 1 y 10 por turno"<<endl<<"2. Si los tres son iguales, gana 10 veces su apuesta."<<endl;
	cout<<"3. Si hay dos iguales, gana el doble."<<endl<<"4. Si forman una escalera, gana 5 veces su apuesta."<<endl;
	cout<<"4. Si desea salir del juego debe ingresar 0 (cero) en su apuesta."<<endl;
	cout<<"Monedas: "<<monedas<<endl;
	cout<<"Primera ronda ..."<<endl;
	do{
		do{
			cout<<"¿Cuantas monedas quiere apostar? (del 1 al 10): ";
			cin>>apuesta;
			if(apuesta==0){
				cout<<"Gracias por jugar."<<endl<<"Monedas: "<<monedas;
				return 0;
			}
			if(apuesta<1 or apuesta>10){
				cout<<"Intente nuevamente ingresando una apuesta correcta (del 1 al 10)."<<endl<<endl;
			}if(apuesta>monedas){
				cout<<"No tienes monedas suficientes. Intenta nuevamente."<<endl<<endl;
			}
		}while((apuesta<1 or apuesta>10)or(apuesta>monedas));
		monedas-=apuesta;
		n1=nAleatorio();
		n2=nAleatorio();
		n3=nAleatorio();
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
	cout<<"TE HAS QUEDADO SIN MONEDAS.";
}