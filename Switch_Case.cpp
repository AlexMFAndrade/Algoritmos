#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
#define Tam 5

int Reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	char Menu;
	char Teste[Tam];
	cout<<"Op��o (M - Michel | A - alex): ";
	cin>>Menu;
	Menu = toupper(Menu);
	cout<<"Op��o (Casa | Coffe): ";
	cin>>Teste;
	for(int i=0; i<Tam; i++){
		Teste[i] = toupper(Teste[i]);
	}
	switch(Menu){ // switch s� verifica um Caractere ou um Inteiro
		case 'M':
			cout<<"Michel\n";
			break;
		case 'A':
			cout<<"Alex\n";
			break;
		default:
			cout<<"Inv�lido!\n";
			break;
	}
	if(strcmp(Teste, "CASA") == 0){
		cout<<"Casa\n";
	}else if (strcmp(Teste, "COFFE") == 0){
		cout<<"Coffe\n";
	}else{
		cout<<"Inv�lido!\n";
	}
	Reiniciar();
}
int Reiniciar(){
	char verificador;
	cout<<"Informe o que deseja fazer! (S-Sair | R-Reinicar): ";
	cin>>verificador;
	verificador = toupper(verificador);//passando o caractere informado para MAIUSCULO
	if(verificador == 'S'){
		return 0;
	} else if(verificador == 'R'){
		system("cls");
		main();
	} else{
		cout<<"O digito informado � invalido! Digite novamente!"<<endl;
		Reiniciar();
	}
}

