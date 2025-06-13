#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int juego(int a,int b){
	bool gana;
	if (a==1){			//piedra
		if (b==2){		//si el rival elige PAPEL
			gana=false;
		}else if(b==3){	//si el rival elige TIJERA
			gana=true;
		}
	}else if(a==2){		//papel
		if(b==1){		//si el rival elige PIEDRA
			gana=true;
		}else if(b==3){	//si el rival elige TIJERA
			gana=false;
		}
	}else if(a==3){		//tijera
		if(b==1){		//si el rival elige PIEDRA
			gana=false;
		}else if(b==2){	//si el rival elige PAPEL 
			gana=true;
		}
	}
	return gana;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int eleccion, eleccionCPU, rondasConc=0, victorias=0, victoriasCPU=0;
	bool ganaRonda;
	cout<<"--- JUEGO DE PIEDRA, PAPEL Y TIJERAS ---"<<endl;
	cout<<"REGLAS:"<<endl<<"1. Piedra gana a tijeras."<<endl;
	cout<<"2. Papel gana a piedra."<<endl;
	cout<<"3. Tijeras gana a papel."<<endl<<"4. Victoria al ganador de 3 rondas."<<endl<<endl;
	do{
	do{
	cout<<"Elige Piedra(1), Papel(2) o Tijeras(3): ";
	cin>>eleccion;
	if(eleccion<1 or eleccion>3){
		cout<<"Error: Debe elegir una opción correcta."<<endl<<endl;
	}
	}while(eleccion<1 or eleccion>3);
	cout<<"Turno de la computadora ... "<<endl;
	eleccionCPU=1+rand()%3;
	switch(eleccionCPU){
		case 1:
			cout<<"La computadora eligió piedra"<<endl;
			break;
		case 2:
			cout<<"La computadora eligió papel"<<endl;
			break;
		case 3:
			cout<<"La computadora eligió tijera"<<endl;
			break;
	}
	ganaRonda=juego(eleccion, eleccionCPU);
	if(ganaRonda){
		rondasConc++;
		victorias++;
		cout<<"Ganaste esta ronda."<<endl<<endl;
	}else if(eleccion == eleccionCPU){				//si los dos eligen lo mismo EMPATE
		cout<<"Empate."<<endl<<endl;
	}else{
		rondasConc++;
		victoriasCPU++;
		cout<<"Perdiste esta ronda."<<endl<<endl;
	}
	if(victorias!=3 and victoriasCPU!=3){
		cout<<"Siguiente ronda ..."<<endl;
	}
	}while(victorias!=3 and victoriasCPU!=3);
	if(victorias==3){
		cout<<"FELICIDADES, HAS GANADO 3 RONDAS."<<endl;
	}else if(victoriasCPU==3){
		cout<<"HAS PERDIDO, LA COMPUTADORA GANÓ 3 RONDAS."<<endl;
	}
	cout<<"SCORE:"<<endl<<"Tú: "<<victorias<<" rondas"<<endl;
	cout<<"Computadora:"<<victoriasCPU<<" rondas";	
}