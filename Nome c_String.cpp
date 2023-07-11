#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	string Nome;
	int Matricula;
	cout<<"Informe a sua matricula: ";
	cin>>Matricula;
	cin.ignore();//precisa utilizar para desconsiderar o \n no buffer de memória, caso receba um Inteiro antes de receber o Nome
	cout<<"Informe seu nome completo: ";
	getline(cin, Nome);
	cout<<"\n\nNome informado: "<<Nome;
	return 0;	
}

