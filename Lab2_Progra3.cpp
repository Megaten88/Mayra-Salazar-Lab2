#include <iostream>
#include <cmath>
using namespace std;
int base(int);
bool isPandigital(int);
int decimal(int,int);
bool isPrime(int);
bool hashard(int);
bool hashardtruncable(int);
bool hashardStrong(int);
int main(){
	int option;
	cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
	cout<<"Ingrese una opción: ";
	cin>>option;
	while(option < 4){
		if (option == 1){
			int numPan;
			cout<<"Ingrese un número pandigital: ";
			cin>> numPan;
			int baseNum = base(numPan);
			cout<<"El decimal del número es: "<< decimal(numPan,baseNum)<<endl;
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
			int numHashard;
			cout<<"Ingrese un número hashard: ";
			cin>> numHashard;
			if (hashard(numHashard)){
				if (hashardtruncable(numHashard) && hashardStrong(numHashard))
				{
					cout<<"Es truncable y un número fuerte de Hashard."<<endl;
				}else if(hashardtruncable(numHashard) && !hashardStrong(numHashard)){
					cout<<"Es un número truncable de Hashard."<<endl;

				}else if(!hashardtruncable(numHashard) && hashardStrong(numHashard)){
					cout<<"Es un número fuerte de Hashard."<<endl;

				}else{
					cout<<"No es ni fuerte ni truncable"<<endl;
				}
			}else{
				cout<<"No es un número hashard"<<endl;
			}
		}else{
			cout<<"Ingresó una opción inválida."<<endl;
		}
		cout<<"----Menú-------\n 1)Ejercicio 1\n 2) Ejercicio 2\n 3) Ejercicio 3\n 4)Salir"<<endl;
		cout<<"Ingrese una opción: ";
		cin>>option;
	}

	return 0;
}
int base(int num){
	int numDigits = 0;
	do{
		num/=10;
		numDigits+=1;
	}while(num > 0);
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
int decimal(int num, int base){
	int count = 0;
	int decimalNum = 0;
	do{
		decimalNum+= num%10*pow(base, count);
		num/=10;
		count++;
	}while(num>0);
	return decimalNum;
}
bool hashardtruncable(int num){
	bool hash = true;
	int digit = base(num);
	do{
		if (num%digit == 0){
			hash = true;
			num/=10;
			digit--;
		}else{
			hash = false;
		}
		return hash;
	}while(num>0 && hash);
}
bool hashard(int num){
	if (num%(base(num))==0)
	{
		return true;
	}else{
		return false;
	}
}
bool hashardStrong(int num){
	int number = num/(base(num));
	if (isPrime(number))
	{
		return true;
	}else{
		return false;
	}
}
