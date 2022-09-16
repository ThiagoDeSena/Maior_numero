//4. Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final mostre qual destes números é o maior.
#include <iostream>

using namespace std;

int main(){
	int num[10],i=0,maior=0;
	
	do{
		cout<<"Digite um numero: ";
		cin>>num[i];
		if(num[i]>=maior)
		{
			maior=num[i];
		}
		i++;
	}while(i<10);
	
	cout<<"O maior numero digitado foi: "<<maior;
	
	
}
