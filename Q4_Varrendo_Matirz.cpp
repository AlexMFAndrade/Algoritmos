#include<iostream>
#include<cstdlib>
#include <locale.h>
using namespace std;
//
int reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Li=0, Co=0, x=0, Lin=0, Col=0;
	cout<<"Informe a quantidade de Linhas da sua Matriz: "; cin>>Li;
	cout<<"Informe a quantidade de Colunas da sua Matriz: "; cin>>Co;
	system ("cls");
	cout<<"Sua Matriz é uma "<<Li<<"X"<<Co<<"\n";
	int M[Li][Co];
	cout<<"Entre com os elementos da sua Matriz!\n\n";
	for(int l=0; l<Li; l++){
		for(int c=0; c<Co; c++){
			cout<<"Informe o Elemento da Linha "<<l+1<<" e Coluna "<<c+1<<": "; cin>>M[l][c];
		}
	}
	system ("cls");
	cout<<"\n\nInforme o número que deseja buscar na Matriz: "; cin>>x;
	// Imprimindo a Matriz
	cout<<"\n";
	for(int l=0; l<Li; l++){
		for(int c=0; c<Co; c++){
			cout<<M[l][c]<<" ";
		}
		cout<<"\n";
	}
	bool aux;
	for(int l=0; l<Li; l++){
		for(int c=0; c<Co; c++){
			if(M[l][c]==x){
				aux = true;
				Lin = l+1;
				Col = c+1;
			}
		}
	}
	if (aux){
		cout<<"\n O número solicitado se encontra na Linha: "<<Lin<<" Coluna: "<<Col;
	}else cout<<"\n O número solicitado NÃO FOI ENCONTRADO!";
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
