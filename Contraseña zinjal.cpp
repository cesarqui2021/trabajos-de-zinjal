#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int contra;
	cout << "ingrese una contraseña  que tenga 5 numeros no peden ser par y divisibles dentro de 3\n";
	cin >> contra;
	if (contra % 2 == 0 ){
		cout <<"la contraseña es incorrecta\n";
	}
	  else if (contra % 3 == 0){
		cout << " la contraseña es correcta\n";
	   }
	  else{
		  cout << "la contraseña es incorrecta\n";
	  }
	
	
	return 0;
}

