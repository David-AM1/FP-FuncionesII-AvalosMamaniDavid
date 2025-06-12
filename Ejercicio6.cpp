#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

// piedra > tijera
// tijera > papel
// papel > piedra
int juego(int a,int b){
	bool gana;
	if (a==1){			//piedra
		if (b==2){		//si el rival elige PAPEL
			gana=false;
		}else if(b==3){	//si el rival elige TIJERA
			gana=true;
		}//else{			//si el rival elige PIEDRA
		//	gana=false;
		//}
	}else if(a==2){		//papel
		if(b==1){		//si el rival elige PIEDRA
			gana=true;
		}else if(b==3){	//si el rival elige TIJERA
			gana=false;
		}//else{			//si el rival elige PAPEL
		//	gana=false;
		//}
	}else if(a==3){		//tijera
		if(b==1){		//si el rival elige PIEDRA
			gana=false;
		}else if(b==2){	//si el rival elige PAPEL 
			gana=true;
		}//else{			//si el rival elige TIJERA
		//	gana=false;
		//}
	}
	return gana;
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int eleccion, eleccionCPU, rondasConc=0, victorias=0, victoriasCPU=0;
	bool ganaRonda;
	cout<<"--- JUEGO DE PIEDRA, PAPEL Y TIJERAS (victoria al ganador de 3 rondas) ---"<<endl;
	do{
	cout<<"Eliga Piedra(1), Papel(2) o Tijeras(3): ";
	cin>>eleccion;
	cout<<"Turno de la computadora: ... ";
	eleccionCPU=rand()%4;
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
		default:
			cout<<"ERROR"<<endl;
			break;
	}
	ganaRonda=juego(eleccion, eleccionCPU);
	if(ganaRonda){
		rondasConc++;
		victorias++;
		cout<<"Ganaste esta ronda."<<endl;
		cout<<"Siguiente ronda ..."<<endl;
	}else if(eleccion == eleccionCPU){
		cout<<"Empate. Siguiente ronda"<<endl;
	}else{
		rondasConc++;
		victoriasCPU++;
		cout<<"Perdiste. La computadora ganó esta ronda..."<<endl;
		cout<<"Siguiente ronda..."<<endl;
	}
	}while(victorias!=3 and victoriasCPU!=3);
	if(victorias==3){
		cout<<"FELICIDADES, HAS GANADO 3 RONDAS."<<endl;
	}else if(victoriasCPU==3){
		cout<<"HAS PERDIDO, LA COMPUTADORA GANÓ 3 RONDAS."<<endl;
	}
	
}