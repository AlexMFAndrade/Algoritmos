#include<iostream>
#include<math.h>
using namespace std;

int main(){
	string cod;
	cout<<"Informe o codigo do produto: "; cin>>cod;
	cod.resize(4);
	cout<<cod;	
	if (cod=="ABCD"){
		cout<<"\ndeu certo";
	} else if(cod=="ASDF"){
		cout<<"\ndeu certo 2";
	}else cout<<"\a\nerrado";
}
