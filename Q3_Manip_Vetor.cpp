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
		cout<<"Informe o "<<i+1<<"° número: ";cin>>Vet[i];
		i++;
	}
	system ("cls");
	cout<<"Vetor Digitado:\n";
	for(int a=0;a<x;a++){
		cout<<Vet[a]<<" ";
	}
	//
	VetP = (int *)malloc(cP*sizeof(int)); //sizeof -> retorna o número de bytes ocupado por um (tipo)
	VetI = (int *)malloc(cI*sizeof(int));
	//
	cout<<"\n\n";
	for(i=0;i<x;i++){
		aux=Vet[i]%2;
		if(aux==0){
			cout<<"\n O número "<<Vet[i]<<" é PAR!";
			soma = soma+Vet[i];
			//VetP[cP-1]=Vet[i];
			cP++;
		}else {
			cout<<"\n O número "<<Vet[i]<<" é IMPAR!";
			//VetI[cI-1]=Vet[i];
			cI++;
		}
	}
	cout<<"\n\nA SOMA dos números pares digitados é: "<<soma;
	cout<<"\nA quantidade de números ímpares digitados é: "<<cI-1;
	/*cout<<"\n\nNúmeros PARES:\n";
	for(i=0;i<cP-1;i++){
		cout<<" "<<VetP[i];
	}
	cout<<"\n\nNúmeros IMPARES:\n";
	for(int b=0;b<cI-1;b++){
		cout<<" "<<VetI[b];
	}*/
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
