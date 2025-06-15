#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void calcularRaices(double a, double b, double c, double &x1, double &x2, bool &sonReales) {
    double disc=pow(b,2)-(4*a*c);
    if(disc<0){
    	sonReales=false;
	}else if (disc== 0) {
		sonReales=true;
		x1=x2=-b/(2*a);
	}else{
		sonReales=true;
		x1=((-b)+sqrt(disc))/(2*a);
		x2=((-b)-sqrt(disc))/(2*a);
	}
}

int calculoDiscriminante(int a,int b, int c){
	return pow(b,2)-(4*a*c);
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double a, b, c, x1, x2, discriminante;
	bool sonReales;
	cout<<"Ingrese el valor del coeficiente 'a': ";
	cin>>a;
	cout<<"Ingrese el valor del coeficiente 'b': ";
	cin>>b;
	cout<<"Ingrese el valor del coeficiente 'c': ";
	cin>>c;
	calcularRaices(a,b,c,x1,x2,sonReales);
	discriminante=calculoDiscriminante(a,b,c);
	if(sonReales){
		if(discriminante==0){
			cout<<"--- Raíz real ---"<<endl;
        	cout << "La única raíz es (x): " <<x1<<endl;
		}else{
		cout<<"--- Raíces reales: ---"<<endl;
		cout<<"Raíz 1 (X1): "<<x1<<endl;
		cout<<"Raíz 2 (X2): "<<x2;
		}
	}else{
		cout<<"--- Raíces complejas: ---"<<endl;
		double pImaginario=sqrt(-discriminante)/(2*a);
		double pReal=((-b)/(2*a));
		if(pImaginario==1){
			if(pReal==0){
				cout<<"Raíz 1 (X1): "<<"+ i"<<endl;
				cout<<"Raíz 2 (X2): "<<"- i"<<endl;
			}else{
				cout<<"Raíz 1 (X1): "<<pReal<<" + i"<<endl;
				cout<<"Raíz 2 (X2): "<<pReal<<" - i"<<endl;
			}
		}else{
			if(pReal==0){
				cout<<"Raíz 1 (X1): "<<"+ "<<pImaginario<<"i"<<endl;
				cout<<"Raíz 2 (X2): "<<"- "<<pImaginario<<"i"<<endl;
			}else{
				cout<<"Raíz 1 (X1): "<<pReal<<" + "<<pImaginario<<"i"<<endl;
				cout<<"Raíz 2 (X2): "<<pReal<<" - "<<pImaginario<<"i"<<endl;
			}
		}	
	}
}