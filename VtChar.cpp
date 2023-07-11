#include<iostream>
using namespace std;

int main(){
	int a=0,b=0;
	int vet[] = {5, 3, 22, 3223}; 
	int vet2[50]; vet2[0]=0; vet2[1]=1; vet2[2]=2; vet2[3]=3; vet2[4]=10;
	float vet3[9] = {5.34, 2.345, 65.34, 12.2345};
	//
	cout<<*vet<<"\n"<<vet2<<"\n";
	//
	a = sizeof(vet)/sizeof(vet[0]); cout<<"\n"<<a<<"\n";
	for(int i=0; i<a; i++){
		cout<<vet[i]<<", ";
	}
	//
	cout<<endl;
	b = sizeof(vet3)/sizeof(vet3[0]); //pegando tamanho do vetor - SIZEOF -> operador permite saber o número de bytes ocupado por um determinado tipo de variável.
	cout<<"\n"<<b<<"\n";
	for(int i=0; i<b; i++){
		cout<<vet3[i]<<", ";
	}
	//
	char nome[5] = {"Alex"};//add o \0(sinaliza o fim do caractere do vetor) automaticamente
	char nome2[5] = {'A','l','e','x','\0'};
	cout<<"\n\n"<<nome<<"\n"<<nome[0]<<"\n"<<nome[1]<<"\n"<<nome[2]<<"\n"<<nome[3]<<"\n"<<nome[4];
	cout<<"\n"<<nome2<<"\n"<<nome2[0]<<"\n"<<nome2[1]<<"\n"<<nome2[2]<<"\n"<<nome2[3]<<"\n"<<nome2[4];
	//
	string teste[4] = {"alex", "teste", "ok", "foi"};
	cout<<"\n"<<teste<<"\n";
	for(int i=0; i<4; i++){
		cout<<teste[i]<<", ";
	}
}

// Fazer algoritmo para receber 5 notas em um vetor, multiplicar por um peso (3,2,3,4,1 = 13), mostrar todas e a média.

// Procurem e façam analisador/gerador de CPF e Cartão Crédito
// https://www.ime.usp.br/~macmulti/exercicios/vetores/

// https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/

// https://www.youtube.com/watch?v=vqvzS6pkHaE&list=PLogSH2Y0MF_rPY3z4Y_yVnBBf2NTyQR--&index=8
// https://www.youtube.com/watch?v=8d75EBfDSjs&list=PLtchvIBq_CRQvSbv3uu66yZIQURgqUDf4&index=15
