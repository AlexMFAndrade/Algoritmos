#include <iostream>
#include <cstring>

using namespace std;

int main(){

	char Teste[200];
	cout << "Digite uma frase (até 200 caracteres): " << endl;
	cin.getline(Teste,200);
	cout<<"A frase armazenada é :" << Teste; 
	int Tam = strlen(Teste);
	cout<<"\nPossui: " << Tam <<  " caracteres." << endl; //strlen
	for(int i=0; i<Tam; i++){
		if(Teste[i]=='a') Teste[i]='1';
		else if(Teste[i]=='b') Teste[i]='2';
		else if(Teste[i]=='c') Teste[i]='3';
	}
	cout<<"Frase codificada é :" << Teste;
}
