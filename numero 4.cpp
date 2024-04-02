#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ingrese sus calificaciones\n";
	int calificacion1;
	int calificacion2;
    int calificacion3;
	int calificacion_total;
	cout << "ingrese la primera calificacion\n";
	cin >> calificacion1;
	cout << "ingrese la segunda calificacion\n";
	cin >> calificacion2;
	cout << "ingrese la tercera calificacion\n";
	cin >> calificacion3;
	if (calificacion1 >= 61){
		cout << "primer curso ganado\n";
	}
	else{
		cout << "debe de tener todos los cursos en limpio\n";
	}
	if (calificacion2 >= 61){
		cout << "segundo curso ganado\n";
	}
	else{
		cout << "debe de tener todos los cursos en limpio\n";
	}
	if (calificacion3 >= 61){
		cout << "tercer curso ganado\n";
	}
	else{
		cout << "debe de tener todos los cursos en limpio\n";
	}
	calificacion_total = calificacion1+calificacion2+calificacion3/240;
	cout << "El promedio es de\n";
	cout << calificacion_total;

	return 0;
}

