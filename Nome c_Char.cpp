#include <iostream>
#include <cstring>
using namespace std;

int main (){
	int Matricula;
	char Nome[50];
	cout << "Digite um nome: " << endl;
	cin.getline(Nome,50);
	cout<<"O nome armazenado é :" << Nome; 
	cout<<"\nPossui: " << strlen(Nome) <<  " caracteres." << endl;
	cout<<"Informe sua matricula: ";
	cin>>Matricula;
	return 0;
}
