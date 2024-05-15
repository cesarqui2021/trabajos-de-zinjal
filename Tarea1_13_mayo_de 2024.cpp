#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;

void ordenar_enteros_asc_desc() {
	int arreglo[8];
	
	cout << "Ingrese 8 números enteros:" << endl;
	for (int i = 0; i < 8; ++i) {
		cout << "Número " << i + 1 << ": ";
		cin >> arreglo[i];
	}
	
	sort(arreglo, arreglo + 8);
	cout << "Arreglo ordenado ascendente: ";
	for (int i = 0; i < 8; ++i) {
		cout << arreglo[i] << " ";
	}
	cout << endl;
	
	sort(arreglo, arreglo + 8, greater<int>());
	cout << "Arreglo ordenado descendente: ";
	for (int i = 0; i < 8; ++i) {
		cout << arreglo[i] << " ";
	}
	cout << endl;
}

void ordenar_letras_alfabeticamente() {
	char letras[5];
	
	cout << "Ingrese 5 letras mayúsculas:" << endl;
	for (int i = 0; i < 5; ++i) {
		cout << "Letra " << i + 1 << ": ";
		cin >> letras[i];
	}
	
	sort(letras, letras + 5);
	cout << "Arreglo ordenado alfabéticamente: ";
	for (int i = 0; i < 5; ++i) {
		cout << letras[i] << " ";
	}
	cout << endl;
}

void encontrar_max_min_random() {
	const int N = 15;
	int numeros[N];
	
	srand(time(nullptr));
	for (int i = 0; i < N; ++i) {
		numeros[i] = rand();
	}
	
	int maximo = INT_MIN;
	int minimo = INT_MAX;
	for (int i = 0; i < N; ++i) {
		if (numeros[i] > maximo) {
			maximo = numeros[i];
		}
		if (numeros[i] < minimo) {
			minimo = numeros[i];
		}
	}
	
	cout << "Número más grande: " << maximo << endl;
	cout << "Número más pequeño: " << minimo << endl;
}

void ordenar_arreglo_bidimensional() {
	const int FILAS = 10;
	const int COLUMNAS = 2;
	int arreglo[FILAS][COLUMNAS];
	
	cout << "Ingrese números en el arreglo de 10x2:" << endl;
	for (int i = 0; i < FILAS; ++i) {
		for (int j = 0; j < COLUMNAS; ++j) {
			cout << "Casilla [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> arreglo[i][j];
		}
	}
	
	sort(arreglo, arreglo + FILAS, [](const int (&a)[COLUMNAS], const int (&b)[COLUMNAS]) {
		return a[0] < b[0];
	});
	
	cout << "Arreglo ordenado:" << endl;
	for (int i = 0; i < FILAS; ++i) {
		cout << arreglo[i][0] << "-" << arreglo[i][1] << " ";
	}
	cout << endl;
}

int main() {
	char opcion;
	do {
		cout << "\n Menú \n"
			<< "1. Ordenar un arreglo de 8 números enteros ascendente y descendente.\n"
			<< "2. Ordenar un arreglo de 5 letras mayúsculas alfabéticamente.\n"
			<< "3. Encontrar el número más grande y más pequeño de 15 números aleatorios.\n"
			<< "4. Ordenar un arreglo bidimensional de 10x2 según el primer valor de cada fila.\n"
			<< "5. Salir.\n"
			<< "Seleccione una opción: ";
		cin >> opcion;
		
		switch (opcion) {
		case '1':
			ordenar_enteros_asc_desc();
			break;
		case '2':
			ordenar_letras_alfabeticamente();
			break;
		case '3':
			encontrar_max_min_random();
			break;
		case '4':
			ordenar_arreglo_bidimensional();
			break;
		case '5':
			cout << "¡Hasta luego!" << endl;
			break;
		default:
			cout << "Opción inválida. Por favor, seleccione nuevamente." << endl;
		}
	} while (opcion != '5');
	
	return 0;
}
