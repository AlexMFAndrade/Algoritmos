#include<iostream>
#include<cstdlib>
#include <locale.h>
using namespace std;
//
int reiniciar();
int main(){
	int x=0, y=0;
	setlocale(LC_ALL, "Portuguese"); //aceitar ACENTOS -- biblioteca locale.h
	cout<<"Entre com um n�mero para ser feito a opera��o: "; cin>>x;
	for(int i=1; i<=100; i++){
		y = (x+i)+y;
	}
	cout<<"\nO Resultado da opera��o �: "<<y;
	reiniciar();
}
//
int reiniciar(){
	char sair;
	cout<<"\nDeseja realizar um novo teste? (S-SIM | N-N�O)"; cin>>sair;
	sair = toupper(sair); // deixa a letra mai�scula  -- Pode pedir a biblioteca ctype.h
	switch(sair){
		case 'S': system ("cls"); return main(); break;
		//case 'N': return (0); break;
		case 'N': return EXIT_SUCCESS; break; //EXIT_SUCCESS precisa da biblioteca cstdlib
		default: cout<<"\aOp��o invalida!\n\n"; return reiniciar(); break;
	}
}
