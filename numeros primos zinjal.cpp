#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int primo;
	float resultado1;
	float resultado2;
	float resultado3;
	float resultado4;
	cout<<"ingrese un numero verificar si es primo\n";
	cin>>primo;
	resultado1 = primo % 1;
	resultado2 = primo % 2;
	resultado3 = primo % 3;
	resultado4 = primo % primo;
	if (resultado1 == 0 ){
		if (resultado4 == 0 )
		{
			if (resultado2 == 0 )
			{
				cout << "El numero "; cout << primo; cout << " No es Primo ";
			}else 
				if (resultado3 == 0 )
			{
				cout << "El numero "; cout << primo; cout << " No es Primo ";
			}else
			{
				cout << "El numero "; cout << primo; cout << " Es Primo ";
			}
		}
	}
	return 0;
}

