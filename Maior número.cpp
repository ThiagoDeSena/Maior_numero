//4. Escreva um programa em C que solicita 10 n�meros ao usu�rio, atrav�s de um la�o while, e ao final mostre qual destes n�meros � o maior.
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
