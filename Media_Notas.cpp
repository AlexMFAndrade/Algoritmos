//Programa para dizer se foi aprovado ou não
#include <iostream>
#include <math.h>
#include <ctype.h>
//
using namespace std;
// Declarando Funções auxiliares
int reiniciar();
//
int main(){
	float n1,n2,n3,media;
	cout<<"Digite a Nota da Unidade1: "; cin>>n1;
	cout<<"Digite a Nota da Unidade2: "; cin>>n2;
	cout<<"Digite a Nota da Unidade3: "; cin>>n3;
	media=(n1+n2+n3)/3;
	cout<<"Sua Media = ";cout<<media;
	if (media>=6){
		cout<<"\nVoce foi Aprovado. Parabens!"<<endl<<endl;
	} else {
		cout<<"\nInfelizmente voce ficou em Recuperacao. Bons estudos!\a"<<endl<<endl;
	}
	reiniciar();		
}
//
int reiniciar(){	
	int sair=0;
	cout<<"Deseja realizar uma nova verificacao de Notas? (Pressione 1 - Continuar ou 2 - Sair)"; cin>>sair;
	/*while (sair!=1 && sair!=2){
		cout<<"Tecla nao reconhecida. (Pressione 1 - Continuar ou 2 - Sair)"; cin>>sair;
	}
	if (sair==1){
		return main();
	} else if(sair==2) {
		return 0;
	}*/
	switch (sair){
	case 1: system ("cls"); return main(); break;
	case 2: return 0; break;
	default: cout<<"\aOpcao invalida!\n\n"; return reiniciar(); break;
	}
}
