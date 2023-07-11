#include<iostream>
#include<math.h>
#include <cstdlib>
using namespace std; //evita ter de colocar std:: sempre q utilizar a biblioteca no cin e cout
//
int reiniciar();
int main(){
	int A_B=0, B_C=0, C_A=0, A=0, sP=0;
	cout<<"Informe o Comprimento da Reta A_B: "; cin>>A_B;
	cout<<"\nInforme o Comprimento da Reta B_C: "; cin>>B_C;
	cout<<"\nInforme o Comprimento da Reta C_A: "; cin>>C_A;
	if(A_B<B_C+C_A && B_C<A_B+C_A && C_A<A_B+B_C){
		sP = (A_B+B_C+C_A)/2; //semiperimetro --> Formula de Heron
		A = sqrt(sP*(sP-a)*(sP-b)*(sP-c)); //PRECISA DA math.h  -- pow(x,3)=x³
		cout<<"\nCom esses Comprimentos PODEMOS formar um triangulo com area = "<<A<<" (cm|m)2";
	}else cout<<"\nCom esses Comprimentos NAO PODEMOS formar um triangulo!";
	reiniciar();
}
//
int reiniciar(){
	char sair;
	cout<<"\nDeseja realizar um novo teste? (S-SIM | N-NAO)"; cin>>sair;
	sair = toupper(sair); // deixa a letra maiúscula  -- Pode pedir a biblioteca ctype.h
	switch(sair){
		case 'S': system ("cls"); return main(); break;
		//case 'N': return (0); break;
		case 'N': return EXIT_SUCCESS; break; //EXIT_SUCCESS precisa da biblioteca cstdlib
		default: cout<<"\aOpcao invalida!\n\n"; return reiniciar(); break;
	}
}