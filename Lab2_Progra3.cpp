#include <iostream>
using namespace std;
void base(int);
int decimal(int);
int main(){
	int option;
	cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
	cout<<"Ingrese una opción: ";
	cin>>option;
	while(option!=4){
		if (option == 1){
			base(2044);
		}else if(option == 2){

		}else if(option == 3){

		}else{

		}
		cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
		cout<<"Ingrese una opción: ";
		cin>>option;
	}

	return 0;
}
void base(int num){
	int num2 = num;
	int numDigits = 0;
	do{
		cout<<(num2%10)<<endl;
		num2/=10;
	}while(num2 > 0);	
}