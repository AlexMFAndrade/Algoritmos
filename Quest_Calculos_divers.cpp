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
		cout<<"Dentre as OPÇÕES:\n1-Cálculo do IMC\n2-Cálculo do INSS\n3-Cálculo do IRPF\n4-Cálculo do 13° Salário\n5-Cálculo de Férias\nOutra Opção-Sair do Programa"<<endl;
		cout<<"Qual você deseja realizar no momento: "; cin>>opcao;
		switch(opcao){
			case 1: 
				cout<<"Opção Escolhida: Calcular IMC. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					cout<<"Nome: "<<P1.Nome<<". Idade: "<<P1.Idade<<endl;
					cout<<"Seu IMC é: "<<P1.Peso/pow(P1.Altura,2)<<endl;
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o IMC? (1-Sim | 2-Não): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 2: 
				cout<<"Opção Escolhida: Cálculo de Desconto do INSS. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher Lógica do Cálculo do INSS
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o INSS? (1-Sim | 2-Não): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 3: 
				cout<<"Opção Escolhida: Cálculo de Desconto do IRPF. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher Lógica do Cálculo do IRPF
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o IRPF? (1-Sim | 2-Não): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 4: 
				cout<<"Opção Escolhida: Cálculo de 13° Salário. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher Lógica do Cálculo de 13° Salário
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular o 13° Salário? (1-Sim | 2-Não): ";
					cin>>opcao;
					if(opcao != 1){
						condicao_2=false;
					}
					cout<<"\n\n"<<condicao_2<<"\n\n";
				}
				break;
			case 5: 
				cout<<"Opção Escolhida: Cálculo de Férias. Preencha os dados para proseguir!";
				while(condicao_2){
					cont++;
					Cadastrar(&P1);
					/*
						Preencher Lógica do Cálculo de Férias
					*/
					cout<<"Quantidade de Pessoas Calculadas: "<<cont<<endl;
					cout<<"Deseja cadastrar nova Pessoa e recalcular as Férias? (1-Sim | 2-Não): ";
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
