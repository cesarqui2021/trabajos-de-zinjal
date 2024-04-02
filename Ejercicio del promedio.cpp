#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ingrese 5 notas para calcular su promedio para identificar si puede realizar su exaen privado\n";
	int n1;
	cout << "ingrese su primer nota\n";
	cin >> n1;
	int n2;
	cout << "ingrese su segunda nota\n";
	cin >> n2;
	int n3;
	cout << "ingrese su tercer nota\n";
	cin >> n3;
	int n4;
	cout << "ingrese su cuarta nota\n";
	cin >> n4;
	int n5;
	cout << "ingrese su quinta nota\n";
	cin >> n5;
	int resultado;
	resultado == (n1+n2+n3+n4+n5)/5;
	
	if (resultado <61){
		cout << "No puede hacer el examen privado";
	}
	else if (61 <= resultado <= 75 ){
		cout << "Si puede hacer el examen";
	}
	else if (76 <= resultado <= 85){
		cout << "promedio normal si puede hacer el examen";
	}
	else if (86 <= resultado <= 90){
		cout << "puede hacer su examen y se gradua sera con honores";
	}
	else if (91 <= resultado <= 95){
		cout << "puede hacer su examen si se gradua sera con maximos honores";
	}
	else if (resultado >= 95){
		cout << "Puede exonerarse del examen";
	}
	return 0;
}


