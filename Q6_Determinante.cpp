#include<iostream>
#include<cstdlib>
#include<locale.h>
#include<math.h>
using namespace std;
//
int reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	int M[3][3], M2[3][5], DetM=0;;
	cout<<"Entre com a Matriz 3x3!\n";
	for(int l=0;l<3;l++){
		for(int c=0; c<3;c++){
			cout<<"Informe o Elemento da Linha "<<l+1<<" e Coluna "<<c+1<<": "; cin>>M[l][c];
		}
	}
	system ("cls");
	cout<<"A Matriz informada é:\n";
	for(int l=0; l<3; l++){
		for(int c=0; c<3; c++){
			cout<<M[l][c]<<" ";
		}
		cout<<"\n";
	}
	//copiando as 3 primeiras colunas
	for(int l=0; l<3; l++){
		for(int c=0; c<3; c++){
			M2[l][c]=M[l][c];
		}
	}
	//pegando as duas primeiras colunas e repplicando
	for(int l=0; l<3; l++){
		for(int c=3; c<5; c++){
			M2[l][c]=M[l][c-3];
		}
	}
	//Nova Matriz 3x5
	cout<<"\n\nA Matriz NOVA (3x5) é:\n";
	for(int l=0; l<3; l++){
		for(int c=0; c<5; c++){
			cout<<M2[l][c]<<" ";
		}
		cout<<"\n";
	}
	int a=0,b=0,c=0,d=0,e=0,f=0;
	a = M2[0][0]*M2[1][1]*M2[2][2]; b = M2[0][1]*M2[1][2]*M2[2][3]; c = M2[0][2]*M2[1][3]*M2[2][4];
	d = M2[0][2]*M2[1][1]*M2[2][0]; e = M2[0][3]*M2[1][2]*M2[2][1]; f = M2[0][4]*M2[1][3]*M2[2][2];
	DetM = (a+b+c)-(d+e+f);
	cout<<"\n"<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
	cout<<"\nO DETERMINANTE da Matriz informada é: "<< DetM;
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
