#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

void juegoDados(int a, int b, int v1, int v2){
	if(a>b){
		cout<<"Gana el Jugador 1."<<endl;
		
	}else if(a==b){
		cout<<"Empate"<<endl;
	}else{
		cout<<"Gana el Jugador 2."<<endl;
		
	}
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int victoriasP1=0, victoriasP2=0, turnoP1, turnoP2;
	cout<<"--- Juego de Dados por Turnos ---"<<endl;
	cout<<"El primero en ganar 3 rondas gana el juego."<<endl<<endl;
	do{	
		cout<<"Turno del primer jugador ..."<<endl;
		turnoP1=1+rand()%6;
		cout<<"Obtuvo: "<<turnoP1<<endl;
		cout<<"Turno del segundo jugador ..."<<endl;
		turnoP2=1+rand()%6;
		cout<<"Obtuvo: "<<turnoP2<<endl;
		if(turnoP1 > turnoP2){
		cout<<"Gana el Jugador 1."<<endl;
		victoriasP1++;
		}else if(turnoP1==turnoP2){
		cout<<"Empate"<<endl;
		}else{
		cout<<"Gana el Jugador 2."<<endl;
		victoriasP2++;
		}
		cout<<"Marcador:"<<endl;
		cout<<"Jugador 1: "<<victoriasP1<<endl;
		cout<<"Jugador 2: "<<victoriasP2<<endl<<endl;
	}while(victoriasP1!=3 and victoriasP2!=3);
}