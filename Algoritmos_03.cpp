#include <iostream>
#include <locale.h>

using namespace std;

int Sair(char caractere);
int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha=1234, senha_inf=0;
	cout<<"Digite uma senha de 4 digitos numéricos: ";
	cin>>senha_inf;
	if(senha == senha_inf){
		cout<<"Senha Válida!";
	}else {
		cout<<"Senha Inválida!";
	}
		
	char Digito;
	cout<<"\n\nVocê deseja realizar uma nova operação?\n(S - Permanecer no Programa | N - Sair do Programa)";
	cin>>Digito;
	
	Sair(Digito);
}
int Sair(char caractere){
	caractere = toupper(caractere);
	if (caractere == 'S'){
		system("cls");
		main();
	} else if (caractere == 'N'){
		return 0;	
	} else {
		cout<<"\nO digito INFORMADO não é ACEITO! Digite S ou N!";
		cin>>caractere;
		Sair(caractere);
	}
}
