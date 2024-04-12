#include <iostream>
using namespace std;

void mostrarMensaje(){
	cout << "Hola buenos dias" << endl;
	cout << "1. Un numero" << endl;
	cout << "2. Una palabra" << endl;
	cout << "3. Una letra" << endl;
}
	
	void mostrarMensaje1(int &num){
		cout << "Ingresa un numero: ";
		cin >> num;
		cout << "Tu numero es: " << num << endl;
	}
		
		void mostrarMensaje2(string &pal){
			cout << "Ingresa una palabra: ";
			cin >> pal;
			cout << "Tu palabra es: " << pal  << endl;
		}
			
			void mostrarMensaje3(char &let){
				cout << "Ingresa una letra: ";
				cin >> let;
				cout << "Tu letra es: " << let << endl;
			}
				
				int main(int argc, char *argv[]) {
					int acc;
					int num;
					string pal;
					char let;
					
					do {
						mostrarMensaje();
						cin >> acc;
						
						switch(acc) {
						case 1:
							mostrarMensaje1(num);
							
							break;
						case 2:
							mostrarMensaje2(pal);
							
							break;
						case 3:
							mostrarMensaje3(let);
							
							break;
						case 4:
							cout << "Saliendo del programa." << endl;
							return 0;
						default:
							cout << "Ingrese una opcion valida" << endl;
						}
						
					} while (true);
					
					return 0;
				}
