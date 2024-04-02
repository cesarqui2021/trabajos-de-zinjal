#include <iostream>
using namespace std;

int main() {
    int num1;
    int result = 0;
    cout << "ingrese un numero para determinar si es par o impar" << endl;
    cin >> num1;
    if (num1 % 2 == 0){
        for (int i = 0; i <= num1; i+= 2){
		if (i % 2 == 0){ 
			cout << result / i << endl;
		    cout << "sumado es " <<result << endl;
		}
	 }
    } else{
        for (int i = 0; i <= num1; i++){
	    if (i % 2!= 0){ 
		 cout << i << endl;
		 result += i;
		 cout << "sumado es " << result << endl;
            }
        }
    }
	
    return 0;
	}
	

