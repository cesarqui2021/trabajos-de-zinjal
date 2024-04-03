#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0;
	cout << "Por favor ingrese un numero deñ 1 al 9 para determinar si es area comun o especifica o si no estamos en ningun semestre"<<endl;
	cin >> num1;
	
	switch(num1) {
	case 1:
		cout << "Area comun"<<endl;
		break;
	case 2:
		cout << "No pertenece a ningun semestre"<<endl;
		break;
	case 3:
		cout << "Area comun"<<endl;
		break;	
	case 4:
		cout << "No pertenece a ningun semestre"<<endl;
		break;	
	case 5:
		cout << "Area especifica"<<endl;
		break;	
	case 6:
		cout << "No pertenece a ningun semestre"<<endl;
		break;	
	case 7:
		cout << "Area especifica"<<endl;
		break;	
	case 8:
		cout << "No pertenece a ningun semestre"<<endl;
		break;	
	case 9:
		cout << "No pertenece a ningun semestre"<<endl;
		break;	
	}
	return 0;
}

