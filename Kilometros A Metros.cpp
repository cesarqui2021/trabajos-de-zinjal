#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float medida;
	int conversion;
	float resultado;
	cout << "Ingrese la medida: ";
	cin >> medida;
	cout << endl << "1) KMS A MTS" << endl << "2) MTS A KMS" << endl << "3) PIES A PULGADAS" << endl << "4) PULGADAS A PIES" << endl << "5) KMS A MILLAS" << endl;
	cin >> conversion;
	if (conversion == 1)
	{
		resultado = (medida * 1000)/1;
		cout << resultado << " MTS" << endl;
	}else if (conversion == 2)
		
	return 0;
}

