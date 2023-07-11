#include <iostream>
#include <locale.h>
using namespace std; //necessário para utilizar os recursos I/O completos do iostream

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Hello World! É"<<endl;
	cout<<"Hello World!\n";
	cout<<"Teste saltar linha";
	//std::cout << "Hello World! É" << std::endl;
	
	return (0);
}
