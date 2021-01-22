#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion;
	int respuesta;
	respuesta==1;
	while(respuesta=1){
		
		cout<<"\nLas opciones son:\n";
		cout<<"1)Ejercicio1\n";
		cout<<"2)Ejercicio2\n";
		cout<<"Elija su opcion:\n";
		cout<<"3)salida salida\n";
		cin>>opcion;
		
		switch(opcion){
			
		case 1:{
			int n=0;
			cout<<"\nIngrese el numero para la sumatoria: ";
			cin>> n;
			
			while(n<0){
				cout<<"No se admiten numeros negativos ingrese nuevamente:";
				cin>>n;
			}
			int acum=0;
			for(int i=0;i<=n;i++){
				
				acum += i*pow(i+1,2);
			}
			cout<<"La respuesta es= "<<acum;
			cout<<"\n";
		}
		break;
		case 2:{
			cout<<"\n2)Ejercicio2\n";
			
		}
		break;
		case 3:
			cout<<"\nAdios!!";
			cin>>respuesta;
			respuesta==2;
		
		break;
		}
	}
	return 0;
}
