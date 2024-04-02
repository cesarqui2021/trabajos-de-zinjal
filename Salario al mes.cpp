#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double salario;
	double impuestos;
    cout << "Ingrese el salario mensual\n";
	cin >> salario;
	if (salario <= 15000) {
		impuestos = salario * 0.05;
	}  
	else if (salario <= 30000) {
		impuestos = salario * 0.12;
    } 
 
    else {
	    impuestos = salario * 0.21;
    }
	cout << "El valor de los impuestos a pagar al mes es\n Q" << impuestos;
	return 0;
}

