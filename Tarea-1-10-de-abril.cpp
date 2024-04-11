#include <iostream>
#include <cstdlib>

using namespace std;

string palabra(string pala1, string pala2, char op){
	string resultado;
	if (op == '1'){
		resultado = pala1 + pala2;
	}
	return resultado;
}
	void mostrarMensaje(){
		system("cls");
	}
		int main(int argc, char *argv[]) {
			string pala1, pala2;
			char op;
			int control = 1;
			do {
				mostrarMensaje();
				cout << "Hola, ingresa la primera palabra: ";
				cin >> pala1;
				cout << "Hola, ingresa la segunda palabra: ";
				cin >> pala2;
				cout << "ingresa el numero 1 para unir las palabras";
				cin >> op;
				string resultado = palabra (pala1, pala2, op);
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
		
