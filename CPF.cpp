#include<iostream>
//#include <ctype.h>
#include <cstdlib>
using namespace std;
int reiniciar();
int main(){
	int ver_1_d=0, ver_2_d=0, aux1=10, aux2=11, soma=0, tam=0, cpf[11];//={1,0,5,3,0,5,8,6,4,0,1};
	string entrada;
	tam = sizeof(cpf)/sizeof(cpf[0]);
	/*for (int i=0; i<tam; i++){
		cout<<"Informe o "<<i+1<<" digito do seu CPF: "; cin>>cpf[i];
	}*/
//Entrando com CPF como string e convertendo cada posição da string para um inteiro e add no vetor
	cout<<"Informe os 11 digitos do CPF sem '.' e sem '-': ";cin>>entrada;
	for(int i=0; i<tam; i++){
		cpf[i] = entrada[i]-'0'; //passando string para inteiro..pega o cód da tabela asc e subtrai do 0 em asc
		//tab Numeros em ASCII -   https://www.ime.usp.br/~kellyrb/mac2166_2015/tabela_ascii.html
	}
// Mostrando na Tela
	for (int i=0; i<tam-5; i=i+3){
		cout<<cpf[i]<<cpf[i+1]<<cpf[i+2]<<".";
	}for (int i=6; i<tam-2; i++){
		cout<<cpf[i];
	}
	cout<<"-";
	for (int i=9; i<tam; i++){
		cout<<cpf[i];
	}
	if(cpf[0]==cpf[1]&&cpf[2]==cpf[3]&&cpf[4]==cpf[5]&&cpf[6]==cpf[7]&&cpf[8]==cpf[9]&&cpf[10]==cpf[0]){
		cout<<"\nCPF Nao-Valido! Todos os Digitos Iguais\a";
	} else{
		cout<< "\nCPF sendo verificado!";
// Validando 1° Digito
		for (int i=0; i<tam-2;i++){
			soma = soma+cpf[i]*aux1;
			aux1--;
		}
		ver_1_d = (soma*10)%11;
//Teste de validação - se o resto da divisão for igual ao 1 digito pós '-', pode realizar a 2° verificação
		if(ver_1_d==cpf[9]){
			soma=0;
			for (int i=0; i<tam-1;i++){
				soma = soma+cpf[i]*aux2;
				aux2--;
			}
			ver_2_d = (soma*10)%11;
//Teste de validação - se o resto da divisão for igual ao 1 digito pós '-', pode realizar a 2° verificação
			if(ver_2_d==cpf[10]){
				cout<<"\nCPF Valido!";
			} else cout<<"\nCPF Nao-Valido! \a";
		}else cout<<"\nCPF Nao-Valido! \a";
	}
	reiniciar();
}
int reiniciar(){	
	char sair;
	cout<<"\n\nDeseja realizar uma nova operacao? (Pressione 'S' - Continuar ou 'N' - Sair)"; cin>>sair;
	sair = toupper(sair); // deixa a letra maiúscula
	switch (sair){
	case 'S': system ("cls"); return main(); break;
	case 'N': return EXIT_SUCCESS; break;
	default: cout<<"\aOpcao invalida!\n\n"; return reiniciar(); break;
	}
}
