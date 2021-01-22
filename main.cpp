#include <iostream>
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
		cin>>opcion;
		cout<<"Su opcion fue:"<<opcion<<"\n";
		switch(opcion){
		case 1:{
			cout<<"\n1)Ejercicio1\n";
			
			
			
		}
		break;
		case  2:{
			cout<<"\n2)Ejercicio2\n";
			
		}
		break;
		default:
			cout<<"\nAdios!!";
			respuesta==2;
			
		}
	}
	return 0;
}
