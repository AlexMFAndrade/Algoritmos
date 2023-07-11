#include <iostream>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

struct Pessoa{
	char Nome[50];
	int Idade;
	float Peso;
	float Altura;
};

void Cadastrar(Pessoa *P);

int main(){
	setlocale(LC_ALL, "Portuguese");
	Pessoa P1;
	bool condicao_1 = true, condicao_2=true;
	int opcao;
	int cont;
	while(condicao_1){
		system("cls");
		condicao_2=true;
		cont=0;
		cout<<"Dentre as OP��ES:\n1-C�lculo do IMC\n2-C�lculo do INSS\n3-C�lculo do IRPF\n4-C�lculo do 13� Sal�rio\n5-C�lculo de F�rias\nOutra Op��o-Sair do Programa"<<endl;
		cout<<"Qual voc� deseja realizar no momento: "; cin>>opcao;
		switch(opcao){
			case 1: 
				cout<<"Op��o Escolhida: Calcular IMC. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					cout<<"Nome: "<<P1.Nome<<". Idade: "<<P1.Idade<<endl;
					cout<<"Seu IMC �: "<<P1.Peso/pow(P1.Altura,2)<<endl;
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o IMC? (1-Sim | 2-N�o): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 2: 
				cout<<"Op��o Escolhida: C�lculo de Desconto do INSS. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher L�gica do C�lculo do INSS
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o INSS? (1-Sim | 2-N�o): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 3: 
				cout<<"Op��o Escolhida: C�lculo de Desconto do IRPF. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher L�gica do C�lculo do IRPF
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o IRPF? (1-Sim | 2-N�o): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 4: 
				cout<<"Op��o Escolhida: C�lculo de 13� Sal�rio. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher L�gica do C�lculo de 13� Sal�rio
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o 13� Sal�rio? (1-Sim | 2-N�o): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 5: 
				cout<<"Op��o Escolhida: C�lculo de F�rias. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher L�gica do C�lculo de F�rias
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular as F�rias? (1-Sim | 2-N�o): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			default: 
				condicao_1 = false;
				break;
		}		
	}
	exit(0);
}
void Cadastrar(Pessoa *P){
	cout<<"Cadastrar dados de uma Pessoa!"<<endl;
	fflush(stdin);
	cout<<"Nome: "; cin.getline(P->Nome, 50);
	cout<<"Idade: "; cin>>P->Idade;
	cout<<"Peso (Kg): "; cin>>P->Peso;
	cout<<"Altura (m): "; cin>>P->Altura;
}
