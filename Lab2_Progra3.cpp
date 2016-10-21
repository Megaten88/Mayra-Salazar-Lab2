#include <iostream>
using namespace std;
int base(int);
void isPandigital(int);
int decimal(int,int);
bool isPrime(int);
int main(){
	int option;
	cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
	cout<<"Ingrese una opción: ";
	cin>>option;
	while(option!=4){
		if (option == 1){
			int numPan;
			cout<<"Ingrese un número isPandigital: ";
			cin>> numPan;
			int baseNum = base(numPan); 
		}else if(option == 2){
			int sumak = 0;
			int numN;
			int prime = 0;
			cout<<"Ingrese un número para la suma k: ";
			cin>>numN;;
			for (int i = 1; i <= numN; ++i){
				if (numN%i== 0){
					prime = ((numN+i)/i);
					if (isPrime(prime))
					{
						sumak+= prime;
					}
				}
			}
			cout<<"La suma k es: "<<sumak<<endl;
		}else if(option == 3){

		}else{

		}
		cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
		cout<<"Ingrese una opción: ";
		cin>>option;
	}

	return 0;
}
int base(int num){
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
	int divisors = 0;
	for (int i = 1; i <= num; ++i){
		if (num%i== 0){
			divisors+=i;
		}
	}
	if (divisors == (num+1)){
		return true;
	}else if(divisors == 1){;
		return true;
	}else{
		return false; 
	}
}
/*int decimal(int num, int base){
	int count = 0;
	do{

	}while(num>0 && count<base)
}*/