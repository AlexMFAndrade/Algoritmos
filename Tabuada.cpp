#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
void soma(float num);
void subt(float num);
void mult(float num);
void divi(float num);
int reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	float x=0;
	char dig;
	cout<<"\nInforme o valor que deseja ver a tabuada: ";
	cin>>x;
	cout<<"Informe a operação que deseja visualizar a tabuada (A-Soma | S-Subtração | M-Multiplicação | D-Divisão): ";
	cin>>dig; dig = toupper(dig);
	switch(dig){
		case 'A': soma(x); break;
		case 'S': subt(x); break;
		case 'M': mult(x); break;
		case 'D': divi(x); break;
		default: system("cls"); cout<<"Opção errada! Inicializando novamente!\n"; main();break;
	}
}
void soma(float num){
	cout<<"Opção Escolhida: Tabela da SOMA!\n";
	for(int i=1; i<=10; i++){
		cout<<num<<" + "<<i<<" = "<<num+i<<endl;
	}
	reiniciar();
}
void subt(float num){
	cout<<"Opção Escolhida: Tabela da SUBTRAÇÃO!\n";
	for(int i=1; i<=10; i++){
		cout<<num<<" - "<<i<<" = "<<num-i<<endl;
	}
	reiniciar();
}
void mult(float num){
	cout<<"Opção Escolhida: Tabela da MULTIPLICAÇÃO!\n";
	for(int i=1; i<=10; i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	reiniciar();
}
void divi(float num){
	cout<<"Opção Escolhida: Tabela da DIVISÃO!\n";
	float aux=0;
	for(int i=1; i<=10; i++){
		aux = num/i;
		cout<<num<<" / "<<i<<" = "<<aux<<endl;
	}
	reiniciar();
}
int reiniciar(){
	char dig;
	cout<<"Informe a operação que deseja ver a tabuada (S-Sair | R-Reiniciar): ";
	cin>>dig; dig = toupper(dig);
	switch(dig){
		case 'S': cout<<"Até MAIS!"; return 0; break;
		case 'R': system("cls"); main(); break;
		default: cout<<"Opção errada!\n"; reiniciar();break;
	}
}
