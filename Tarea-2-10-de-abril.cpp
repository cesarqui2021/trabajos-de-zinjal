#include <iostream>
#include <cstdlib>

using namespace std;

double calculadora(double num1, double num2, double num3, char op){
	double resultado;
	if (op == '+'){
		resultado = num1 + num2 + num3;
	}
	return resultado;
}
	
	void mostrarMensaje(){
		system("cls");
	}
		
		int main(int argc, char *argv[]) {
			double num1, num2, num3;
			char op;
			int control = 1;
			do {
				mostrarMensaje();
				cout << "Hola, ingresa el primer numero que tenga decimales: ";
				cin >> num1;
				cout << "Hola, ingresa el segundo numero que tenga decimales: ";
				cin >> num2;
				cout << "Hola, ingresa el tercer numero que tenga decimales: ";
				cin >> num3;
				cout << endl << "introduzca el simbolo de la suma? ";
				cin >> op;
				double resultado = calculadora(num1, num2, num3, op);
				cout << endl << "Su resultado es: " << resultado;
				
				cout << endl << "Desea continuar? 1. Si, 2. No";
				cin >> control;
				if (control != 1 && control != 2) {
					control == 1;
					cout << "Por favor siga instrucciones";
				}
				
			}while (control==1);
			
			return 0;
		}
		
		
