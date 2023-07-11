#include <iostream>
#include <locale.h>
#include <math.h>
#include <string>	

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	string nome_func;
	cout<<"Informe seu primeiro nome: ";
	cin>> nome_func;
	cout<<nome_func;
	return 0;
}

