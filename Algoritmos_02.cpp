#include <iostream>
#include <locale.h>


using namespace std;

int Soma(int x, int y);
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,acumulador=0;
	cout<<"Digite o valor do 1° Operando: ";
	cin>>a;
	cout<<"Digite o valor do 2° Operando: ";
	cin>>b;
	acumulador = Soma(a,b);
	cout<<"\nA soma dos 2 números informados é: "<<acumulador;
	cout<<"\nInforme mais um operando para somar com a soma anterior: ";
	cin>>a;
	cout<<"\nA soma dos 2 números informados é: "<<Soma(acumulador,a);
	return 0;
}

int Soma(int x, int y){
	int resultado=0;
	resultado = x+y;
	return resultado;
}

