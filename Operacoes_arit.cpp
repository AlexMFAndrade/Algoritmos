//Programa para realizar operações aritméticas entre dois números
#include <iostream>
#include <math.h>
#include <ctype.h>
#include <cstdlib>
using namespace std;
// Declarando Funções auxiliares
int reiniciar();
double opcao(double a, double b);
double soma(double a, double b);
double subt(double a, double b);
double mult(double a, double b);
double divi(double a, double b);
//Função Principal
int main(){
	double a=0, b=0, result=0;
	cout<<"Digite o Primeiro valor da Operacao: "; cin>>a;
	cout<<"\nDigite o Segundo valor da operacao: "; cin>>b; 
	result = opcao(a,b);
	cout<<"O resultado da operacao escolhida = "<<result<<"\n";
	reiniciar();
}
//Operações
double soma(double a, double b){
	return a+b;
}
double subt(double a, double b){
	return a-b;
}
double mult(double a, double b){
	return a*b;
}
double divi(double a, double b){
	return a/b;
}
//
int reiniciar(){	
	char sair;
	cout<<"Deseja realizar uma nova operacao? (Pressione 'S' - Continuar ou 'N' - Sair)"; cin>>sair;
	sair = toupper(sair); // deixa a letra maiúscula
	switch (sair){
	case 'S': system ("cls"); return main(); break;
	case 'N': return EXIT_SUCCESS;; break;
	default: cout<<"\aOpcao invalida!\n\n"; return reiniciar(); break;
	}
}
double opcao(double a, double b){
	char op_a; 
	cout<<"\nS-Soma\nU-Subtracao\nM-Multiplicacao\nD-Divisao e Resto\nInforme a operacao desejada entre as opcoes acima: "; cin>>op_a; op_a = toupper(op_a);
	switch(op_a){
		case 'S': return soma(a,b); break;
		case 'U': return subt(a,b); break;
		case 'M': return mult(a,b); break;
		case 'D': return divi(a,b); break;
		default: cout<<"Opcao invalida! Nao foi possivel realizar nenhuma operacao. Entre com os valores novamente.\n\n"; break; 
	}
}
