#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int opcion;
	bool respuesta;
	respuesta=true;
	//este es el ciclo para que siempre se repita a menos que el usuario decida salir
	while(respuesta==true){
		//las instrucciones
		cout<<"\nLas opciones son:\n";
		cout<<"1)Ejercicio1\n";
		cout<<"2)Ejercicio2\n";
		cout<<"Elija su opcion:\n";
		cout<<"3)salida salida\n";
		cin>>opcion;
		//Se elije que opciones desea el usuario
		switch(opcion){
		case 1:{
			int n=0;
			cout<<"\nIngrese el numero para la sumatoria: ";
			cin>> n;
			//se valida que no se aceptan numeros negativos
			while(n<0){
				cout<<"No se admiten numeros negativos ingrese nuevamente:";
				cin>>n;
			}
			int acum=0;
			//para que se repita el ejercicio y se valla suamando con sigo mismo
			for(int i=0;i<=n;i++){
				acum += i*pow(i+1,2);
			}
			cout<<"La respuesta es= "<<acum;
			cout<<"\n";
		}
		break;
		case 2:{
			cout<<"\nIngrese el numero para la funcion:";
			int x=0;
			cin>>x;
			double division,expo;
			expo=1+exp(x);
			division=1/expo;
			cout<<"La respuesta es:"<<division;
			cout<<"\n";
		}
		break;
		case 3:
			//la salida se pone falsa la respuesta para que no vuelva a entrar
			cout<<"\nAdios!!...";
			respuesta=false;
		break;
		}
	}
	return 0;
}
