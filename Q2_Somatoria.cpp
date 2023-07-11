#include<iostream>
#include<cstdlib>
#include <locale.h>
using namespace std;
//
int reiniciar();
int main(){
	int x=0, y=0;
	setlocale(LC_ALL, "Portuguese"); //aceitar ACENTOS -- biblioteca locale.h
	cout<<"Entre com um número para ser feito a operação: "; cin>>x;
	for(int i=1; i<=100; i++){
		y = (x+i)+y;
	}
	cout<<"\nO Resultado da operação é: "<<y;
	reiniciar();
}
//
int reiniciar(){
	char sair;
	cout<<"\nDeseja realizar um novo teste? (S-SIM | N-NÃO)"; cin>>sair;
	sair = toupper(sair); // deixa a letra maiúscula  -- Pode pedir a biblioteca ctype.h
	switch(sair){
		case 'S': system ("cls"); return main(); break;
		//case 'N': return (0); break;
		case 'N': return EXIT_SUCCESS; break; //EXIT_SUCCESS precisa da biblioteca cstdlib
		default: cout<<"\aOpção invalida!\n\n"; return reiniciar(); break;
	}
}
