#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int Reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Novo, Anterior, Aux;
	cout<<"Informe um inteiro positivo: ";
	cin>>Novo;
	Anterior = Novo;
	while(Novo <= Anterior*2){
		Anterior = Novo;
		cout<<"Informe um outro inteiro positivo: ";
		cin>>Novo;
		cout<<endl<<Novo<<endl;
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
		cout<<"O digito informado é invalido! Digite novamente!"<<endl;
		Reiniciar();
	}
}

