#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	int sueldo;
	float resultado;
	cout << "Por favor ingrese los años trabajando en la empresa para calcular su bono navideño,\nsea sincero o lo llevamos a prision: \n";
	cin >> anio;
	cout << "Por favor ingrese su salario:\nQ"; 
	cin >> sueldo;
	if (anio <= 5 ){
		resultado = sueldo * 0.05;
		cout << "Su bono navideño por haber trabajado los años que ingreso es: \nQ" << resultado << endl; 
	}else { 
		resultado = sueldo * 0.10;
		cout << "Su bono navideño por haber trabajado mas de 5 años en la empresa es de: \nQ" << resultado << endl;
	}
	return 0;
}

