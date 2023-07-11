#include <iostream>
#include <locale.h>
#include <math.h>
#include <cstdlib> //Utilizar o EXIT_SUCCESS

using namespace std;

float Soma(float a, float b);
float Subt(float a, float b);
int main(){
	setlocale(LC_ALL, "Portuguese");
	float x=0, y=0;
	char opcao;
	cout<<"Informe o 1: ";
	cin>>x;
	cout<<"Informe o 2: ";
	cin>>y;
	cout<<"Informe a opração desejada (A - Soma | S - Subtração)!";
	cin>>opcao;
	opcao = toupper(opcao);
	switch(opcao){
		case 'A': 
			cout<<"O resultado da soma é: "<<Soma(x,y);
			break;
		case 'S':
			cout<<"O resultado da subtração é: "<<Subt(x,y);
			break;
		default: 
			cout<<"Opção inválida! Será retornado para o inicio.";
			main();
			break;
	}
	return 0;
}
float Soma(float a, float b){
	float resultado;
	resultado = a+b;
	return resultado;
}
float Subt(float a, float b){
	float resultado;
	resultado = a-b;
	return resultado;
}
