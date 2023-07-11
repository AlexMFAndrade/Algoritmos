#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int A_B=0, B_C=0, C_A=0, area=0, h=0, aux=0;
	cout<<"Digite o tamanho do Vertice AB: ";cin>>A_B;
	cout<<"Digite o tamanho do Vertice BC: ";cin>>B_C;
	cout<<"Digite o tamanho do Vertice CA: ";cin>>C_A;
	if ((A_B+B_C)>C_A && (B_C+C_A)>A_B && (C_A+A_B)>B_C){
		h = sqrt(pow(A_B,2)-pow(B_C/2,2));
		area = (B_C*h)/2;
		cout<<"\nOs tamanhos informados geram um Triangulo com altura igua a "<<h<<" cm e area igual a "<<area<<" cm2";
	} else cout<<"Os vertices que foram infomados nao geram um triangulo! \a";
	//
	cout<<"\n\nPressione 1 para NOVAS ENTRADAS e VERIFICACAO ou qualquer outra tecla para SAIR!"; cin>>aux;
	switch (aux){
		case 1: system ("cls");return main(); break;
		default: return 0;
	}
}
