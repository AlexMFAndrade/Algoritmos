#include<iostream>
#include<cstdlib>
#include <locale.h>
using namespace std;
//
int reiniciar();
int main(){
	setlocale(LC_ALL, "Portuguese");
	int x=0; //tamanho do vetor
	cout<<"Informe o tamanho do Vetor: "; cin>>x;
	cout<<"\n\n";
	int Vet[x-1], i=0, aux=0, soma=0, cP=1, cI=1, *VetP, *VetI;
	while(i<x){
		cout<<"Informe o "<<i+1<<"� n�mero: ";cin>>Vet[i];
		i++;
	}
	system ("cls");
	cout<<"Vetor Digitado:\n";
	for(int a=0;a<x;a++){
		cout<<Vet[a]<<" ";
	}
	//
	VetP = (int *)malloc(cP*sizeof(int)); //sizeof -> retorna o n�mero de bytes ocupado por um (tipo)
	VetI = (int *)malloc(cI*sizeof(int));
	//
	cout<<"\n\n";
	for(i=0;i<x;i++){
		aux=Vet[i]%2;
		if(aux==0){
			cout<<"\n O n�mero "<<Vet[i]<<" � PAR!";
			soma = soma+Vet[i];
			//VetP[cP-1]=Vet[i];
			cP++;
		}else {
			cout<<"\n O n�mero "<<Vet[i]<<" � IMPAR!";
			//VetI[cI-1]=Vet[i];
			cI++;
		}
	}
	cout<<"\n\nA SOMA dos n�meros pares digitados �: "<<soma;
	cout<<"\nA quantidade de n�meros �mpares digitados �: "<<cI-1;
	/*cout<<"\n\nN�meros PARES:\n";
	for(i=0;i<cP-1;i++){
		cout<<" "<<VetP[i];
	}
	cout<<"\n\nN�meros IMPARES:\n";
	for(int b=0;b<cI-1;b++){
		cout<<" "<<VetI[b];
	}*/
	reiniciar();
}
//
int reiniciar(){
	char sair;
	cout<<"\nDeseja realizar um novo teste? (S-SIM | N-N�O)"; cin>>sair;
	sair = toupper(sair); // deixa a letra mai�scula  -- Pode pedir a biblioteca ctype.h
	switch(sair){
		case 'S': system ("cls"); return main(); break;
		//case 'N': return (0); break;
		case 'N': return EXIT_SUCCESS; break; //EXIT_SUCCESS precisa da biblioteca cstdlib
		default: cout<<"\aOp��o invalida!\n\n"; return reiniciar(); break;
	}
}
