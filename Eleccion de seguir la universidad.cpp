#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ya cerre mi carrera \n1 si ya cerre \n2 no e cerrado \n";
	int carreraD;
	cin >> carreraD;
	if (carreraD == 1){
		cout << "si ya cerre la carrera  \n";
		cout << "tengo una idea para elegir mi carrera universitaria\n1si tengo  \n2no tiene \n";
		int idea;
		cin >> idea;
		if (idea == 1){
			cout << "si tiene una idea\n";
		}
		cout << "tiene presupuesto para la inscripcion\n1si tiene \n2 no tiene";
		int presupuesto;
		cin >> presupuesto;
		if (presupuesto == 1){
			cout << "si hay presupuesto de cuanto es \n";
			double efectivo;                                                                                                                                                                                                                                                                                                                                                                     
			cin >> efectivo;
			cout << "cuanto es el gasto total de la colegiatura\n";
			double gasto;
			cin >> gasto;
			if (presupuesto >= efectivo){
				cout<<"el presupuesto no alcanza no puede inscribirse \n";
			}
			else{
				cout << "el preupuesto alcanza puede incribirse";
			}
			
		}
		else{
			cout << "el presupuesto no alcanza\n";
		}
	}
	else{
		cout << "no tengo ni idea realizar examenes bocacionales";
	}
	return 0;
}


