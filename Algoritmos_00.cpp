#include <iostream>
#include <locale.h>
using namespace std; //necess�rio para utilizar os recursos I/O completos do iostream

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout<<"Hello World! �"<<endl;
	cout<<"Hello World!\n";
	cout<<"Teste saltar linha";
	//std::cout << "Hello World! �" << std::endl;
	
	return (0);
}
