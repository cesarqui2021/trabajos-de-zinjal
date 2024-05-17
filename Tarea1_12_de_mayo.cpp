#include <iostream>
#include <vector>
#include <cmath>

void fillArrayReverse(std::vector<int>& arr, int size) {
	arr.resize(size);
	for (int i = 0; i < size; ++i) {
		arr[size - 1 - i] = i + 1;
	}
}

void cloneArray(const std::vector<int>& original, std::vector<int>& clone) {
	clone = original;
}

void makeAllNumbersPositive(std::vector<int>& arr) {
	for (int& num : arr) {
		if (num < 0) {
			num = std::abs(num);
		}
	}
}

void splitDecimalArray(const std::vector<double>& arr, std::vector<int>& intPart, std::vector<double>& decimalPart) {
	intPart.resize(arr.size());
	decimalPart.resize(arr.size());
	for (size_t i = 0; i < arr.size(); ++i) {
		intPart[i] = static_cast<int>(arr[i]);
		decimalPart[i] = arr[i] - intPart[i];
	}
}

void menu() {
	int option;
	do {
		std::cout << "Menú de Opciones:\n";
		std::cout << "1. Llenar un arreglo de atrás para adelante.\n";
		std::cout << "2. Clonar un arreglo.\n";
		std::cout << "3. Volver positivos todos los números negativos en un arreglo.\n";
		std::cout << "4. Dividir un arreglo de decimales en partes enteras y decimales.\n";
		std::cout << "5. Salir.\n";
		std::cout << "Seleccione una opción: ";
		std::cin >> option;
		
		switch (option) {
		case 1: {
			int size;
			std::cout << "Ingrese el tamaño del arreglo: ";
			std::cin >> size;
			std::vector<int> arr;
			fillArrayReverse(arr, size);
			std::cout << "Arreglo llenado de atrás para adelante: ";
			for (int num : arr) {
				std::cout << num << " ";
			}
			std::cout << std::endl;
			break;
		}
		case 2: {
			int size;
			std::cout << "Ingrese el tamaño del arreglo original: ";
			std::cin >> size;
			std::vector<int> original(size);
			std::cout << "Ingrese los elementos del arreglo original: ";
			for (int& num : original) {
				std::cin >> num;
			}
			std::vector<int> clone;
			cloneArray(original, clone);
			std::cout << "Arreglo clonado: ";
			for (int num : clone) {
				std::cout << num << " ";
			}
			std::cout << std::endl;
			break;
		}
		case 3: {
			std::vector<int> arr(10);
			std::cout << "Ingrese 10 números (positivos o negativos): ";
			for (int& num : arr) {
				std::cin >> num;
			}
			makeAllNumbersPositive(arr);
			std::cout << "Arreglo con números negativos convertidos a positivos: ";
			for (int num : arr) {
				std::cout << num << " ";
			}
			std::cout << std::endl;
			break;
		}
		case 4: {
			std::vector<double> arr(5);
			std::cout << "Ingrese 5 números decimales: ";
			for (double& num : arr) {
				std::cin >> num;
			}
			std::vector<int> intPart;
			std::vector<double> decimalPart;
			splitDecimalArray(arr, intPart, decimalPart);
			std::cout << "Partes enteras: ";
			for (int num : intPart) {
				std::cout << num << " ";
			}
			std::cout << std::endl;
			std::cout << "Partes decimales: ";
			for (double num : decimalPart) {
				std::cout << num << " ";
			}
			std::cout << std::endl;
			break;
		}
		case 5:
			std::cout << "Saliendo...\n";
			break;
		default:
			std::cout << "Opción no válida. Intente de nuevo.\n";
			break;
		}
	} while (option != 5);
}

int main() {
	menu();
	return 0;
}
