#include <iostream>
using namespace std;
int base(int);
void isPandigital(int);
int decimal(int);
bool isPrime(int);
int main(){
	int option;
	cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
	cout<<"Ingrese una opción: ";
	cin>>option;
	while(option!=4){
		if (option == 1){
			base(2044);
		}else if(option == 2){
			int sumak = 0;
			int numN;
			cout<<"Ingrese un número para la suma k ";
			cin>>numN;
			for (int i = 1; i <=  numN; ++i){
				if (numN%i == 0)
				{

				}
			}

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
		numDigits+=1;
	}while(num2 > 0);
	return numDigits;	
}
bool isPrime(int num){
	int divisors;
	for (int i = 1; i <= num; ++i){
		if (num%i== 0){
			divisors+=i;
		}
	}
	if (divisors == (num+1)){
		return true;
	}else{
		return false; 
	}
}