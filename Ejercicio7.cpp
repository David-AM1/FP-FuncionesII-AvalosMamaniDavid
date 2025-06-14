#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void marcador(int a, int b){
	cout<<"  Marcador : "<<endl;
	cout<<"- Jugador 1: "<<a<<endl;
	cout<<"- Jugador 2: "<<b<<endl<<endl;
}

int numero(){
	return 1+rand()%6;
}

int main(){
	srand(time(0));
	SetConsoleOutputCP(CP_UTF8);
	int victoriasP1=0, victoriasP2=0, turnoP1, turnoP2, Ver1, Ver2;
	cout<<"--- Juego de Dados por Turnos ---"<<endl;
	cout<<"El primero en ganar 3 rondas gana el juego."<<endl<<endl;
	while(victoriasP1!=3 and victoriasP2!=3){
		do{
			cout<<"... Turno del jugador 1 ..."<<endl<<"Debe registrarse el numero 1 para continuar: ";
			cin>>Ver1;
			if(Ver1!=1){
				cout<<"Intente nuevamente"<<endl;
			}
		}while(Ver1!=1);
		turnoP1=numero();
		cout<<"Obtuvo: "<<turnoP1<<endl;
		do{
			cout<<"... Turno del jugador 2 ..."<<endl<<"Debe registrarse el numero 2 para continuar: ";
			cin>>Ver2;
			if(Ver2!=2){
				cout<<"Intente nuevamente"<<endl;
			}
		}while(Ver2!=2);
		turnoP2=numero();
		cout<<"Obtuvo: "<<turnoP2<<endl;
		if(turnoP1 > turnoP2){
			cout<<"El jugador 1 GANA la ronda."<<endl;
			victoriasP1++;
		}else if(turnoP1==turnoP2){
			cout<<"Empate"<<endl;
		}else{
			cout<<"El jugador 2 GANA la ronda."<<endl;
			victoriasP2++;
		}
		marcador(victoriasP1,victoriasP2);
	}if(victoriasP1==3){
		cout<<"---VICTORIA DEL JUGADOR 1 ---";
	}if(victoriasP2==3){
		cout<<"---VICTORIA DEL JUGADOR 2 ---";
	}
}