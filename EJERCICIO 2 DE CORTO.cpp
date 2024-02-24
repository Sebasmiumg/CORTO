#include <iostream>
using namespace std;

int main(){
	
    int num, sum;

    cout << "Ingrese numeros hasta que la suma sea mayor a  100: "<<endl;

    while (sum <=  100) {
    	
        cin >> num;
        sum += num;
        
    }

    cout << "La suma de los numeros ingresados es mayor a  100." <<endl;

	
	return 0;
}

 //5.	Escribe un programa que solicite al usuario ingresar números hasta que la suma de los números ingresados sea mayor a 100.
