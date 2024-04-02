#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	int divisor = 1;
	cout << "Ingrese un numero\n";
	cin >> numero;
	cout <<"los numeros divisores de " << numero <<" son\n";
	while (divisor <= numero){
		if (numero % divisor == 0){
			cout << divisor <<"\n";
		}
		divisor++;
	}
	return 0;
}

