#include <iostream>
using namespace std;
void programa1();
void programa2();
void programa3();
void programa4();

int main() {
	int opcion;
	do {
		cout << "Seleccione el programa que desea ejecutar:" << endl;
		cout << "1. Calcular hipotenusa del tri�ngulo" << endl;
		cout << "2. Calcular lado faltante del tri�ngulo" << endl;
		cout << "3. Calcular factorial de un n�mero" << endl;
		cout << "4. Calcular vuelto de una compra" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			programa1();
			break;
		case 2:
			programa2();
			break;
		case 3:
			programa3();
			break;
		case 4:
			programa4();
			break;
		case 0:
			cout << "Saliendo del programa..." << endl;
			break;
		default:
			cout << "Opci�n no v�lida. Intente de nuevo." << endl;
			break;
		}
	} while (opcion != 0);
	
	return 0;
}
void programa1() {
	float lado1, lado2, opuesto, adyacente, calculadora;
	cout << "Ayudame a calcular la hipotenusa del tri�ngulo" << endl;
	cout << "Ingresa la longitud del lado opuesto del tri�ngulo (A): ";
	cin >> lado1;
	cout << "Ingresa la longitud del adyacente (B): ";
	cin >> lado2;
	if (lado1 < lado2) {
		opuesto = lado1 * lado1;
		adyacente = lado2 * lado2;
		calculadora = opuesto / adyacente;
		cout << "La hipotenusa es: " << calculadora << endl;
	}
}
void programa2() {
	float lado1, lado2, total;
	cout << "Ayudame a calcular el lado faltante del tri�ngulo" << endl;
	cout << "Ingresa la longitud del primer lado (A): ";
	cin >> lado1;
	cout << "Ingresa la longitud del segundo lado (B): ";
	cin >> lado2;
	if (lado1 < lado2) {
		total = lado1 + lado2;
		cout << "El tercer lado es de: " << total << endl;
	}
}
void programa3() {
	int num, fact = 1;
	cout << "Ingrese el n�mero del que quiera saber su factorial: ";
	cin >> num;
	for (int i = 1; i <= num; ++i) {
		fact *= i;
	}
	cout << "Factorial de " << num << " es " << fact << endl;
}
void programa4() {
	int efectivo, total, calculadora, falta;
	cout << "Ingrese el valor del billete que entreg�: ";
	cin >> efectivo;
	cout << "Ingrese el total de lo que consumi�: ";
	cin >> total;
	if (efectivo > total) {
		calculadora = efectivo - total;
		cout << "Se le dar�n " << calculadora << " Quetzales de vuelto" << endl;
	} else if (efectivo < total) {
		falta = total - efectivo;
		cout << "Gast� m�s del efectivo que entreg�, por favor entregue el restante que son " << falta << " Quetzales" << endl;
	}
}
