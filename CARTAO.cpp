#include<iostream>
#include <sstream>
using namespace std;
//
int main(){
	char dig, dig2;
	string numero_cartao;
	int resto=0, soma_T=0, soma_2=0, soma_1=0, aux1=0, a=0, b=0, cartao[16];
//Recebendo Número do Cartão	
	cout<<"Informe o numero do cartao: "; cin>>numero_cartao;
	for(int i=0; i<16; i++){
		cartao[i] = numero_cartao[i]-'0';
		cout<<cartao[i];
	}
	cout<<"\n\nO numero do cartao digitado foi:\n";
	for(int i=0; i<16; i++){
		cout<<cartao[i];
	}
	cout<<"\n\nDeseja prosseguir com a validacao? (N-Redigitar | X-Fechar | Qlqer Tcla-Continuar)\n"; cin>>dig; dig=toupper(dig);
	switch(dig){
		case 'X': return 0; break;
		case 'N': system ("cls"); return main(); break;
		default:    
//Verificando Bandeira do Cartão - 6 Primeiros Dígitos
			if(cartao[0]!=3 && cartao[0]!=4 && cartao[0]!=5 && cartao[0]!=6){
				cout<<"\nEsse numero nao corresponde a um Cartao de Credito!\a";
			} else if(cartao[0]==4){
				cout<<"\nO cartao e Bandeira VISA!";
			}else if(cartao[0] == 3 && (cartao[1]==4 || cartao[1]==7)){
				cout<<"\nO cartao e Bandeira AMERICAN EXPRESS!";
			}else if(cartao[0] == 5 && (cartao[1]>0 && cartao[1] <6)){
				cout<<"\nO cartao e Bandeira MASTER!";
			}else cout<<"\nO cartao possui Bandeira DESCONHECIDA!";
//Digito 7 ao Digito 15 serve para identificar o Cliente - Ultimo Dígito é o Verificador
	//Validando Digito Verificador
		//Posições Ímpares
			for(int i=0;i<15;i=i+2){
				aux1 = cartao[i]*2;
				if(aux1>=10){
					stringstream aux; string dig_str;
					aux<<aux1; aux>>dig_str;
					a=dig_str[0]-'0'; b=dig_str[1]-'0';
					soma_1 = soma_1+(a+b);
				}else soma_1=soma_1 + aux1;
			}
		//Posições Pares
			for(int i=1;i<14;i=i+2){
				soma_2=soma_2 + cartao[i];
			}
		//Somando os dígitos + o digito verificador e pegando o resto por 10 para testar validação
			soma_T = soma_1+soma_2;
			resto = (soma_T+cartao[15])%10;
			if(resto==0){
				cout<<"\nO Cartao e VALIDO!";
			}else cout<<"\nO Cartao Nao e VALIDO!"<<"\nTotal da soma: "<<soma_T;
		;break;
	}
	cout<<"\n\nDeseja realizar outra validacao? (S-Sim | N-Fechar)\n"; cin>>dig2; dig2=toupper(dig2);
	switch(dig2){
		case 'N': return 0; break;
		case 'S': system ("cls"); return main(); break;
		default: cout<<"\nCaractere nao reconhecido! O Sistema sera fechado!\a"; break;
	}
	
}
