#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

void calcularRaices(double a, double b, double c, double &x1, double &x2, bool &sonReales) {
    double discriminante=pow(b,2)-(4*a*c);
    if(discriminante<0){
    	sonReales=false;
		x1=0;
    	x2=0;
		cout<<"--- Raíces complejas: ---"<<endl;
		double imaginario=sqrt(-discriminante)/(2*a);
		if(imaginario==1){
			if(real!=0 or real!=-0){
			cout<<"Raíz 1 (X1): "<<real<<" + "<<"i"<<endl;
			cout<<"Raíz 2 (X2): "<<real<<" - "<<"i"<<endl;
			}else{
				cout<<"Raíz 1 (X1): + "<<"i"<<endl;
				cout<<"Raíz 2 (X2): - "<<"i"<<endl;
			}
		}else{
			if(real!=0 or real!=-0){
			cout<<"Raíz 1 (X1): "<<real<<" + "<<imaginario<<"i"<<endl;
			cout<<"Raíz 2 (X2): "<<real<<" - "<<imaginario<<"i"<<endl;
			}else{
				cout<<"Raíz 1 (X1): + "<<imaginario<<"i"<<endl;
				cout<<"Raíz 2 (X2): - "<<imaginario<<"i"<<endl;
			}
		}
	}else if (discriminante == 0) {
		x=-b/(2*a);
		cout<<"--- Raíz real ---"<<endl;
        cout<< "La única raíz es (x): " <<x<<endl;
	}else{
		cout<<"--- Raíces reales: ---"<<endl;
		x1=((-b)+sqrt(discriminante))/(2*a);
		x2=((-b)-sqrt(discriminante))/(2*a);
		cout<<"Raíz 1 (X1): "<<x1<<endl;
		cout<<"Raíz 2 (X2): "<<x2;
	}
    

int main(){
	SetConsoleOutputCP(CP_UTF8);
	double a, b, c, x, x1, x2;
	bool sonReales;
	cout<<"Ingrese el valor del coeficiente 'a': ";
	cin>>a;
	cout<<"Ingrese el valor del coeficiente 'b': ";
	cin>>b;
	cout<<"Ingrese el valor del coeficiente 'c': ";
	cin>>c;
	calcularRaices(a,b,c,sonReales);
}