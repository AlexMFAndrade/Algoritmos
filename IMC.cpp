//Programa para Calcular o IMC=Peso/Altura²
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float peso=0,altura=0,IMC=0, IMC2=0;
	char nome[255];

	cout<< "====================="<<endl;
	cout<< "Calculo do peso ideal"<<endl;
	cout<< "====================="<<endl;
	cout<< "\nDigite seu Nome: ";	cin>> nome;
	cout<< "\nInforme sua Altura (cm): "; cin>> altura;
	cout<< "\nInforme seu Peso: ";	cin>> peso;
	IMC = peso/(pow(altura/100,2));
	IMC2 = peso/altura/100*altura/100;
	cout<<"Sr(a) "<<nome<<" seu IMC = "<<IMC<<" teste"<<IMC2<<endl<<endl;
	return main(); //return 0; se quiser fazer apenas 1 vez
}
