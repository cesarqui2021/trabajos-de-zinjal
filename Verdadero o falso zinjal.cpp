#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char exprecion;
	bool resultado;
    cout << "ingrese s si es positivo o n si es negativo: ";
	cin >>  exprecion;
	if (exprecion == 's')
	{
		resultado = true;
		cout << "el resultado es positivo aprovaste el curso: ";
		cout << resultado;
	}
	else if (exprecion == 'n')
	{
		resultado = false ;
		cout << "el resultado es negativo no aprovaste el curso: ";
		cout << resultado;
	}	
	else 
	{ cout << "el dato que ingresaste es erroneo:" ;
	}
	return 0;
}

