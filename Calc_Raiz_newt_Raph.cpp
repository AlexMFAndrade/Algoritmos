#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int Reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Resp; 
	float y, x1, xa, aux=0, e=0.1;
	cout<<"Digite o valor que quer encontrar a raiz: ";
	cin>> y;
	x1 = y/2;
	xa = x1;
	while(fabs(xa-aux)>e){ //fabs(x) -> m�dulo de x
		aux = xa;
		xa = xa-((xa*xa-y)/(2*xa));
	}
	Resp = xa; //pegando apenas a parte inteira do valor X_Atual
	cout<<"Raiz de "<<y<<" = "<<Resp<<endl;
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

