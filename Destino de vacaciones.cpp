#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "estoy vivo \n1 si estoy vivo \n2 no estoy vivo \n";
	int vacaciones;
	cin >> vacaciones;
	if (vacaciones == 1){
		cout << "si me dan vacaciones  \n";
		cout << "tengo un presupuesto para irme de viaje\n1 si si tiene  \n2 si no tiene \n";
		int presupuesto;
		cin >> presupuesto;
		if (presupuesto == 1){
			cout << "si hay presupuesto de cuanto es \n";
			double efectivo;                                                                                                                                                                                                                                                                                                                                                                     
			cin >> efectivo;
			cout << "cuanto es el gasto total \n";
			double gasto;
			cin >> gasto;
			if (presupuesto >= efectivo){
				cout<<"el presupuesto no alcanza no puede viajar \n";
			}
			else{
				cout << "el preupuesto alcanza puede viajar";
			}
			
	    }
		else{
			cout << "el presupuesto no alcanza\n";
		}
	}
	else{
		cout << "no me dan vacaciones";
	}
	return 0;
	}
	

