#include <iostream>
using namespace std;

int main() {
   
   	int num1;
   	
   	cout<<"Por favor ingrese un numero"<<endl;
   	cin>>num1;
   	
   	if(num1%5 == 0){
   		
   		cout<<"El numero ingresado es multiplo de 5 \n";
   		
   		int multiplo;
   		multiplo=num1/5;
   		
   		cout<<"El valor para el numero ingresado es: "<<multiplo<<endl;
   		
   	} else if (num1%7 ==0){
   		
   		cout<<"El numero ingresado es multiplo de 7 \n";
   		
   			int multiplo;
   		multiplo=num1/7;
   		
   		cout<<"El valor para el numero ingresado es: "<<multiplo<<endl;
   		
   	}else{
   		cout<<"El numero ingresado no es multiplo de 5 y 7"<<endl;
   	}
    return 0;
}

//8.	Escribe un programa que determine si un número ingresado por el usuario es múltiplo de 5 y de 7.
