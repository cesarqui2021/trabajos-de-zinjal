#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	int sueldo;
	float resultado;
	cout << "Por favor ingrese los a�os trabajando en la empresa para calcular su bono navide�o,\nsea sincero o lo llevamos a prision: \n";
	cin >> anio;
	cout << "Por favor ingrese su salario:\nQ"; 
	cin >> sueldo;
	if (anio <= 5 ){
		resultado = sueldo * 0.05;
		cout << "Su bono navide�o por haber trabajado los a�os que ingreso es: \nQ" << resultado << endl; 
	}else { 
		resultado = sueldo * 0.10;
		cout << "Su bono navide�o por haber trabajado mas de 5 a�os en la empresa es de: \nQ" << resultado << endl;
	}
	return 0;
}

