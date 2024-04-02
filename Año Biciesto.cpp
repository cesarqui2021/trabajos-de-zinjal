#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	cout<<"Ingrese un año, y te calculo si es biciesto: \n";
	cin>>anio;
	if(anio%4==0 && anio%100!=0 || anio%400==0){
	 cout<< anio; 
	 cout << " Es biciesto";
	}else{
	 cout<< anio; 
	 cout << " No es biciesto";
	}
	
	return 0;
}

