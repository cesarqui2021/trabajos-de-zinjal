#include <iostream>
using namespace std; 

void multipli(int num) {
	cout << "Múltiplos de " << num << ": ";
	for (int fun = 1; fun <= 10000 ; ++fun) {
		if (fun % num == 0) {
			cout << fun << " ";
		}
	}
	cout << endl;
}

void fact(int num) {
	int fact = 1;
	for (int funi = 1; funi <= num; ++funi) {
		fact *= funi;
	}
	cout << "Factorial de " << num << ": " << fact << endl;
}

void Fibo(int num) {
	int a = 0, b = 1, c;
	cout << "Serie de Fibonacci: " << num << ":" << endl;
	cout << a << " " << b << " "; 
	
	for (int funi = 2; funi < num; ++funi) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	cout << endl;
}
void mostrarMensaje(){
	system("cls");
	cout << "Hola, ingresa el primer numero: ";
	
}
	void mostrarMensaje2(){
		system("cls");
		cout << "Seleccione una acción:" << endl;
		cout << "1. Encontrar múltiplos del número." << endl;
		cout << "2. Calcular el factorial del número." << endl;
		cout << "3. Calcular la serie de Fibonacci del número." << endl;
		
	}
		int main(int argc, char *argv[]) {
			int num, acc;
			int control = 1;
			do {
				mostrarMensaje();
				cin >> num;
				mostrarMensaje2();
				cin >> acc;
				
				switch (acc) {
				case 1:
					multipli(num);
					break;
				case 2:
					fact(num);
					break;
				case 3:
					Fibo(num);
					break;
				default:
					cout << "Opción no válida." << endl;
					break;
				}
				
				cout << endl << "Desea continuar? 1. Si, 2. No";
				cin >> control;
				if (control != 1 && control != 2) {
					control = 1;
					cout << "Por favor siga instrucciones";
				}
				
			}while (control==1);
			
			return 0;
		}
